/*
 * File: racer.cpp
 * Author: Logan Bowers
 * Description: Contains code for functions, operators, and
 * constructors for a racer class defined in racer.h
 */

#include "racer.h"
#include <string>
#include <cstring>
#include <iomanip>

using namespace std;
// Racer number cannot be a negative number
const int MIN_RACER_NUM = 0;

// Default constructor
Racer::Racer()
{
	name = "";
	racerNum = 0;
	// Sensor default constructor auto called
	totalDist = 0.0;
	// Timestamp default auto called
	isCheater = false;
}


/* 
 * 4-arg constructor
 * Parameters: name n, racer number rn, sensor sens, total distance td,
 * timestamp tt, boolean for cheat
 */
Racer::Racer(string n, int rn, Sensor sens, double td, Timestamp tt, bool cheat)
{
	// Call set functions
	setName(n);
	setRacerNum(rn);
	setSensor(sens);
	setTotalDist(td);
	setTotalTime(tt);
	setCheat(cheat);
}


/*
 * Sets the name for a racer
 * Parameters: name n (string object)
 */
void Racer::setName(string n)
{
	name = n;
}

/*
 * Sets name for a racer
 * Parameters: name n (c-string)
 */
void Racer::setName(char n[])
{
	name = n;
}

/*
 * Sets racer number
 * Parameters: racer number rn
 */
void Racer::setRacerNum(int rn)
{
	if (rn < MIN_RACER_NUM)
		racerNum = MIN_RACER_NUM;
	else
		racerNum = rn;
}

/*
 * Sets total distance
 * Parameters: total distance totalD
 */
void Racer::setTotalDist(double totalD)
{
	if(totalD < MIN_MILEMARK)
		totalDist = MIN_MILEMARK;
	else
		totalDist = totalD;
}

/*
 * Sets total time (timestamp)
 * Parameters: a timestamp TotalT
 * Precondition: timestamp has an overloaded
 * assignment operator=
 * Postcondition: this's timestamp set to totalT
 */
void Racer::setTotalTime(Timestamp totalT)
{
	this->totalTime = totalT;
}


/*
 * Sets cheating status of racer
 * Parameters: int numSensors for number of sensors
 */
void Racer::setCheat(int numSensors)
{
	double distance, time, speed;
	Timestamp t;
	// If number of elements in sensor vector < numSensors 
	if((int)s.size() < numSensors)
	{
		isCheater = true;
		return;
	}
	
	// Here checking for avg speed ( > 14mph??)
	for(int i = 0; i < (int)s.size() - 1; i++)
	{
		distance = s[i+1].mileMark - s[i].mileMark;
		t = s[i+1].t - s[i].t;
		time = t.timesToMilli();
		time /= 3600000.0;
		speed = (distance) / (time);
		
		if(speed > 14)
		{
			isCheater = true;
		}
	}
	
}

// copy constructor
Racer& Racer::operator=(const Racer& r)
{
	// Clear sensor vector before copy
	this->s.clear();
	this->name = r.name;
	this->racerNum = r.racerNum;
	this->totalDist = r.totalDist;
	this->totalTime = r.totalTime;
	this->isCheater = r.isCheater;
	this->s = r.s;

	return *this;
}

/*
 * Sets a sensor vector
 * Parameters: Sensor sens 
 */
void Racer::setSensor(Sensor sens)
{
	// Push a sensor into a vector of sensors
	this->s.push_back(sens);
}

/*
 * Overloaded operator<<
 * Prints out a racer
 */
ostream& operator<<(ostream& out, Racer& r)
{	
	// If cheater, concatenate an * onto racer's name 
	if(r.isCheater == true)
	{
		out << setw(30) << left << "*" + r.name;
	}
	else
	{
		out << setw(30) << left << r.name;
	}

	out  << setw(5) << right << r.racerNum
	<< "   " << r.totalTime;
	
	return out;
}


/* 
 * Overloaded operater>>
 * Reads in a racer
 */
istream& operator>>(istream& in, Racer& r)
{
	r.s.clear();
	char fileLine[250];
	string line;
	getline(in, line);
	strcpy(fileLine, line.c_str());
	
	Sensor s;
	Timestamp t1;
	char * str;
	
	str = strtok(fileLine, ";");
	r.setName(str);
	str = strtok(NULL, ";");
	r.setRacerNum(atoi(str));
	str = strtok(NULL, ";");
	while(str != NULL)
	{
		s.setSensorNum(atoi(str));
		str = strtok(NULL, ";");
		s.setMileMark(atof(str)); // was atoi instead of atof
		str = strtok(NULL, ";");
		t1.setTimeStamp(str);
		s.setT(t1);
		r.setSensor(s);
		str = strtok(NULL, ";");
	}
	
	r.totalTime = r.s[r.s.size() - 1] - r.s[0];
	
	return in;
}

/* 
 * overloaded comparison operator<
 * Sorts a racer based on totalTime
 * Precondition: Timestamp class has an overloaded 
 * operator<
 */
bool operator<(const Racer& r1, const Racer& r2)
{
	return ( r1.totalTime < r2.totalTime);
}
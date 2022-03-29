/*
 * File: racer.h
 * Author: Logan Bowers
 * Description: Contains declaration for a racer class along with
 * functions, constructors, overloaded operators, etc. to operate on it
 */

#ifndef RACER_H
#define RACER_H

#include "sensor.h"
#include "timeStamp.h"
#include <vector>


class Racer
{
public:
	// Def constructor
	Racer();
	// 5-arg constructor 
	Racer(string n, int rn, Sensor sens, double td, Timestamp tt, bool cheat);
	// destructor
	virtual~Racer() {}
	
	// Set/get functions
	void setName(string n);
	void setName(char n[]);
	string getName() const {return name;}
	void setRacerNum(int rn);
	int getRacerNum() const {return racerNum;}
	void setTotalDist(double totalD);
	double getTotalDist() const {return totalDist;}
	void setTotalTime(Timestamp totalT);
	Timestamp getTotalTime() const {return totalTime;}
	void setCheat(int numSensors);
	bool getCheat() const {return isCheater;}
	void setSensor(Sensor sens);
	Sensor getSensor(int index) const {return s[index];}
	
	// Overloaded operator>>
	friend istream& operator>>(istream& in, Racer& r);
	// Overloaded assignment operator=
	Racer& operator=(const Racer& r);
	// Overloaded comparison operator<
	friend bool operator<(const Racer& r1, const Racer& r2);
	// Overloaded operator<<
	friend ostream& operator<<(ostream& out, Racer& r);
	
	// Friend classes
	friend class Sensor;
	friend class Timestamp;
	
private:
	string name;
	int racerNum;
	vector<Sensor> s;
	double totalDist;
	Timestamp totalTime;
	bool isCheater;
};


#endif
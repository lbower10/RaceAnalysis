/*
 * File: sensor.cpp
 * Author: Logan Bowers
 * Description: Contains code for all functions, constructors,
 * operators, etc. that are used on a sensor class defined in sensor.h
 */

#include "timeStamp.h"
#include "sensor.h"
#include <iomanip>
#include <iostream>

// Default constructor
Sensor::Sensor()
{
	sensorNum = 0;
	mileMark = 0.0;
	// Call timestamp 4-arg constructors
	t = Timestamp(0, 0, 0, 0);
	
}

/*
 * 3-arg constructor
 * Parameters: sensor number sn, milemark mm, Timestamp t1
 */
Sensor::Sensor(int sn, double mm, Timestamp t1)
{
	sensorNum = sn;
	mileMark = mm;
	t = t1;
}

// Copy constructor 
// Parameters: const Sensor ref. object s
Sensor::Sensor(const Sensor& s)
{
	this->sensorNum = s.sensorNum;
	this->mileMark = s.mileMark;
	this->t = s.t;

}

/* 
 * Overloaded operator=
 * Assigns one sensor to another (deep copy)
 */
Sensor& Sensor::operator=(const Sensor& s)
{
	this->sensorNum = s.sensorNum;
	this->mileMark = s.mileMark;
	this->t = s.t;

	return *this;
}

/*
 * sets sensor Number
 * Parameters: int s for sensorNum
 */
void Sensor::setSensorNum(int s)
{
	// MIN_VALUE defined to be 0 in timestamp.h
	// Checking > or < 0, sensor number cannot be 0
	if (s < MIN_VALUE)
		sensorNum = MIN_VALUE;
	else
		sensorNum = s;
}

/*
 * sets mileMark
 * Parameters: double m for mileMark
 */
void Sensor::setMileMark(double m)
{
	// MIN_MILEMARK defined to be 0.0 in sensor.h
	if (m < MIN_MILEMARK)
		mileMark = MIN_MILEMARK;
	else
		mileMark = m;
}

/*
 * sets timestamp
 * Parameters: timestamp t1
 * Precondition: Timestamp class has an overloaded assignment
 * operator=
 */
void Sensor::setT(Timestamp t1)
{
	// Use of overloaded Timestamp operator 
	t = t1;
}

/*
 * Four arg constructor
 * Parameters: hour h, minute m, second s, millisecond mls
 */
void Sensor::setT(int h, int m, int s, int mls)
{
	// Call set functions
	t.setHour(h);
	t.setMin(m);
	t.setSec(s);
	t.setMs(mls);
}

/*
 * Overloaded operator<<
 * Prints a sensor
 * Parameters: an ostream& object out, a sensor& s
 */
ostream& operator<<(ostream& out, Sensor& s)
{
	out << s.sensorNum << "\t" << setw(3) << s.mileMark 
	<< "\t" << s.t;
	
	return out;
}

// Gets difference of two sensors timestamps
/*
 * Overloaded operator-
 * Parameters: Two sensor&'s s1 and s2
 * Subtracts one timestamp from another
 */
Timestamp operator-(Sensor& s1, Sensor& s2)
{
	Timestamp temp;
	temp = s1.t - s2.t;

	return temp;
}
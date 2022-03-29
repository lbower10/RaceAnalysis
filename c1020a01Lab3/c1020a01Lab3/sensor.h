/*
 * File: sensor.h
 * Author: Logan Bowers
 * Description: Contains declaration of a sensor class and
 * functions, constructors, operators, etc. to operate on it
 */

#ifndef SENSOR_H
#define SENSOR_H

#include "timeStamp.h"

// Cant have negative mile mark
const double MIN_MILEMARK = 0.0;

class Sensor
{
public:
	// default constructor 
	Sensor();
	Sensor(int, double, Timestamp);
	// Copy constructor
	Sensor (const Sensor& s);
	// Destuctor
	virtual~Sensor() {}
	// Sets and get functions
	void setSensorNum(int s);
	int getSensorNum() const {return sensorNum;}
	void setMileMark(double m);
	int getMileMark() const {return mileMark;}
	void setT(Timestamp t1);
	void setT(int, int, int, int);
	Timestamp getTimestamp() const {return t;}
	// overloaded operators
	friend ostream& operator<<(ostream& out, Sensor& s);
	Sensor& operator=(const Sensor& s);
	friend Timestamp operator-(Sensor& s1, Sensor& s2);
	//Friend classes
	friend class Racer;
	friend class Timestamp;

private:
	int sensorNum;
	double mileMark;
	Timestamp t;
};


#endif
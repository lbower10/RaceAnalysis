/*
 * File:main.cpp
 * Author: Logan Bowers
 * Description: blahblahblah
 */

#include "racer.h"
#include "sensor.h"
#include "timeStamp.h"
#include <iostream>
#include <fstream>
#include <cstring>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;

int main()
{
	vector<Racer> R;
	Racer r;
	string file;
	ifstream in;
	
	cout << "Welcome to Racers-R-Us.\n"
	"Enter race file: ";
	cin >> file;
	
	in.open(file.c_str(), ios::in);
	// File exists?
	if( in.fail() )
	{
		cout << "That file does not exist.\n";
		return 0;
	}
	
	// Getting the first line in file of general race data
	char firstLine[50];
	in.getline(firstLine, 49);
	
	// Empty file?
	if ( in.eof() )
    {
		cout<< "Sorry, that file is empty.\n";
		return 0;
    }
	
	// Using strtok to parse first line and find total # of sensors for the race
	char * str = strtok(firstLine, ";");
	str = strtok(NULL, ";");
	int numSensors = atoi(str);
	
	cout << setw(30) << left << "Name" << setw(12) << "Number" << "Time\n";
	cout << "-----------------------------------------------------\n";
	
	// break down, strtok
	while(!in.eof())
	{
		// use of overloaded operator>> in racer class
		in >> r;
		// Append a racer to vector of Racers
		r.setCheat(numSensors);
		R.push_back(r);
		//cout << r << endl;
	}
	
	sort(R.begin(), R.end());
	
	for(int i = 0; i < (int)R.size(); i++)
	{
		// use of overloaded operator<< in racer class
		cout << R[i] << endl;
	}
	
	in.close();
	cout << endl;
	cout << "Thank you for using Racers-R-Us! Happy Running!\n";

	return 0; // Success
}
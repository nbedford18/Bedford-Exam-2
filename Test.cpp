//I affirm that all code given below was written solely by me, <Noelle Bedford>, and that any help I received adhered to the rules stated for this exam.

#include <iostream>
#include "Runner.h"
#include<vector>
#include<fstream>
#include <iomanip>
#include <locale>
#include <sstream>
#include <string> 
using namespace std;
int main(){
	Runner Runner1;
	vector<string> lineup;
	vector<string>time;
	string filename = "C:\\Users\\Noelle\\Documents\\registrants.txt";
	ifstream registor;
	registor.open(filename);
	if (registor.fail()){
		cout << "could not open file" << endl;
		return 0;
	}
	ostringstream convert;
	string pa;
	convert << Runner1.pace << endl;
	pa = convert.str();
	string line=Runner1.firstname+" "+Runner1.lastname+" "+pa;
	while (getline(registor, line)){//puts line from file into vector, and puts pace in own vector
		lineup.push_back(line);
		time.push_back(pa);
		
	
	
	}
	


	Runner1.sort(lineup, time);
	for (int i = 0; i < lineup.size(); i++){
		cout << lineup.at(i) << endl;//to test if sort function worked
	}
	for (int i = 0; i < lineup.size(); i++){
		if (time[i] <= "360"){
			fstream white;
			string filename = "c:\\users\\Noelle\\desktop\\white.txt";
			white.open(filename, ios::out);
			if (white.fail()){
				cout << "could not open file" << endl;
				return 0;
			}
			white << lineup.at(i) << endl;//adds runners with faster times into wite.txt file.
		}
		else if (time[i] <= "420"){
			fstream yellow;
			string filename = "c:\\users\\Noelle\\desktop\\yellow.txt";
			yellow.open(filename, ios::out);
			if (yellow.fail()){
				cout << "could not open file" << endl;
				return 0;
			}
			yellow << lineup.at(i) << endl;//adds next runners into yellow.txt file.
		}
		else if (time[i]<= "480"){
			fstream green;
			string filename = "c:\\users\\Noelle\\desktop\\green.txt";
			green.open(filename, ios::out);
			if (green.fail()){
				cout << "could not open file" << endl;
				return 0;
			}
			green << lineup.at(i) << endl;//adds next runners into green.txt file. 
		}
		else if (time[i] <= "540"){
			fstream orange;
			string filename = "c:\\users\\Noelle\\desktop\\orange.txt";
			orange.open(filename, ios::out);
			if (orange.fail()){
				cout << "could not open file" << endl;
				return 0;
			}
			orange << lineup.at(i) << endl;//adds next runners into orange.txt file. 
		}
		else if (time[i] <= "600"){
			fstream blue;
			string filename = "c:\\users\\Noelle\\desktop\\blue.txt";
			blue.open(filename, ios::out);
			if (blue.fail()){
				cout << "could not open file" << endl;
				return 0;
			}
			blue << lineup.at(i) << endl;//adds next runners into blue.txt file. 
		}
		else if (time[i] <= "720"){
			fstream lilac;
			string filename = "c:\\users\\Noelle\\desktop\\lilac.txt";
			lilac.open(filename, ios::out);
			if (lilac.fail()){
				cout << "could not open file" << endl;
				return 0;
			}
			lilac << lineup.at(i) << endl;//adds next runners into lilac.txt file. 


		}
		else if (time[i] <= "1200"){
			fstream red;
			string filename = "c:\\users\\Noelle\\desktop\\red.txt";
			red.open(filename, ios::out);
			if (red.fail()){
				cout << "could not open file" << endl;
				return 0;
			}
			red << lineup.at(i) << endl;//adds slowest runners into red.txt file. 
		}
	}
	lineup.clear();
	time.clear();
}
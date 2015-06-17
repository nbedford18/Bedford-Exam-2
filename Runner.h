//I affirm that all code given below was written solely by me, <Noelle Bedford>, and that any help I received adhered to the rules stated for this exam.

#ifndef RUNNER_H
#define RUNNER_H
#include<string>
#include <vector>
using namespace std;
class Runner{
public:
	
	string firstname;
	string lastname;
	int pace;
	
	string getfirstname();
	string getlastname();
	int getpace();
	void sort(vector<string> v, vector<string> p);

};
#endif
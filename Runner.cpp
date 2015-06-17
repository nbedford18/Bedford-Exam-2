//I affirm that all code given below was written solely by me, <Noelle Bedford>, and that any help I received adhered to the rules stated for this exam.


#include "Runner.h"
#include <vector>
#include<fstream>
#include <string>
#include <iostream>


string Runner::getfirstname(){

	return firstname;

}
string Runner::getlastname(){
	return lastname;
}
int Runner::getpace(){
	return pace;
}
void Runner::sort(vector<string> v, vector<string> p){//a funtion that sorts the runners based on their pace.
	
	
	for (int i = 0; i < v.size()-1; i++){
		

		string min = p.at(i);
	 
		if (min > p.at(i+1)){

			swap(v.at(i+1), v.at(i));
		}
		
	}
	
}
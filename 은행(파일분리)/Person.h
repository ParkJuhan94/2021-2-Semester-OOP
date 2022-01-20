#pragma once
#include <iostream>
#include <string>
using namespace std;

class Person
{
private: 
	string name_, rrNum_;
public: 
	Person(string name, string rrNum);
	string getPersonName();
	string getPersonRrNum();
};


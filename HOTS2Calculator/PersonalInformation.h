#pragma once
#include<string>
#include <sstream>  
#include<vector>
#include<fstream>
#include<iostream>
using namespace std;
#ifndef HERO_COUNT
#define HERO_COUNT 65
#endif

template <class Type>
Type stringToNum(const string& str)
{
	istringstream iss(str);
	Type num;
	iss >> num;
	return num;
}


class PersonalInformation
{
public:
	PersonalInformation(string filepath);
	~PersonalInformation();

private:
	vector <int> heroexperience;
public:
	int GetHeroNumber();
	int GetOneHeroExperience(int heroIndex);
private:
	int InitFromFile(string filepath);
public:
	int Check();
};


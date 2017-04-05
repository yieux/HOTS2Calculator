#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include <sstream>  
#include<vector>
using namespace std;
#include "PersonalInformation.h"
class ExperienceFormula
{
public:
	ExperienceFormula();
	ExperienceFormula(string filepath);
	~ExperienceFormula();

//private:
	vector <int> value;

	void DefaultInit();
	int CalculateHOTS2Grade(PersonalInformation personalInformation);
private:
	int GetGradeFromExperience(int heroExperience);
};


#include "ExperienceFormula.h"


ExperienceFormula::ExperienceFormula()
{
	DefaultInit();
}
ExperienceFormula::ExperienceFormula(string filepath)
{
}

ExperienceFormula::~ExperienceFormula()
{
}


void ExperienceFormula::DefaultInit()
{
	if (!value.empty())
		value.clear();
	value.push_back(0);
	value.push_back(200000);
	value.push_back(500000);
	value.push_back(900000);
	value.push_back(1400000);
	value.push_back(2000000);
	value.push_back(2700000);
	value.push_back(3500000);
	value.push_back(4400000);
	value.push_back(5400000);
	value.push_back(6500000);
	value.push_back(7600000);
	value.push_back(8700000);
	value.push_back(9800000);
	value.push_back(10900000);
	value.push_back(12000000);
	value.push_back(13100000);
	value.push_back(14200000);
	value.push_back(15300000);
	value.push_back(16400000);
	value.push_back(17500000);
	value.push_back(18600000);
	value.push_back(19700000);
	value.push_back(20800000);
	value.push_back(21900000);
	value.push_back(23000000);
	value.push_back(24100000);
	value.push_back(25200000);
	value.push_back(26300000);
	value.push_back(27400000);
	value.push_back(28500000);
	value.push_back(29600000);
	value.push_back(30700000);
	value.push_back(31800000);
	value.push_back(32900000);
	value.push_back(34000000);
	value.push_back(35100000);
	value.push_back(36200000);
	value.push_back(37300000);
	value.push_back(38400000);
	value.push_back(39500000);
	value.push_back(40600000);
	value.push_back(41700000);
	value.push_back(42800000);
	value.push_back(43900000);
	value.push_back(45000000);
	value.push_back(46100000);
	value.push_back(47200000);
	value.push_back(48300000);
	value.push_back(49400000);
	value.push_back(50500000);
	value.push_back(51600000);
	value.push_back(52700000);
	value.push_back(53800000);
	value.push_back(54900000);
	value.push_back(56000000);
	value.push_back(57100000);
	value.push_back(58200000);
	value.push_back(59300000);
	value.push_back(60400000);

}


int ExperienceFormula::CalculateHOTS2Grade(PersonalInformation personalInformation)
{
	int totalgrade = 0;
	for (int i = 0; i < personalInformation.GetHeroNumber(); i++)
	{

	}
	return 0;
}


int ExperienceFormula::GetGradeFromExperience(int heroExperience)
{

	return 0;
}

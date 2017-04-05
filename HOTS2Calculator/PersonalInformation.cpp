#include "PersonalInformation.h"


PersonalInformation::PersonalInformation(string filepath)
{
	InitFromFile(filepath);
	Check();
}


PersonalInformation::~PersonalInformation()
{
}


int PersonalInformation::GetHeroNumber()
{
	return heroexperience.size();
}



int PersonalInformation::GetOneHeroExperience(int heroIndex)
{
	if (heroIndex > -1 && heroIndex < heroexperience.size())
		return heroexperience[heroIndex];
	else
		return 0;
}


int PersonalInformation::InitFromFile(string filepath)
{
	ifstream perfile(filepath);

	if (!perfile.is_open())

		return 0;


	if (!heroexperience.empty())
		heroexperience.clear();
	std::string heroestr;
	int heroeint;
	while (getline(perfile, heroestr))
	{

		if (heroestr.empty())
			continue;
		heroeint = stringToNum<int>(heroestr);
		heroexperience.push_back(heroeint);
	}
	return 0;
}


int PersonalInformation::Check()
{
	if (heroexperience.size() != HERO_COUNT)
		cout << "Warnning!!! input hero count : " << heroexperience.size() << ", is not equal to default count:" << HERO_COUNT << endl;
	return 0;
}

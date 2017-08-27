#include "servant.hpp"

using namespace std;

//Constructor
Servant::Servant()
{
	setName("");
	setStory("");
	setNoblePhantasm("");
	setStrength(F);
	setEndurance(F);
	setAgility(F);
	setMana(F);
	setLuck(F);
	setNP(F);
}

// Set
void Servant::setName(string t_name)
{
	this->name = t_name;
}

void Servant::setStory(string t_story)
{
	this->name = t_story;
}

void Servant::setNoblePhantasm(string t_noble_phantasm)
{
	this->name = t_noble_phantasm;
}

void Servant::setStrength(int t_strength)
{
	this->strength = t_strength;
}

void Servant::setEndurance(int t_endurance)
{
	this->endurance = t_endurance;
}

void Servant::setAgility(int t_agility)
{
	this->agility = t_agility;
}

void Servant::setMana(int t_mana)
{
	this->mana = t_mana;
}

void Servant::setLuck(int t_luck)
{
	this->luck = t_luck;
}

void Servant::setNP(int t_np)
{
	this->np = t_np;
}

void Servant::setHP(int t_hp)
{
	this->np = t_hp;
}

void Servant::setHPMAX(int t_hp_max)
{
	this->np = t_hp_max;
}

void Servant::setMP(int t_mp)
{
	this->np = t_mp;
}

void Servant::setMPMAX(int t_mp_max)
{
	this->np = t_mp_max;
}

//Get
string Servant::getName()
{
	return name;
}

string Servant::getStory()
{
	return story;
}


string Servant::getNoblePhantasm()
{
	return noble_phantasm;
}

int Servant::getStrength()
{
	return strength;
}

int Servant::getEndurance()
{
	return endurance;
}

int Servant::getAgility()
{
	return agility;
}

int Servant::getMana()
{
	return mana;
}

int Servant::getLuck()
{
	return luck;
}

int Servant::getNP()
{
	return np;
}

int Servant::getHP()
{
	return hp;
}

int Servant::getHPMAX()
{
	return hp_max;
}

int Servant::getMP()
{
	return mp;
}

int Servant::getMPMAX()
{
	return mp_max;
}

//Intrinsic
int Servant::calcHP()
{
	int ret;
	ret = 100 + (10 * endurance) + (5 * strength);
	return ret;
}

int Servant::calcMP()
{
	int ret;
	ret = 200 + (20 * mana);
	return ret;
}

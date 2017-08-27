/*
 * servant.hpp
 *
 *  Created on: 27.08.2017
 *      Author: Jan
 */

#ifndef SERVANTS_SERVANT_HPP_
#define SERVANTS_SERVANT_HPP_

#include <string>



class Servant{
private:
	std::string name, story, noble_phantasm;
	int strength, endurance, agility, mana, luck, np;
	int hp, hp_max, mp, mp_max;
public:
	enum Rating {F, E, D, C, B, A, AP, APP, EX};

	//Constructors
	Servant();

	//Get and Set
	std::string getName();
	void setName (std::string);
	std::string getStory();
	void setStory (std::string);
	std::string getNoblePhantasm();
	void setNoblePhantasm (std::string);
	int getStrength();
	void setStrength(int);
	int getEndurance();
	void setEndurance(int);
	int getAgility();
	void setAgility(int);
	int getMana();
	void setMana(int);
	int getLuck();
	void setLuck(int);
	int getNP();
	void setNP(int);
	int getHP();
	void setHP(int);
	int getHPMAX();
	void setHPMAX(int);
	int getMP();
	void setMP(int);
	int getMPMAX();
	void setMPMAX(int);

	//Intrinsic
	int calcHP();
	int calcMP();
};



#endif /* SERVANTS_SERVANT_HPP_ */

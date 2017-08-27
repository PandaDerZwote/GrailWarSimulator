#include "servant_iskandar.hpp"

ServantIskandar::ServantIskandar()
{
	setName("Iskandar");
	setStory("was");
	setNoblePhantasm("Ionioi Hetairoi");
	setStrength(B);
	setEndurance(A);
	setAgility(D);
	setMana(C);
	setLuck(AP);
	setNP(APP);
	setHPMAX(calcHP());
	setHP(getHPMAX());
	setMPMAX(calcMP());
	setMP(getMPMAX());
}

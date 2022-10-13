#ifndef __MAGE_HPP__
#define __MAGE_HPP__

#include "entity.hpp"
#include "ability.hpp"

class Mage : public Entity {
  public:
	  //Mage(){
	 Mage(){
		health = 2;
		attack = 2;
		defense = 2;
		mana = 2;
		speed = 2;
		Type = "Mage";
	}
	  Mage(Ability* abil) : Entity(abil){
		health = 2;
		attack = 2;
		defense = 2;
		mana = 2;
		speed = 2;
		Type = "Mage";
	}
  
	Mage(int level) : Entity() {
		health = level;
		attack = level;
		defense = level;
		mana = level;
		speed = level;
		Type = "Mage";
	}

    ~Mage(){}
  
};

#endif 


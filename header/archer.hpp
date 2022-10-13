#ifndef __ARCHER_HPP__
#define __ARCHER_HPP__

#include "entity.hpp"
#include "ability.hpp"

class Archer : public Entity {
  public:
    //Archer(){ 
	Archer(){
		health = 2;
		attack = 2;
		defense = 2;
		mana = 2;
		speed = 2;
		Type = "Archer";
	}
	Archer(Ability* abil) : Entity(abil) {
		health = 2;
		attack = 2;
		defense = 2;
		mana = 2;
		speed = 2;
		Type = "Archer";
	}

	Archer(int level) : Entity() {
		health = level;
		attack = level;
		defense = level;
		mana = level;
		speed = level;
		Type = "Archer";
	}

    ~Archer(){}

  private:
  
};

#endif 


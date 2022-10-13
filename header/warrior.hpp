#ifndef __WARRIOR_HPP__
#define __WARRIOR_HPP__

#include "entity.hpp"
#include "ability.hpp"

class Warrior : public Entity
{
public:
	Warrior(){
		health = 2;
		attack = 2;
		defense = 2;
		mana = 2;
		speed = 2;
		Type = "Warrior";
	}

	Warrior(Ability* abil) : Entity(abil){
		health = 2;
		attack = 2;
		defense = 2;
		mana = 2;
		speed = 2;
		Type = "Warrior";
	}

	Warrior(int level) : Entity() {
		health = level;
		attack = level;
		defense = level;
		mana = level;
		speed = level;
		Type = "Warrior";
	}
    ~Warrior(){}

private:

};

#endif 

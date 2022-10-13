#ifndef WITCH_H_
#define WITCH_H_

#include "entity.hpp"

class Witch :public Entity
{
public:
	  Witch() : Entity() 
	{
		health = 1;
		attack = 1;
		defense = 1;
		mana = 1;
		speed = 1;
		Type = "Witch";
	}
	Witch(int level) : Entity()
	{
		health = level;
		attack = level;
		defense = level;
		mana = level;
		speed = level;
		Type = "Witch";
	}
private:
};

#endif // !WITCH_H_

#ifndef SLIME_H_
#define SLIME_H_

#include "entity.hpp"

class Slime :public Entity
{
public:
	Slime() : Entity()
	{
		health = 1;
		attack = 1;
		defense = 1;
		mana = 1;
		speed = 1;
		Type = "Slime";
	}
	Slime(int level) : Entity()
	{
		health = level;
		attack = level;
		defense = level;
		mana = level;
		speed = level;
		Type = "Slime";
	}
private:

};

#endif // !SLIME_H_

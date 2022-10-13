#ifndef SLIMEKING_H_
#define SLIMEKING_H_

#include "entity.hpp"

class SlimeKing :public Entity
{
public:
	SlimeKing() : Entity()
	{
		health = 2;
		attack = 2;
		defense = 2;
		mana = 2;
		speed = 2;
		Type = "SlimeKing";
	}
	SlimeKing(int level) : Entity()
	{
		health =2* level;
		attack =2* level;
		defense =2* level;
		mana =2* level;
		speed =2* level;
		Type = "SlimeKing";
	}
private:
};

#endif // !SLIMEKING_H_

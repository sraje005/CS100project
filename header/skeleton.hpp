#ifndef SKELETON_H_
#define SKELETON_H_

#include "entity.hpp"

class Skeleton :public Entity
{
public:
	Skeleton() : Entity()
	{
		health = 1;
		attack = 1;
		defense = 1;
		mana = 1;
		speed = 1;
		Type = "Skeleton";
	}
	Skeleton(int level) : Entity()
	{
		health = level;
		attack = level;
		defense = level;
		mana = level;
		speed = level;
		Type = "Skeleton";
	}
private:
};

#endif // !SKELETON_H_

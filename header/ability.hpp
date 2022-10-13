#ifndef __ABILITY_HPP__
#define __ABILITY_HPP__
using namespace std;
#include <iostream>
//#include "character.hpp"
//strategy pattern
class Ability {
public:
    //Pure virtual functions ... Abstract Class
    virtual int useAbilityBehavior(int att,int mana,int health) = 0;
    virtual ~Ability() = default;
};

class Fireball : public Ability {
public:
    int useAbilityBehavior(int att, int mana,int health) {
        cout << "Fireball ability was called.\n";
        return att * mana;
    }
};

class DoubleShot : public Ability {
public:
    int useAbilityBehavior(int att,int mana, int health) {
        cout << "Double Shot ability was called.\n";
        return 2 * att;
    }
};

class Rage : public Ability {
public:
    int useAbilityBehavior(int att,int mana,int health) {
        cout << "Rage ability was called.\n";
        return health * att;
    }
};

#endif //__ABILITY_HPP__

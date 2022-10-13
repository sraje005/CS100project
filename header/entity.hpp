#ifndef _ENTITY_HPP_
#define _ENTITY_HPP_

#include "ability.hpp"

#include <string>
#include <iostream>
using namespace std;

class Entity
{
protected:
    int health;
    int attack;
    int defense;
    int mana;
    int speed;
    string Type;
    bool alive = true;
    Ability* m_ability;

public:
    //No parameters to use for the monsters
    Entity() {
        health = 1;
        attack = 1;
        defense = 1;
        speed = 1;
        mana = 1;
        Type = "";
    }

    ////////////////////////////////////////////////////
    //Parameterized to use with characters
    Entity(Ability* ability) {
        health = 1;
        attack = 1;
        defense = 1;
        speed = 1;
        mana = 1;
        Type = "";
        m_ability = ability;
    }
    //This function will call the correct ability
    virtual void useAbility()
    {
        //delegates to the strategy pattern
        //m_ability->useAbilityBehavior(attack,mana,health);
        attack = m_ability->useAbilityBehavior(attack, mana, health);
    }
    //This function can be used to change the ability of an Entity
    virtual void setAbilityBehavior(Ability* ability) {
        m_ability = ability;
    }
    //Destructor to delete the Ability member obj
    virtual ~Entity() { }//delete m_ability;
    ////////////////////////////////////////////////////

    void Attack(Entity* ent)
    {
        int atk = getAttack() - ent->getDefense();
        if (atk < 0)atk = 0;
        ent->setHealth(ent->getHealth() - atk);
        cout << this->Type << " did " << atk << " damage to " << ent->Type << endl;
        //char1.setHealth(char1.getHealth() - atk); 
    }
    void Block()
    {
        cout << "You raise your shield!" << endl;
        defense = defense * 2;
    }
    //openBackpack()          //return backpack
    virtual int getHealth() { return health; }
    virtual int getDefense() { return defense; }
    virtual int getAttack() { return attack; }
    virtual int getMana() { return mana; }
    virtual int getSpeed() { return speed; }
    virtual std::string getType() { return Type; }
    virtual bool isAlive() { return alive; }

    virtual void setHealth(int h)
    {
        health = h;
        if (health <= 0) alive = false;
    }
    virtual void setDefense(int d) { defense = d; }
    virtual void setAttack(int a) { attack = a; }
    virtual void setMana(int m) { mana = m; }

    virtual void setSpeed(int s) { speed = s; }
    virtual void setType(std::string c) { Type = c; }

};
#endif //__ENTITY_HPP__

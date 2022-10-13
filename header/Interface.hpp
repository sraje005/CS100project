#ifndef INTERFACE_HPP_
#define INTERFACE_HPP_

#include "entity.hpp"
#include "ability.hpp"

//Characters
#include "warrior.hpp"
#include "archer.hpp"
#include "mage.hpp"

//Monsters
#include "witch.hpp"
#include "slime.hpp"
#include "slimeking.hpp"
#include "skeleton.hpp"

#include <iostream>
#include <vector>
using namespace std;
class Interface
{
public:
	Interface()
	{
		Chosen = Entity();
		EnemyList->push_back(Slime());
		EnemyList->push_back(Skeleton());
		EnemyList->push_back(Witch(2));
		EnemyList->push_back(SlimeKing(2));
		currMonster = &EnemyList->at(0);
	}
	~Interface() {delete m_abil;}//delete currMonster;

	void CharSelector()
	{
		string input;
		cout << "Enter \"Warrior\", \"Archer\", or \"Mage\" to select your character" << endl;
		cin >> input;
		////////////////////////////////////////////////
		if (input == "Warrior") {m_abil = new Rage(); Chosen = Warrior(m_abil);}
		else if (input == "Archer") {m_abil = new DoubleShot(); Chosen = Archer(m_abil);}
		else if (input == "Mage") {m_abil = new Fireball(); Chosen = Mage(m_abil);}
		/////////////////////////////////////////////////
		/*
		if (input == "Warrior") Chosen = Warrior();
		else if (input == "Archer") Chosen = Archer();
		else if (input == "Mage") Chosen = Mage();
		*/
		else
		{
			cout << "invalid input" << endl;
			CharSelector();
		}
		return;
	}
	char Execute(char input)
	{
		if (input == 'q') return 'q';
		if (input == 'a')
		{
			{//player attack


				if (counter > 0)Chosen.Attack(currMonster);
				else return 'q';

				if (!(currMonster->isAlive()))
				{
					cout << currMonster->getType() << " has " << currMonster->getHealth() << " health. " << currMonster->getType() << " has died." << endl << endl;
					if (counter != 0)
					{
						counter--;
						currMonster++;
						buffer = 1;
						if (counter != 0)cout << endl << "A " << currMonster->getType() << " appeared from the darkness!" << endl << endl;
						else return 'q';
						//cout << counter;
					}
					//else cout << "you win!" << endl;

				}
			}


		}
		else if (input == 'd')
		{
			Chosen.useAbility();////////
			cout << Chosen.getType() << "'s attack was raised to " << Chosen.getAttack()<<endl;
		}
		else if (input == 'b') Chosen.Block();
		else
		{
			cout << "invalid input" << endl;

		}
		if (buffer != 1)currMonster->Attack(&Chosen);
		if (!(Chosen.isAlive()))
		{
			cout << Chosen.getType() << " has died to a " << currMonster->getType() << endl << endl;
			return 'q';
		}
		buffer--;
		if (input == 'b') Chosen.setDefense(Chosen.getDefense() / 2);
	}


	void PrintMenu()
	{
		char input = 'w';
		while (input != 'q')
		{
			cout << "a:attack| b:block | d:ability |q:quit  \n" << endl;
			cin >> input;
			char stor = input;
			input = Execute(stor);
		}

		cout << "thank you for playing" << endl;
		return;

	}

	vector <Entity> EnemyList[4];
private:
	Entity Chosen;//make into a character again

	Entity* currMonster;
	Ability* m_abil;

	int counter = 4;
	int buffer;


};

#endif // !INTERFACE_HPP_

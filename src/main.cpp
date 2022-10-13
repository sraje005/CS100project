#include <iostream>
#include "../header/entity.hpp"

//#include "../header/monster.hpp"

#include "../header/slime.hpp"
#include "../header/warrior.hpp"
#include "../header/Interface.hpp"



using namespace std;

int main()
{
	Interface game = Interface();
	game.CharSelector();
	game.PrintMenu();

}

#include "gtest/gtest.h"
#include <iostream>
#include "../header/entity.hpp"



#include "../header/slime.hpp"

#include "../header/Interface.hpp"
#include "../header/witch.hpp"
#include "../header/skeleton.hpp"
#include "../header/slimeking.hpp"

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

TEST(MonsterTest, Monsterhealth) {
    Entity slime1 = Slime();
    EXPECT_EQ(1, slime1.getHealth());

    Entity slime2 = Slime(2);
    EXPECT_EQ(2, slime2.getHealth());

    Entity witch1 = Witch();
    EXPECT_EQ(1, witch1.getHealth());

    Entity witch2 = Witch(2);
    EXPECT_EQ(2, witch2.getHealth());

    Entity skel1 = Skeleton();
    EXPECT_EQ(1, skel1.getHealth());

    Entity skel2 = Skeleton(2);
    EXPECT_EQ(2, skel2.getHealth());

    Entity sk1 = SlimeKing();
    EXPECT_EQ(2, sk1.getHealth());

    Entity sk2 = SlimeKing(2);
    EXPECT_EQ(4, sk2.getHealth());

}

TEST(MonsterTest, MonsterAttack) {

    Entity slime1 = Slime();
    EXPECT_EQ(1, slime1.getAttack());

    Entity slime2 = Slime(2);
    EXPECT_EQ(2, slime2.getAttack());

    Entity witch1 = Witch();
    EXPECT_EQ(1, witch1.getAttack());

    Entity witch2 = Witch(2);
    EXPECT_EQ(2, witch2.getAttack());

    Entity skel1 = Skeleton();
    EXPECT_EQ(1, skel1.getAttack());

    Entity skel2 = Skeleton(2);
    EXPECT_EQ(2, skel2.getAttack());

    Entity sk1 = SlimeKing();
    EXPECT_EQ(2, sk1.getAttack());

    Entity sk2 = SlimeKing(2);
    EXPECT_EQ(4, sk2.getAttack());

}

TEST(MonsterTest, MonsterMana) {

    Entity slime1 = Slime();
    EXPECT_EQ(1, slime1.getMana());

    Entity slime2 = Slime(2);
    EXPECT_EQ(2, slime2.getMana());

    Entity witch1 = Witch();
    EXPECT_EQ(1, witch1.getMana());

    Entity witch2 = Witch(2);
    EXPECT_EQ(2, witch2.getMana());

    Entity skel1 = Skeleton();
    EXPECT_EQ(1, skel1.getMana());

    Entity skel2 = Skeleton(2);
    EXPECT_EQ(2, skel2.getMana());

    Entity sk1 = SlimeKing();
    EXPECT_EQ(2, sk1.getMana());

    Entity sk2 = SlimeKing(2);
    EXPECT_EQ(4, sk2.getMana());

}

TEST(MonsterTest, MonsterDefense) {

    Entity slime1 = Slime();
    EXPECT_EQ(1, slime1.getDefense());

    Entity slime2 = Slime(2);
    EXPECT_EQ(2, slime2.getDefense());

    Entity witch1 = Witch();
    EXPECT_EQ(1, witch1.getDefense());

    Entity witch2 = Witch(2);
    EXPECT_EQ(2, witch2.getDefense());

    Entity skel1 = Skeleton();
    EXPECT_EQ(1, skel1.getDefense());

    Entity skel2 = Skeleton(2);
    EXPECT_EQ(2, skel2.getDefense());

    Entity sk1 = SlimeKing();
    EXPECT_EQ(2, sk1.getDefense());

    Entity sk2 = SlimeKing(2);
    EXPECT_EQ(4, sk2.getDefense());

}

TEST(CharacterTest, CharacterHealth) {

    Entity war = Warrior();
    EXPECT_EQ(2, war.getHealth());

    Entity mage = Mage();
    EXPECT_EQ(2, mage.getHealth());

    Entity arch = Archer();
    EXPECT_EQ(2, arch.getHealth());

}

TEST(CharacterTest, AttackTest) {

    Entity war = Warrior();
    EXPECT_EQ(2, war.getAttack());

    Entity mage = Mage();
    EXPECT_EQ(2, mage.getAttack());

    Entity arch = Archer();
    EXPECT_EQ(2, arch.getAttack());

}

TEST(CharacterTest, ManaTest) {

    Entity war = Warrior();
    EXPECT_EQ(2, war.getMana());

    Entity mage = Mage();
    EXPECT_EQ(2, mage.getMana());

    Entity arch = Archer();
    EXPECT_EQ(2, arch.getMana());

}


TEST(CharacterTest, DefenseTest) {

    Entity war = Warrior();
    EXPECT_EQ(2, war.getDefense());

    Entity mage = Mage();
    EXPECT_EQ(2, mage.getDefense());

    Entity arch = Archer();
    EXPECT_EQ(2, arch.getDefense());

}

TEST(CharcterTest, AttackWorking) {
    
    //removed setDefense()

    Entity war1 = Warrior();
    Entity slime1 = Slime();
    war1.Attack(&slime1);
    EXPECT_EQ(0, slime1.getHealth());

    Entity war2 = Warrior();
    Entity skel1 = Skeleton();;
    war2.Attack(&skel1);
    EXPECT_EQ(0, skel1.getHealth());

    Entity war3 = Warrior();
    Entity witch1 = Witch();
    war3.Attack(&witch1);//changed to witch1
    EXPECT_EQ(0, witch1.getHealth());

    Entity mage1 = Mage();
    Entity slime2 = Slime();
    mage1.Attack(&slime2);
    EXPECT_EQ(0, slime2.getHealth());

    Entity mage2 = Mage();
    Entity skel2 = Skeleton();
    mage2.Attack(&skel2);
    EXPECT_EQ(0, skel2.getHealth());

    Entity mage3 = Mage();
    Entity witch2 = Witch();
    mage3.Attack(&witch2);
    EXPECT_EQ(0, witch2.getHealth());

    Entity arch1 = Archer();
    Entity slime3 = Slime();
    arch1.Attack(&slime3);
    EXPECT_EQ(0, slime3.getHealth());

    Entity arch2 = Archer();
    Entity skel3 = Skeleton();
    arch2.Attack(&skel3);
    EXPECT_EQ(0, skel3.getHealth());

    Entity arch3 = Archer();
    Entity witch3 = Witch();
    arch3.Attack(&witch3);
    EXPECT_EQ(0, witch3.getHealth());


}

TEST(MonsterTest, AttackWorking) {
    
    //changed expected health to 1
    
    Entity slime1 = Slime();
    Entity war1 = Warrior();
    war1.setDefense(0);
    slime1.Attack(&war1);
    EXPECT_EQ(1, war1.getHealth());

    Entity slime2 = Slime();
    Entity mage1 = Mage();
    mage1.setDefense(0);
    slime2.Attack(&mage1);
    EXPECT_EQ(1, mage1.getHealth());

    Entity slime3 = Slime();
    Entity arch1 = Archer();
    arch1.setDefense(0);
    slime3.Attack(&arch1);
    EXPECT_EQ(1, arch1.getHealth());

    Entity skel1 = Skeleton();
    Entity war2 = Warrior();
    war2.setDefense(0);
    skel1.Attack(&war2);
    EXPECT_EQ(1, war2.getHealth());

    Entity skel2 = Skeleton();
    Entity mage2 = Mage();
    mage2.setDefense(0);
    skel2.Attack(&mage2);
    EXPECT_EQ(1, mage2.getHealth());

    Entity skel3 = Skeleton();
    Entity arch2 = Archer();
    arch2.setDefense(0);
    skel3.Attack(&arch2);
    EXPECT_EQ(1, arch2.getHealth());

    Entity witch1 = Witch();
    Entity war3 = Warrior();
    war3.setDefense(0);
    witch1.Attack(&war3);
    EXPECT_EQ(1, war3.getHealth());

    Entity witch2 = Witch();
    Entity mage3 = Mage();
    mage3.setDefense(0);
    witch2.Attack(&mage3);
    EXPECT_EQ(1, mage3.getHealth());

    Entity witch3 = Witch();
    Entity arch3 = Archer();
    arch3.setDefense(0);
    witch3.Attack(&arch3);
    EXPECT_EQ(1, arch3.getHealth());

}

TEST(CharacterTest, AbilityTest) {

  Ability* rage = new Rage();
  Entity war = Warrior(rage);
  war.setAttack(3);
  war.setHealth(3);
  war.useAbility();
  EXPECT_EQ(9, war.getAttack());

  Ability* fireball = new Fireball();
  Entity mage = Mage(fireball);
  mage.setAttack(4);
  mage.setMana(6);
  mage.useAbility();
  EXPECT_EQ(24, mage.getAttack());

  Ability* ds = new DoubleShot();
  Entity arch = Archer(ds);
  arch.setAttack(5);
  arch.useAbility();
  EXPECT_EQ(10, arch.getAttack());

  delete rage;
  delete fireball;
  delete ds;
}

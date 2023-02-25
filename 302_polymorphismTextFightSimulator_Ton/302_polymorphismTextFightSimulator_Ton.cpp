// 302_polymorphismTextFightSimulator_Ton.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//There are at least three types of monsters.
int tMonster; // fire = 1, water = 2, grass = 3
int tElement; // fire = 1, water = 2, grass = 3

float tEnemyHP = 30;


//Damage Amounts 
float tEffective = 20;
float tDamaged = 10;
float tImmune = 0;

float tPlayerHP = 100;
bool tIsLose = false;


class Enemy {
protected: 
	//Stats
	string name;

	float HP; //Hit Points
	float AP; //Attack Points 


public:
	int tDamaged = 0;

	Enemy(string enemyName)			{name = enemyName;}

	//Getters and Setters are better to access from the child class (bc we are putting the variables as protected/not public) 
	void setName(string enemyName)	{name = enemyName;}
	string getName()				{return name;}





	//before class
	void SetHitPoints(int start)
	{
		tDamaged = start;
	}
	
	virtual void GetHit(int damage)
	{
		tDamaged -= damage;
	}


};


class EnemyFire : public Enemy{
protected: //so that the children classes can access 
	float tFireHP;
	float tFireAP;

public:
	EnemyFire(string enemyName, float tFireHP) : Enemy(enemyName)
	{
		float tFireHP = 70;
		float tFireAP = 30;
	}

	void setFireHP(float enemyFireHP) { tFireHP = enemyFireHP; } //don't need to do bc already set ^
	float getFireHP() { return tFireHP; }
	float getFireAP() { return tFireAP; }

};


class EnemyWater : public Enemy{
protected: 
	float tWaterHP = 80;

public:

};


class EnemyGrass : public Enemy{
protected: 
	float tGrassHP = 90;
public:

};


int main()
{


	while (tIsLose == false) { //not using DO WHILE Loops bc they execute thru even after returning true (?)
		//The player will face five picked at random


		//The main loop can only hold an array of Monster pointers.That's the whole point.  Stop trying to work around the whole point. LOLLO



		//All the monsters have hitpoints, but start with different hitpoints



		//The player has three choices of attack, but some monster types are immune to one / some and some monsters take extra damage from one / some
		if (tMonster == 1) { //if FIRE Monster...
			if (tElement == 1) { //is hit with fire...
				//tEnemy1Health -= tDamaged;
				cout << "You hit the monster for ";
			}
			else if (tElement == 2) { //is hit with water...
				//tEnemy1Health -= tEffective;
				cout << "You hit the monster for ";
			}
			else if (tElement == 3) { //is hit with grass...
				cout << "That wasn't really effective... You hit the monster for 0 damage. ";
			}

		}

		if (tMonster == 2) { //if WATER Monster...
			if (tElement == 1) { //is hit with fire...
				cout << "That wasn't really effective... You hit the monster for 0 damage. ";
			}
			else if (tElement == 2) { //is hit with water...
				//tEnemy1Health -= tDamaged;
				cout << "You hit the monster for ";
			}
			else if (tElement == 3) { //is hit with grass...
				//tEnemy1Health -= tEffective;
				cout << "You hit the monster for ";
			}

		}

		if (tMonster == 3) { //if GRASS Monster...
			if (tElement == 1) { //is hit with fire...
				//tEnemy1Health -= tEffective;
				cout << "You hit the monster for ";
			}
			else if (tElement == 2) { //is hit with water...
				cout << "That wasn't really effective... You hit the monster for 0 damage. ";
			}
			else if (tElement == 3) { //is hit with grass...
				//tEnemy1Health -= tDamaged;
				cout << "You hit the monster for ";
			}

		}

		//Current monster attacks the player every round



		//Every action and result has concise feedback(Monster intro, damage taken / remaining.Concise.)
		cout << "Enemy 1 HP: ";
		cout << "Enemy 2 HP: ";
		cout << "Enemy 3 HP: ";
		

		Enemy* enemies [5];
		/*enemies [0] = new EnemyWater;
		enemies [1] = new EnemyFire;
		enemies [2] = new EnemyGrass;
		enemies [3] = new EnemyFire;
		enemies [4] = new EnemyWater;*/

		
		Enemy* aEnemy = enemies [5]; //gets a fancy name bc its more common, more likely to want to add more here
		aEnemy->GetHit(8);

		Enemy* aEnemy = enemies [5];
		aEnemy->GetHit(8);

		//Hits all enemies 
		for (int i = 0; i < 5; i++)
			enemies[i]->GetHit(333);


	}




}


//Classes
//Create monsters
//Win or lose loop
//Attack one monster loop
//Attack type matters
//Monsters do different damage and have different hitpoints
//Feedback is completeand concise.  (Good "Minotaur hits for 14!  You have 12 hitpoints remaining."  Bad "With a mighty roar that shakes the earth and a B+ in creative writing class, the beast swings with the force to bring down a tree.  You barely block it with your shield that you bought in town last week from a very nice merchant named Eisenfricalheimer who was missing a finger on his left hand and whose daughter attended the same fighter college as your cousin Ed but was a year higher than him so they didn't really talk much and take 14 damage.")
//Comments on branches, loops, functions, and variables unless super clear from their names. DO NOT comment every line. You don't need to explain how C++ works.  Just how your brain works.
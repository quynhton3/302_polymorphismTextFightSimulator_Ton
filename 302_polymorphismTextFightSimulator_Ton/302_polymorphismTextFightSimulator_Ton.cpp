// 302_polymorphismTextFightSimulator_Ton.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//There are at least three types of monsters.
int tMonster; // fire = 1, water = 2, grass = 3
int tElement; // fire = 1, water = 2, grass = 3

float tEnemy1Health = 30;
float tEnemy2Health = 30;
float tEnemy3Health = 30;
float tEnemy4Health = 30;
float tEnemy5Health = 30;

float tEffective = 20;
float tDamaged = 10;
float tImmune = 0;

float tPlayerHealth = 100;
bool tIsLose = false;

int main()
{


	while (tIsLose == false) { //not using DO WHILE Loops bc they execute thru even after returning true (?)
		//The player will face five picked at random


		//The main loop can only hold an array of Monster pointers.That's the whole point.  Stop trying to work around the whole point. LOLLO



		//All the monsters have hitpoints, but start with different hitpoints



		//The player has three choices of attack, but some monster types are immune to one / some and some monsters take extra damage from one / some
		if (tMonster == 1) { //if FIRE Monster...
			if (tElement == 1) { //is hit with fire...
				tEnemy1Health -= tDamaged;
				cout << "You hit the monster for ";
			}
			else if (tElement == 2) { //is hit with water...
				tEnemy1Health -= tEffective;
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
				tEnemy1Health -= tDamaged;
				cout << "You hit the monster for ";
			}
			else if (tElement == 3) { //is hit with grass...
				tEnemy1Health -= tEffective;
				cout << "You hit the monster for ";
			}

		}

		if (tMonster == 3) { //if GRASS Monster...
			if (tElement == 1) { //is hit with fire...
				tEnemy1Health -= tEffective;
				cout << "You hit the monster for ";
			}
			else if (tElement == 2) { //is hit with water...
				cout << "That wasn't really effective... You hit the monster for 0 damage. ";
			}
			else if (tElement == 3) { //is hit with grass...
				tEnemy1Health -= tDamaged;
				cout << "You hit the monster for ";
			}

		}

		//Current monster attacks the player every round



		//Every action and result has concise feedback(Monster intro, damage taken / remaining.Concise.)
		cout << "Enemy 1 HP: ";
		cout << "Enemy 2 HP: ";
		cout << "Enemy 3 HP: ";
		






	}




}

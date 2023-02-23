// 302_polymorphismTextFightSimulator_Ton.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//There are at least three types of monsters.
int tMonster; // fire = 1, water = 2, earth = 3
int tElement; // fire = 1, water = 2, earth = 3

float tEnemy1Health = 30;
float tEnemy2Health = 30;
float tEnemy3Health = 30;
float tEnemy4Health = 30;
float tEnemy5Health = 30;


float tPlayerHealth = 100;
bool tIsLose = false;

int main()
{


	while (tIsLose == false) { //not using DO WHILE Loops bc they execute thru even after returning true (?)
		//The player will face five picked at random


		//The main loop can only hold an array of Monster pointers.That's the whole point.  Stop trying to work around the whole point. LOLLO



		//All the monsters have hitpoints, but start with different hitpoints



		//The player has three choices of attack, but some monster types are immune to one / some and some monsters take extra damage from one / some
		if (tMonster == 1) { //if Fire Monster...
			if (tElement == 1) { //is hit with fire...

			}
			else if (tElement == 2) { //is hit with water...


			}
			else if (tElement == 3) { //is hit with earth...


			}

		}

		if (tMonster == 2) { //if Water Monster...
			if (tElement == 1) { //is hit with fire...
				tEnemy1Health -= 20;
				cout << "You hit the monster for";
			}
			else if (tElement == 2) { //is hit with water...
				tEnemy1Health -= 10;
				cout << "You hit the monster for";
			}
			else if (tElement == 3) { //is hit with earth...
				cout << "That wasn't really effective... You hit the monster for";

			}

		}

		if (tMonster == 3) { //if Earth Monster...
			if (tElement == 1) { //is hit with fire...

			}
			else if (tElement == 2) { //is hit with water...


			}
			else if (tElement == 3) { //is hit with earth...


			}

		}

		//Current monster attacks the player every round



		//Every action and result has concise feedback(Monster intro, damage taken / remaining.Concise.)







	}




}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

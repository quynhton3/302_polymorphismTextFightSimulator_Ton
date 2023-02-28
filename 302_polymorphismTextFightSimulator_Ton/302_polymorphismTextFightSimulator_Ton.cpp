// 302_polymorphismTextFightSimulator_Ton.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


//Player input
int tPlayer;

//There are at least three types of monsters.
int tMonster; // fire = 1, water = 2, grass = 3
int tElement; // fire = 1, water = 2, grass = 3

//float tEnemyHP = 30;

//Damage Amounts 
float tEffective = 20;
float tDamaged = 10;
float tImmune = 0;

float tPlayerHP = 200;
bool tIsLose = false;
bool tIsWin = true;

class PlayerMoves {
protected:

public:


};

class Enemy {
protected: 
	//Stats
	string tName;

	float tHP; //Hit Points
	float tAP; //Attack Points 


public:
	int tDamaged = 0;

	Enemy(string tEnemyName)			{tName = tEnemyName;}

	//Getters and Setters are better to access from the child class (bc we are putting the variables as protected/not public) 
	void SetName(string tEnemyName)	{ tName = tEnemyName;}
	string GetName()				{return tName;}





	////before class
	//void SetHitPoints(int start)
	//{
	//	tDamaged = start;
	//}
	//virtual void GetHit(int damage)
	//{
	//	tDamaged -= damage;
	//}
};


class EnemyFire : public Enemy{
protected: //so that the children classes can access 


public:
	float tFireHP = 30;
	float tFireAP = 30;
	//What they have separately : What they have in common
	EnemyFire(string tEnemyName, float tEnemyHP, float tEnemyAP) : Enemy(tEnemyName)
	{
		//tFireHP = tEnemyHP; //50
		//tFireAP = tEnemyAP; //30
		tFireHP = 30; //50
		tFireAP = 30; //30
	}

	//Getters and Setters
	void SetFireHP(float tEnemyHP) { tFireHP = tEnemyHP; } 
	void SetFireAP(float tEnemyAP) { tFireAP = tEnemyAP; }
	
	float GetFireHP() { return tFireHP; }
	float GetFireAP() { return tFireAP; }

};

class EnemyWater : public Enemy{
protected: 

public:
	float tWaterHP = 40;
	float tWaterAP = 20;
	EnemyWater(string tEnemyName, float tEnemyHP, float tEnemyAP) : Enemy(tEnemyName)
	{
		//tWaterHP = tEnemyHP; //50
		//tWaterAP = tEnemyAP; //30
		tWaterHP = 40; //50
		tWaterAP = 20; //30
	}

	//Getters and Setters
	void SetWaterHP(float tEnemyHP) { tWaterHP = tEnemyHP; }
	void SetWaterAP(float tEnemyAP) { tWaterAP = tEnemyAP; }

	float GetWaterHP() { return tWaterHP; }
	float GetWaterAP() { return tWaterAP; }

};

class EnemyGrass : public Enemy{
protected: 

public:
	float tGrassHP = 50;
	float tGrassAP = 10;
	EnemyGrass(string tEnemyName, float tEnemyHP, float tEnemyAP) : Enemy(tEnemyName)
	{
		tGrassHP = tEnemyHP; //50
		tGrassAP = tEnemyAP; //30
	}

	//Getters and Setters
	void SetGrassHP(float tEnemyHP) { tGrassHP = tEnemyHP; }
	void SetGrassAP(float tEnemyAP) { tGrassAP = tEnemyAP; }

	float GetGrassHP() { return tGrassHP; }
	float GetGrassAP() { return tGrassAP; }

};

//Shortcut dialogues 
void Immune(){cout << "That wasn't super effective..." << endl;}
void Effective() { cout << "That was super effective!" << endl; }

int Attack() {
	cout << "Which SPELL do you use?" << endl;
	cout << "              [ [1] = Fire Spell " << " [2] = Water Spell " << " [3] = Grass Spell ] " << endl;

	cin >> tPlayer; 
	system("cls"); //clears screen 

	//Fire Attack ==============================================================================================================================================================================================
	if (tPlayer == 1) {
		cout << "Which ENEMY do you attack?" << endl;
		cin >> tPlayer;
		
		//Which Enemy Selected to Attack
		if (tPlayer == 1) { //Fire Enemy

			Enemy enemy("Fire Enemy");
			EnemyFire fireEnemy("Fire Enemy", 10, 10); //the name/1st paramtere doesnt work here why?

			fireEnemy.tFireHP -= 10;
			//fireEnemy.SetFireHP(-10);

			cout << enemy.GetName() << " took " << fireEnemy.GetFireHP() << " damage. " << endl << "They have " << fireEnemy.GetFireHP() << " HP remaining. " << endl;
			cout << enemy.GetName() << " Attacked you for " << fireEnemy.GetFireAP() << " Attack Points. " << endl;
		}
		
		else if (tPlayer == 2) { //Water Enemy 

			Enemy enemy("Water Enemy");
			EnemyWater waterEnemy("Water Enemy", 10, 10);


			Immune();
			cout << enemy.GetName() << " took " << tImmune << " damage. " << endl << "They have " << waterEnemy.GetWaterHP() << " HP remaining. " << endl;

		}
		
		else if (tPlayer == 3) { //Grass Enemy 
			Enemy enemy("Grass Enemy");
			EnemyGrass grassEnemy("Grass Enemy", 10, 10); //the name/1st paramtere doesnt work here why?

			grassEnemy.tGrassHP -= 30;

			Effective();
			cout << enemy.GetName() << " took 30" << " damage. " << endl << "They have " << grassEnemy.GetGrassHP() << " HP remaining. " << endl;
		}

	}	
	//WATER Attack  ==============================================================================================================================================================================================
	else if (tPlayer == 2) { 
		cout << "Which ENEMY do you attack?" << endl;
		cin >> tPlayer;
		
		//Which Enemy Selected to Attack
		if (tPlayer == 1) { //Fire Enemy
			Enemy enemy("Fire Enemy");
			EnemyFire fireEnemy("Fire Enemy", 10, 10); //the name/1st paramtere doesnt work here why?

			fireEnemy.tFireHP -= 30;

			Effective();
			cout << enemy.GetName() << " took 30" << " damage. " << endl << "They have " << fireEnemy.GetFireHP() << " HP remaining. " << endl;
		}
		else if (tPlayer == 2) { //Water Enemy 

			Enemy enemy("Water Enemy");
			EnemyWater waterEnemy("Water Enemy", 10, 10); //the name/1st paramtere doesnt work here why?

			waterEnemy.tWaterHP -= 10;
			//fireEnemy.SetFireHP(-10);

			cout << enemy.GetName() << " took 20 damage. " << endl << "They have " << waterEnemy.GetWaterHP() << " HP remaining. " << endl;

		}
		else if (tPlayer == 3) { //Grass Enemy 
			Enemy enemy("Grass Enemy");
			EnemyGrass grassEnemy("Grass Enemy", 10, 10);


			Immune();
			cout << enemy.GetName() << " took " << tImmune << " damage. " << endl << "They have " << grassEnemy.GetGrassHP() << " HP remaining. " << endl;

		}
	}	
	//GRASS Attack  ==============================================================================================================================================================================================
	else if (tPlayer == 3) { 
		cout << "Which ENEMY do you attack?" << endl;
		cin >> tPlayer;
		
		//Which Enemy Selected to Attack
		if (tPlayer == 1) { //Fire Enemy

			Enemy enemy("Fire Enemy");
			EnemyFire fireEnemy("Fire Enemy", 10, 10); 

			Immune();
			cout << enemy.GetName() << " took 0" << " damage. " << endl << "They have " << fireEnemy.GetFireHP() << " HP remaining. " << endl;

		}
		else if (tPlayer == 2) { //Water Enemy 
			Enemy enemy("Water Enemy");
			EnemyWater waterEnemy("Water Enemy", 10, 10); //the name/1st paramtere doesnt work here why?

			waterEnemy.tWaterHP -= 20;
			//fireEnemy.SetFireHP(-10);

			Effective();
			cout << enemy.GetName() << " took 20 damage. " << endl << "They have " << waterEnemy.GetWaterHP() << " HP remaining. " << endl;

		}
		else if (tPlayer == 3) { //Grass Enemy 
			Enemy enemy("Grass Enemy");
			EnemyGrass grassEnemy("Grass Enemy", 10, 10);

			grassEnemy.tGrassHP -= 10;


			cout << enemy.GetName() << " took " << tImmune << " damage. " << endl << "They have " << grassEnemy.GetGrassHP() << " HP remaining. " << endl;
		}
	}

	return 2;
}

void CheckingEnemyDead() {
	Enemy enemy("Grass Enemy");
	EnemyGrass grassEnemy("Grass Enemy", 10, 10);
	if (grassEnemy.tGrassHP <= 0) {

	}

}
void EnemyAttack() {


}

int main()
{
	cout << "3 Elements Turn Based Game" << endl;
	//Intro 
	cout << "5 Enemies approached you! " << endl;

	while (tIsLose == false) { //(while = don't know how many time repeated loop)
	
		Attack();
		CheckingEnemyDead();
	}
	//Checking if Player Won/Lost 
	if (tIsLose == true) { //not really sure how to do else while statements ?
		cout << "You lost!" << endl;
		cin >> tPlayer;
		system("cls");
	}
	if (tIsWin == true) {
		cout << "You Won!" << endl;
		cin >> tPlayer;
		system("cls");
	}








	
	

	//
	//if (tPlayer == 1) {
	//	cout << "Who will you attack?" << endl;

	//	cout << enemy.GetName() << "[1]" << endl;
	//	cout << enemy.GetName() << "[2]" << endl;
	//	cout << enemy.GetName() << "[3]" << endl;
	//	cout << enemy.GetName() << "[4]" << endl;

	//}
	 

	//in Class
	//Enemy* enemies[5];
	//enemies[1] = new EnemyFire;
	//enemies[2] = new EnemyWater;
	//enemies[3] = new EnemyGrass;
	//enemies[4] = new EnemyFire;
	//enemies[5] = new EnemyWater;


	//while (tIsLose == false) { //not using DO WHILE Loops bc they execute thru even after returning true (?)
	//	//The player will face five picked at random


	//	//The main loop can only hold an array of Monster pointers.That's the whole point.  Stop trying to work around the whole point. LOLLO



	//	//All the monsters have hitpoints, but start with different hitpoints



	//	//The player has three choices of attack, but some monster types are immune to one / some and some monsters take extra damage from one / some
	//	if (tMonster == 1) { //if FIRE Monster...
	//		if (tElement == 1) { //is hit with fire...
	//			//tEnemy1Health -= tDamaged;
	//			cout << "You hit the monster for ";
	//		}
	//		else if (tElement == 2) { //is hit with water...
	//			//tEnemy1Health -= tEffective;
	//			cout << "You hit the monster for ";
	//		}
	//		else if (tElement == 3) { //is hit with grass...
	//			cout << "That wasn't really effective... You hit the monster for 0 damage. ";
	//		}

	//	}

	//	if (tMonster == 2) { //if WATER Monster...
	//		if (tElement == 1) { //is hit with fire...
	//			cout << "That wasn't really effective... You hit the monster for 0 damage. ";
	//		}
	//		else if (tElement == 2) { //is hit with water...
	//			//tEnemy1Health -= tDamaged;
	//			cout << "You hit the monster for ";
	//		}
	//		else if (tElement == 3) { //is hit with grass...
	//			//tEnemy1Health -= tEffective;
	//			cout << "You hit the monster for ";
	//		}

	//	}

	//	if (tMonster == 3) { //if GRASS Monster...
	//		if (tElement == 1) { //is hit with fire...
	//			//tEnemy1Health -= tEffective;
	//			cout << "You hit the monster for ";
	//		}
	//		else if (tElement == 2) { //is hit with water...
	//			cout << "That wasn't really effective... You hit the monster for 0 damage. ";
	//		}
	//		else if (tElement == 3) { //is hit with grass...
	//			//tEnemy1Health -= tDamaged;
	//			cout << "You hit the monster for ";
	//		}

	//	}

	//	//Current monster attacks the player every round



	//	//Every action and result has concise feedback(Monster intro, damage taken / remaining.Concise.)
	//	cout << "Enemy 1 HP: ";
	//	cout << "Enemy 2 HP: ";
	//	cout << "Enemy 3 HP: ";
	//	

	//	Enemy* enemies [5];
	//	/*enemies [0] = new EnemyWater;
	//	enemies [1] = new EnemyFire;
	//	enemies [2] = new EnemyGrass;
	//	enemies [3] = new EnemyFire;
	//	enemies [4] = new EnemyWater;*/

	//	
	//	Enemy* aEnemy = enemies [5]; //gets a fancy name bc its more common, more likely to want to add more here
	//	aEnemy->GetHit(8);

	//	Enemy* aEnemy = enemies [5];
	//	aEnemy->GetHit(8);

	//	//Hits all enemies 
	//	for (int i = 0; i < 5; i++)
	//		enemies[i]->GetHit(333);


	//}




}

//TO DO:
//Let player know when enemies are Dead
//

//Classes
//Create monsters
//Win or lose loop
//Attack one monster loop
//Attack type matters
//Monsters do different damage and have different hitpoints
//Feedback is completeand concise.  (Good "Minotaur hits for 14!  You have 12 hitpoints remaining."  Bad "With a mighty roar that shakes the earth and a B+ in creative writing class, the beast swings with the force to bring down a tree.  You barely block it with your shield that you bought in town last week from a very nice merchant named Eisenfricalheimer who was missing a finger on his left hand and whose daughter attended the same fighter college as your cousin Ed but was a year higher than him so they didn't really talk much and take 14 damage.")
//Comments on branches, loops, functions, and variables unless super clear from their names. DO NOT comment every line. You don't need to explain how C++ works.  Just how your brain works.
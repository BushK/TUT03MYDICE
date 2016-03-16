#include "Dice.h"  
#include<iostream>


using namespace std;

int main()
{
	int noOfRolls;
	float averageRolls;
	int throwsArray[5] = {};
	Dice MyDice, ArrayDice;


	cout << "Please enter the number of rolls" << endl;
	cin >> noOfRolls;
	averageRolls = MyDice.average(ArrayDice, noOfRolls);
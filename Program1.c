/*
Program:  Assignment 7, Program 1
Made by:  Garrett Stanifer
Date:  3/26/2021
Converting temps through a menu of choices of either Celsius to either Fahrenheit, Kelvin, or Rankine.
*/

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int menu();
void temperatureCalc(double temp, int choice);

int main()
{
	int choice;
	char ch = 'Y';
	double temp;
	while (ch == 'Y') //Will loop until user enters N
	{
		printf("Enter a temperature in Celsius:  "); //Reads temp input by user
		scanf("$lf", &temp);
		choice = menu();
		temperatureCalc(temp, choice); 
		printf("Do you wan to convert another temperature (Type Y for yes, N for no):  \n"); //Asks uf user wants to convert again
		scanf(" %c", &ch);
	}
	return 0;
}

int menu()
{
	int choice;
	printf("1. Fahrenheit\n2. Kelvin\n3. Rankine\n"); //Menu to choose from
	printf("Enter your choice:  ");
	scanf("%d", &choice);  //Scans input choice
	return choice;
}

void temperatureCalc(double temp, int choice)
{
	double res;
	switch (choice) //Converts temp based on user's choice and prints the result
	{
	case 1: res = (temp * 9 / 5) + 32;
		printf("Converted Temperature:  %lf F\n", res);
		break;
	case 2: res = temp + 273.15;
		printf("Converted Temperature:  %lf K\n", res);
		break;
	case 3: res = (temp * 9 / 5) + 491.67;
		printf("Converted Temperature :  %lf R\n", res);
		break;
	default: 
		printf("Invalid choice..\n");
	}
}

/*
Program:  Assignment 7, Prog 2
Made by:  Garrett Stanifer
Date:  3/26/2021
Calculate the arc length s of a parabolic segment BOC given distance a and distance b of the arc
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
	srand(time(NULL));

	int a = randomNumber(15, 12);  //Generates 2 random numbers
	int b = randomNumber(12, 8);

	double firstResult = arcLength(a, b);  //First arclength result

	int newA = b;
	int newB = a;

	double secondResult = arcLength(newA, newB);  //Second arclength result

	printResult(a, b, firstResult);
	printResult(newA, newB, secondResult);  //Prints results

	return 0;
}


int randomNumber(int upper, int lower) //Generates random number between upper and lower range
{
	return (rand() % (upper - lower + 1)) + lower;
}

double arcLength(int a, int b)  //Calculates arclength
{
	double s = 0;
	double firstExp = sqrt(pow(b, 2) + 16 * pow(a, 2));  //First expression
	firstExp = firstExp / 2;

	double insideLogNum = 4 * a + sqrt(pow(b, 2) + 16 * pow(a, 2));  //Calculates 2nd expression 
	double insideLogDen = b;
	double insideLog = insideLogNum / insideLogDen;
	double outsideLogNum = pow(b, 2);
	double outsideLogDen = pow(a, 2);
	double outsideLog = outsideLogNum / outsideLogDen;
	double secondExp = outsideLog * log(insideLog);

	s = firstExp + secondExp;

	return s;
}

void printResult(int a, int b, double result)  //Prints the reults
{
	printf("\nLength a is %d and Length b is %d with Length of parabola %.2f", a, b, result);
}

/*
Program:  Assignment 7, Prog 3
Made by:  Garrett Stanifer
Date:  3/26/2021
Determines a student�s grade from 3 test scores by two methods
*/

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int readScore();
char calculateGrade1(int, int, int);
char calculateGrade2(int, int, int);
void printGrade(int, int, int, char, char);

int main()
{
	int score1, score2, score3;
	char grade1, grade2;
	score1 = readScore(); //Reads scores
	score2 = readScore();
	score3 = readScore();
	
	grade1 = calculateGrade1(score1, score2, score3);
	grade2 = calculateGrade2(score1, score2, score3);  //Calculates grades
	printGrade(score1, score2, score3, grade1, grade2);
	return 0;
}

int readScore()  //Fucntion to read input scores
{
	int score;
	printf("Enter score:  "); //Has user input a score
	scanf_s("%d", &score);
	return score;
}

char calculateGrade1(int s1, int s2, int s3) //Function to calculate grade using method 1
{
	float average;
	char grade;
	average = (double)(s1 + s2 + s3) / 3.0;

	if (average >= 90 && average <= 100) //If between 90 and 100, grade=A
		grade = 'A';
	else if (average >= 80 && average < 90)  //If between 80 and 90, grade=B
		grade = 'B';
	else if (average >= 70 && average < 80) //If between 70 and 80, grade=C
		grade = 'C';
	else if (average >= 60 && average < 70) //If between 60 and 70, grade=D
		grade = 'D';
	else if (average < 60)  //If grade lower than 60, grade=F
		grade = 'F';
	return grade;
}


char calculateGrade2(int s1, int s2, int s3) //Calculates grade using 2nd method
{
	float average, avg;
	char grade;
	average = (double)(s1 + s2 + s3) / 3.0;

	if (average >= 90 && average <= 100)
		grade = 'A';
	else if (average >= 70 && average < 90)
	{
		if (s3 > 90)
			grade = 'A';
		else
			grade = 'B';
	}
	else if (average >= 50 && average < 70)
	{
		avg = (double)(s2 + s3) / 2.0;

		if (avg > 70)
			grade = 'C';
		else
			grade = 'D';
	}
	else if (average < 50)
		grade = 'F';
	return grade;
}

void printGrade(int s1, int s2, int s3, char g1, char g2)  //Function to print results
{
	printf("\nScores are:  %d %d %d", s1, s2, s3);
	printf("\nGrade calculated using the first method:  %c", g1);
	printf("\nGrade calculated using the second method:  %c", g2);
}

/*
Title: Chapter 2 Exercise 7 - Ocean Levels
File Name : Chapter2Exercise7_Brion_Blais
Programmer : Brion Blais
Date : 09 / 2024
Requirements :
    Assuming the ocean�s level is currently rising at about 1.5 millimeters per year, write a program that displays:
        � The number of millimeters higher than the current level that the ocean�s level will be in 5 years.
        � The number of millimeters higher than the current level that the ocean�s level will be in 7 years.
        � The number of millimeters higher than the current level that the ocean�s level will be in 10 years.
    Place this is the main branch of GitHub.

    Create a branch that revises your code so:
        � that the user can enter the number of the number of millimeters the ocean level rises per year..

    Submitted the URL in Canvas for that project.
*/

#include <iostream>
using namespace std;

int main()
{
    const double OCEAN_LEVEL_ANNUAL_RISE = 1.5;
    double levelYear5 = OCEAN_LEVEL_ANNUAL_RISE * 5;
    double levelYear7 = OCEAN_LEVEL_ANNUAL_RISE * 7;
    double levelYear10 = OCEAN_LEVEL_ANNUAL_RISE * 10;

    cout << "The ocean's level will be " << levelYear5 << " millimeters higher than the current level in 5 years.\n";
    cout << "In 7 years, it will be " << levelYear7 << " millimeters higher than the current level.\n";
    cout << "In 10 years, it will be " << levelYear10 << " millimeters higher than the current level.\n";

    return 0;
}
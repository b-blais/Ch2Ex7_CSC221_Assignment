/*
Title: Chapter 2 Exercise 7 - Ocean Levels
File Name : Chapter2Exercise7_Brion_Blais
Programmer : Brion Blais
Date : 09 / 2024
Requirements :
    Assuming the ocean’s level is currently rising at about 1.5 millimeters per year, write a program that displays:
        • The number of millimeters higher than the current level that the ocean’s level will be in 5 years.
        • The number of millimeters higher than the current level that the ocean’s level will be in 7 years.
        • The number of millimeters higher than the current level that the ocean’s level will be in 10 years.
    Place this is the main branch of GitHub.

    Create a branch that revises your code so:
        • that the user can enter the number of the number of millimeters the ocean level rises per year..

    Submitted the URL in Canvas for that project.
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "Please enter the level the ocean will rise in millimeters each year.\n";

    double oceanLevelAnnualRise;

    cin >> oceanLevelAnnualRise;

    // The statement below ensures that the value will be positive, in case the user inadvertently enters a negative number.
    if (oceanLevelAnnualRise <= 0) {
        oceanLevelAnnualRise = abs(oceanLevelAnnualRise);
        cout << "The ocean only rises!  ";

    }
    // The statement below makes sure the output is gramatically correct for a single millimeter.
    if (oceanLevelAnnualRise == 1) {
        cout << "The ocean will rise " << oceanLevelAnnualRise << " millimeter each year.\n\n";
    }
    else cout << "The ocean will rise " << oceanLevelAnnualRise << " millimeters each year.\n\n";

    double levelYear5 = oceanLevelAnnualRise * 5;
    double levelYear7 = oceanLevelAnnualRise * 7;
    double levelYear10 = oceanLevelAnnualRise * 10;


    cout << "The ocean's level will be " << levelYear5 << " millimeters higher than the current level in 5 years.\n";
    cout << "In 7 years, it will be " << levelYear7 << " millimeters higher than the current level.\n";
    cout << "In 10 years, it will be " << levelYear10 << " millimeters higher than the current level.\n";

    return 0;
}
/*******************************
**Program Filename: minmax.cpp
**Author: Reuben Youngblom
**Date: October 11th 2016
**Description: Assignment 3a, Minimums and Maximums. This program takes user input for number of numbers
they want to enter, and then takes that many numbers as input. After each number, program checks current
number against current highest and lowest numbers, and replaces them with new number if new number
is higher or lower than the highest or lowest numbers.
**Input: User inputs number of numbers they want to deal with, and then enteres that many numbers
**Output: Programs tells user the minimum and maximum bounds of their numbers
*******************************/

#include <iostream>
using namespace std;

int main ()  // main function
{
	int user_number;  //will store user-inputted number
	cout << "How many integers would you like to enter?" << endl;  //prompts user to specify a number
	cin >> user_number;   //sets user input to variable user_number

	cout << "Please enter " << user_number << " integers." << endl;    // prompts user to enter numbers

	int highest; 
	int lowest;  //creates variables for high and low numbers
	int store;    //creates changeble user input storage variable

	cin >> store;   //takes user input at least once, sets to store
	highest = store;
	lowest = store;   //initializes high and low numbers to user input, just in case 'for' loop doesn't run

	for (int count=2; count <= user_number; count++)    //for loop starts at 2, since one iteration runs outside the loop
	{
		
		cin >> store;      // if necessary, takes more instances of user input
		if (store > highest) {
			highest = store;}    //sets to high or low variables if this new number exceeds the current bounds
		if (store < lowest) {
			lowest = store;}

	}
	
	cout << "Min:" << lowest << endl;    //outputs high and low numbers
	cout << "Max:" << highest << endl;

return 0;
}

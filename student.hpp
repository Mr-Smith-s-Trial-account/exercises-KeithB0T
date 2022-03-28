#pragma once // prevents multiple definitions

#include <iostream> // print library
#include <string>
using namespace std;

// ===============
// implementations

int exerciseOne(string word) //takes in one word
{

	
	return 0;// TODO: fix
}

string exerciseTwo(int mark) //takes in one mark
{
	if (mark >= 50)
	{
		return "passed";
	}
	
	return "failed";// TODO: fix. Returns a word
}

string exerciseThree(int number) //takes in one number
{
	string word = "";
	if (number % 3 == 0){
		word = word+"fizz";}
	if (number%5 ==0){
		word = word+"buzz";}
	if (number%3 != 0 && number%5!=0){
		word = to_string(number);}
	return word;
	return "0";// TODO: fix. Returns a word, or a number in string format
}

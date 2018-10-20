/*
Program: Determines if a word is a palindrome or not.
Program name : palindrome.

Original question code from : https://www.testdome.com/questions/original/7284

*/

#include <string>
#include <stdexcept>
#include <iostream>
#include <string>

class Palindrome
{
public:
	static bool isPalindrome(const std::string& word)
	{
		int i = 0;					//start of the string
		int j = word.length() - 1;	//end of the string
		int runs = 0;				//total number of times the program will run (1/2 the size of the string)

		do
		{
			if (word.at(i) == word.at(j))		//comapres the two items of the string
			{
				i++;		//moves on to the next item from the begining 
				j--;		//moves on to the next item from the back
				runs++;		//increaes the total ammont of runs.
			}
			else
			{
				return false;
			}
		} while (runs <= (word.length() / 2));		//loops until the run limit has been exceded or a patterm mismatch occurs.
		return true;
	}
};

#ifndef RunTests
int main()
{
	//prompts the user to enter a string that will be tested
	std::cout << "======\nPalindrome tester V2\n======" << std::endl << std::endl;

	std::string word;
	std::cout << "Please enter a word: ";
	std::cin >> word;

	if (Palindrome::isPalindrome(word) == true)
	{
		std::cout << "\nPaindrome" << std::endl;
	}
	else
	{
		std::cout << "\nNot Paindrome" << std::endl;
	}

	return 0;
}

#endif
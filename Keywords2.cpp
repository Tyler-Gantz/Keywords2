// Keywords2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cctype>

using namespace std;

int main()
{	
	//setup incorrect guesses
	const int MAX_WRONG = 5; //set max wrong

	vector<string> words; //create the list of cool spy words
	words.push_back("ESPIONAGE");
	words.push_back("AGENT");
	words.push_back("CIPHER");
	words.push_back("ENIGMA");
	words.push_back("HEADQUARTERS");
	words.push_back("CIA");
	words.push_back("FBI");
	words.push_back("INFILTRATE");
	words.push_back("INTEL");
	words.push_back("ENCRYPTION");

	srand(static_cast<unsigned int>(time(0)));//randomly select one
	random_shuffle(words.begin(), words.end());

	const string THE_WORD1 = words[0];//declare all required variables for the first word
	int wrong1 = 0;
	string soFar1(THE_WORD1.size(), '-');
	string used1 = "";

	
	cout << "Welcome to Keywords 2 \n";
	cout << "Guess the letters in the word and get the word before missing 5 letters";// start game and give instructions
	while ((wrong1 < MAX_WRONG) && (soFar1 != THE_WORD1)) {
		cout << "\n\nYou have " << (MAX_WRONG - wrong1);
		cout << " incorrect guesses left.\n";
		cout << "\nYou've used the following letters:\n" << used1 << endl;
		cout << "\nSo far, the word is:\n" << soFar1 << endl;
		
		char guess1;//get guess and see if it in or not in the word
		cout << "\n\nEnter your guess: ";
		cin >> guess1;
		guess1 = toupper(guess1);

		while (used1.find(guess1) != string::npos) {
			cout << "\nYou've already guessed" << guess1 << endl;
			cout << "Enter you're guess: ";
			cin >> guess1;
			guess1 = toupper(guess1);
		}
		used1 += guess1;
		if (THE_WORD1.find(guess1) != string::npos) {
			cout << "That's right! " << guess1 << " is in the word.\n";
			for (int i = 0; i < THE_WORD1.length(); ++i) {
				if (THE_WORD1[i] == guess1) {
					soFar1[i] = guess1;
				}
			}
		}
		else {
			cout << "Sorry, " << guess1 << " isn't in the word.\n";
			++wrong1;
		}
	}
	if (soFar1 == THE_WORD1) {//if the guesses are correct 
		cout << "You guessed the word!";
	}
	else {
		cout << "\nYou've been blocked!";// if you get 5 wrong tell them its worng move on and display old word
	}
	
	
	cout << "\nThe word was " << THE_WORD1 << endl;





	// do the second word the same as the first
	srand(static_cast<unsigned int>(time(0)));
	random_shuffle(words.begin(), words.end());

	const string THE_WORD2 = words[0];
	int wrong2 = 0;
	string soFar2(THE_WORD2.size(), '-');
	string used2 = "";

	cout << "Time for word 2 \n";
	while ((wrong2 < MAX_WRONG) && (soFar2 != THE_WORD2)) {
		cout << "\n\nYou have " << (MAX_WRONG - wrong2);
		cout << " incorrect guesses left.\n";
		cout << "\nYou've used the following letters:\n" << used2 << endl;
		cout << "\nSo far, the word is:\n" << soFar2 << endl;

		char guess2;
		cout << "\n\nEnter your guess: ";
		cin >> guess2;
		guess2 = toupper(guess2);

		while (used2.find(guess2) != string::npos) {
			cout << "\nYou've already guessed" << guess2 << endl;
			cout << "Enter you're guess: ";
			cin >> guess2;
			guess2 = toupper(guess2);
		}
		used2 += guess2;
		if (THE_WORD2.find(guess2) != string::npos) {
			cout << "That's right! " << guess2 << " is in the word.\n";
			for (int i = 0; i < THE_WORD2.length(); ++i) {
				if (THE_WORD2[i] == guess2) {
					soFar2[i] = guess2;
				}
			}
		}
		else {
			cout << "Sorry, " << guess2 << " isn't in the word.\n";
			++wrong2;
		}
	}

	if (soFar2 == THE_WORD2) {
		cout << "You guessed the word!";
	}
	else {
		cout << "\nYou've been blocked!";
	}
	cout << "\nThe word was " << THE_WORD2 << endl;






	//do the third word the same as the first and second
	srand(static_cast<unsigned int>(time(0)));
	random_shuffle(words.begin(), words.end());

	const string THE_WORD3 = words[0];
	int wrong3 = 0;
	string soFar3(THE_WORD3.size(), '-');
	string used3 = "";



	cout << "Time for word 3 \n";
	while ((wrong3 < MAX_WRONG) && (soFar3 != THE_WORD3)) {
		cout << "\n\nYou have " << (MAX_WRONG - wrong3);
		cout << " incorrect guesses left.\n";
		cout << "\nYou've used the following letters:\n" << used3 << endl;
		cout << "\nSo far, the word is:\n" << soFar3 << endl;

		char guess3;
		cout << "\n\nEnter your guess: ";
		cin >> guess3;
		guess3 = toupper(guess3);

		while (used3.find(guess3) != string::npos) {
			cout << "\nYou've already guessed" << guess3 << endl;
			cout << "Enter you're guess: ";
			cin >> guess3;
			guess3 = toupper(guess3);
		}
		used3 += guess3;
		if (THE_WORD3.find(guess3) != string::npos) {
			cout << "That's right! " << guess3 << " is in the word.\n";
			for (int i = 0; i < THE_WORD3.length(); ++i) {
				if (THE_WORD3[i] == guess3) {
					soFar3[i] = guess3;
				}
			}
		}
		else {
			cout << "Sorry, " << guess3 << " isn't in the word.\n";
			++wrong3;
		}
	}

	if (soFar3 == THE_WORD3) {
		cout << "You guessed the word!";
	}
	else {
		cout << "\nYou've been blocked!";
	}
	cout << "\nThe word was " << THE_WORD3 << endl;

	cout << "Congrats you have completed Keywords 2"; //send a congrats message and end game  
	
    return 0;
}


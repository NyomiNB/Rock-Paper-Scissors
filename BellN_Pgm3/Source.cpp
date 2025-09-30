//Program: The purpose of this program is to randomly select a choice of rock, paper, scissors, spock, or lizard to play against the user.
// Process: The program randomly selects a random number which is assigned a value of rock, paper, scissors, etc. and the value of user input is compared with the computer input.   
// Results: The program outputs whether or not the user wins or loses each round giving the user the option to replay each round.
//
//Class: CS2010
//Section: 1001
//Term: Fall 2025
//Author: Nyomi Bell 
//Reflection:  
//I started with copy pasting the requirements in the form of comments, then I created all variables that had specific requirements stated in the directions.
//I then created the bool var for the while loop. Then, I created an if else statement to make sure the code for the  "play again" block was working properly before I added the rest of the actual game logic that would compare user input with the computer choice.
//I finally created the logic blocks to determine the winner for each round.
// 
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- 
#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;
int main() {

	//init and declares constants for choices
	const char ROCK = 'R';
	const char PAPER = 'P';
	const char SCISSORS = 'S';
	const char LIZARD = 'L';
	const char SPOCK = 'V';

	const char ROCKL = 'r';
	const char PAPERL = 'p';
	const char SCISSORSL = 's';
	const char LIZARDL = 'l';
	const char SPOCKL = 'v';

	string computerChoiceMessage;//holds string of computer choice

	bool playing = true;//init and declares playing var that will decide if while loop continues after each iteration


	string computerChoice;//holds computer move
	char userChoice;//holds user move

	string playAgain;//holds user input to play again

	int computerWins = 0;//holds # of computer wins
	int userWins = 0;//holds # of user wins
	int ties = 0;//holds # of ties

	while (playing) {
		//prompts user to select move
		cout << "Enter R for Rock, P for Paper, S for Scissors, L for Lizard, and V for Spock: ";
		//saves user move to a var
		cin >> userChoice;
		//selects random number in each iteration
		int randomNum = rand() % 4;

		//based on random number computer choice is chosen
		if (randomNum == 0) {
			computerChoice = "Rock";
		}
		else if (randomNum == 1) {
			computerChoice = "Paper";

		}
		else if (randomNum == 2) {
			computerChoice = "Scissors";

		}
		else if (randomNum == 3) {
			computerChoice = "Lizard";

		}
		else {
			computerChoice = "Spock";

		}

		//outputs computer choice
		cout << "Computer chose: " << computerChoice << endl;

		//block of if statements decide winner for the round
		if ((userChoice == SCISSORS || userChoice == SCISSORSL) && (computerChoice == "Paper")) {
			cout << "You win this round! (Scissors cut paper)" << endl;
			userWins++;

		}
		else if ((userChoice == SCISSORS || userChoice == SCISSORSL) && (computerChoice == "Lizard")) {
			cout << "You win this round! (Scissors kill lizard)" << endl;
			userWins++;
		}
		else if ((userChoice == ROCK || userChoice == ROCKL) && (computerChoice == "Lizard")) {
			cout << "You win this round! (Rock crushes lizard)" << endl;
			userWins++;

		}
		else if ((userChoice == ROCK || userChoice == ROCKL) && (computerChoice == "Scissors")) {
			cout << "You win this round! (Rock crushes scissors)" << endl;
			userWins++;
		}
		else if ((userChoice == PAPER || userChoice == PAPERL) && (computerChoice == "Rock")) {
			cout << "You win this round! (Paper covers rock)" << endl;
			userWins++;
		}
		else if ((userChoice == PAPER || userChoice == PAPERL) && (computerChoice == "Spock")) {
			cout << "You win this round! (Paper disproves Spock)" << endl;
			userWins++;
		}
		else if ((userChoice == LIZARD || userChoice == LIZARDL) && (computerChoice == "Spock")) {

			cout << "You win this round! (Lizard poisions Spock)" << endl;
			userWins++;
		}
		else if ((userChoice == LIZARD || userChoice == LIZARDL) && (computerChoice == "Paper")) {

			cout << "You win this round! (Lizard eats paper)" << endl;
			userWins++;
		}
		else if ((userChoice == SPOCK || userChoice == SPOCKL) && (computerChoice == "Scissors")) {

			cout << "You win this round! (Spock smashes scissors)" << endl;
			userWins++;
		}
		else if ((userChoice == SPOCK || userChoice == SPOCKL) && (computerChoice == "Rock")) {

			cout << "You win this round! (Spock vaporizes rock)" << endl;
			userWins++;//end of user win block
		}
		else if ((userChoice == PAPER || userChoice == PAPERL) && (computerChoice == "Scissors")) {
			cout << "You lose this round! (Scissors cut paper)" << endl;
			computerWins++;

		}
		else if ((userChoice == LIZARD || userChoice == LIZARDL) && (computerChoice == "Scissors")) {
			cout << "You lose this round! (Scissors kill lizard)" << endl;
			computerWins++;
		}
		else if ((userChoice == LIZARD || userChoice == LIZARDL) && (computerChoice == "Rock")) {
			cout << "You lose this round! (Rock crushes lizard)" << endl;
			computerWins++;

		}
		else if ((userChoice == SCISSORS || userChoice == SCISSORSL) && (computerChoice == "Rock")) {
			cout << "You lose this round! (Rock crushes scissors)" << endl;
			computerWins++;
		}
		else if ((userChoice == ROCK || userChoice == ROCKL) && (computerChoice == "Paper")) {
			cout << "You lose this round! (Paper covers rock)" << endl;
			computerWins++;
		}
		else if ((userChoice == SPOCK || userChoice == SPOCKL) && (computerChoice == "Paper")) {
			cout << "You lose this round! (Paper disproves Spock)" << endl;
			computerWins++;
		}
		else if ((userChoice == SPOCK || userChoice == SPOCKL) && (computerChoice == "Lizard")) {

			cout << "You lose this round! (Lizard poisions Spock)" << endl;
			computerWins++;
		}
		else if ((userChoice == PAPER || userChoice == PAPERL) && (computerChoice == "Lizard")) {

			cout << "You lose this round! (Lizard eats paper)" << endl;
			computerWins++;
		}
		else if ((userChoice == SCISSORS || userChoice == SCISSORSL) && (computerChoice == "Spock")) {

			cout << "You lose this round! (Spock smashes scissors)" << endl;
			computerWins++;
		}
		else if ((userChoice == ROCK || userChoice == ROCKL) && (computerChoice == "Spock")) {

			cout << "You lose this round! (Spock vaporizes rock)" << endl;
			computerWins++;
		}
		else if ((userChoice == ROCK || userChoice == ROCKL) && (computerChoice == "Rock")) {
			cout << "It's a tie!" << endl;
			ties++;

		}
		else if ((userChoice == PAPER || userChoice == PAPERL) && (computerChoice == "Paper")) {
			cout << "It's a tie!" << endl;
			ties++;

		}
		else if ((userChoice == SCISSORS || userChoice == SCISSORSL) && (computerChoice == "Scissors")) {
			cout << "It's a tie!" << endl;
			ties++;

		}
		else if ((userChoice == LIZARD || userChoice == LIZARDL) && (computerChoice == "Lizard")) {
			cout << "It's a tie!" << endl;
			ties++;

		}
		else if ((userChoice == SPOCK || userChoice == SPOCKL) && (computerChoice == "Spock")) {
			cout << "It's a tie!" << endl;
			ties++;

		}





		//prompts user to play again or stop playing
		cout << "\nPlay Again? (Y/N): ";
		cin >> playAgain;
		cout << "\n";

		//if user chooses not to play again, stats are outputted, playing is set to false. and while loop ends
		if (playAgain == "N") {
			cout << "Final Results:" << endl;
			cout << "User Wins: " << userWins << endl;
			cout << "Computer Wins: " << computerWins << endl;
			cout << "Ties: " << ties << endl;
			playing = false;

		}
	}

	return 0;
}
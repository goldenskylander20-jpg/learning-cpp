#include <iostream>
#include <string>


std::string decision(std::string p1, std::string p2) {

	if (!(p1 == "Rock" || p1 == "rock" || p1 == "Paper" || p1 == "paper" || p1 == "Scissor" || p1 == "scissor")) {
		return "I";
	}

	else if (!(p2 == "Rock" || p2 == "rock" || p2 == "Paper" || p2 == "paper" || p2 == "Scissor" || p2 == "scissor")) {
		return "I";
	}

	else if (p1 == p2) {
		return "Tie";
	}

	else if ((p1 == "Rock" || p1 == "rock") && (p2 == "Paper" || p2 == "paper")) {
		return "Player 2!";
	}

	else if ((p1 == "Scissor" || p1 == "scissor") && (p2 == "Rock" || p2 == "rock")) {
		return "Player 2!";
	}

	else if ((p1 == "Paper" || p1 == "paper") && (p2 == "Scissor" || p2 == "scissor")) {
		return "Player 2!";
	}

	else{
		return "Player 1!";
	}

}

int main() {

	std::string p1{};
	std::string p2{};
	std::cout << "    Rock Paper Scissor Game\n\n";

	std::cout << "Player 1: ";
	std::cin >> p1;
	std::cout << "Player 2: ";
	std::cin >> p2;

	std::string result{ decision(p1, p2) };

	if (result == "I") {
		std::cout << "\nInvalid Input\n\n\n";
	}
	else {
		std::cout << "\nThe Winner is: " << result << "\n\n\n";
	}

	return 0;
}
#include <iostream>
#include <string>



std::string fruit(std::string color, std::string texture, int cm) {

	if ((color == "red" || color == "Red") && texture == "smooth" && cm >= 5 && cm <= 10) {
		return "apple";
	}
	else if ((color == "green" || color == "Green") && texture == "smooth" && cm >= 5 && cm <= 10) {
		return "green apple";
	}
	else if ((color == "yellow" || color == "Yellow") && texture == "smooth" && cm >= 5 && cm <= 30) {
		return "mango";
	}
	else if ((color == "blue" || color == "Blue") && texture == "smooth" && cm >= 1 && cm <= 2) {
		return "blueberry";
	}
	else if ((color == "yellow" || color == "Yellow") && texture == "bumpy" && cm >= 17 && cm <= 30) {
		return "pineapple";
	}
	else if ((color == "brown" || color == "Brown") && texture == "fuzzy" && cm >= 5 && cm <= 8) {
		return "kiwi";
	}

	else if ((color == "orange" || color == "Orange") && texture == "bumpy" && cm >= 6 && cm <= 10) {
		return "orange";
	}

	else if ((color == "yellow" || color == "Yellow") && texture == "smooth" && cm >= 15 && cm <= 20) {
		return "banana";
	}

	else { return "I dont know what that is"; }

}


int main() {
	std::string color{}, texture{};
	int cm{};

	std::cout << "I will guess what fruit you're thinking\n\n";

	std::cout << "Color (red/yellow/green/blue): ";
	std::cin >> color;
	std::cout << "Texture (smooth/bumpy/fuzzy): ";
	std::cin >> texture;
	std::cout << "Size in Cm: ";
	std::cin >> cm;

	std::string result{ fruit(color, texture, cm) };
	if (result == "I dont know what that is") {
		std::cout << "\nI dont know what that is\n\n";
	}
	else {
		std::cout << "\nYour fruit is: " << result << "\n\n";
	}


	return 0;
}
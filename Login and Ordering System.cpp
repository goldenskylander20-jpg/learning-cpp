#include <iostream>
#include <string>


int main() {
	std::string userName{}, passWord{};
	std::cout << "Please Log in\n\n";

	std::cout << "Usertype: ";
	std::cin >> userName;

	std::cout << "Password: ";
	std::cin >> passWord;

	if ((userName == "Admin" || userName == "admin") && passWord == "Admin2020") {

		std::cout << "\nACCESS Granted!!!\nGood day Admin\n\n";
	}
	
	else if ((userName == "Guest" || userName == "guest") && passWord == "Guest2020") {

		std::cout << "\nACCESS Granted!!!\nGood day Guest\n\n";
	}

	else if ((userName == "Secretary" || userName == "secretary") && passWord == "Sec2020") {

		std::cout << "\nACCESS Granted!!!\nGood day Secretary\n\n";
	}

	else {
		std::cout << "\nInvalid Input\n\n";
		return 0;
	}

/////////////////////////////////////////////////////////////////////////////////////////////////
	int choice{};
	std::cout << "\n_______________________________\n";
	std::cout << "Ordering System\n\n\n";

	std::cout << "1.Menu\n2.Desserts\n3.Drinks\n";
	std::cout << "Please choose: ";
	std::cin >> choice;
   
		

		  switch (choice) {

			case 1: {
				int cash{}, quant{};
				char menu{};
				std::cout << "\n_______________________________\n";
				std::cout << "\nMENU\n\n";
				std::cout << "a.Fried Chicken w/ rice P50\n";
				std::cout << "b.Pork Chop w/rice P45\n";
				std::cout << "\nKindly choose a particular menu: ";
				std::cin >> menu;
				switch (menu) {
				case 'A':
				case 'a': {
					std::cout << "Your order is Fried Chicken w/rice P50\n";
					std::cout << "Enter quantity: ";
					std::cin >> quant;
					int total{ 50 * quant };
					std::cout << "The amount to be paid is: P" << total;
					std::cout << "\nEnter your cash on hand: ";
					std::cin >> cash;
					int change{ cash - total };

					if (cash == total) {
						std::cout << "\nYou have no change Thankyou for Ordering!!!\n\n\n";
					}

					else if (cash < total) {
						std::cout << "\nNot enough cash...\n\n\n";
					}

					else if (cash > total) {
						std::cout << "\nYour change is: P" << change << "\n";
						std::cout << "Thanks for Ordering!!!\n\n\n";
					}
				}
						break;
                
				case 'B':
				case 'b': {
					std::cout << "Your order is Pork Chop w/rice P45\n";
					std::cout << "Enter quantity: ";
					std::cin >> quant;
					int total{ 45 * quant };
					std::cout << "The amount to be paid is: P" << total;
					std::cout << "\nEnter your cash on hand: ";
					std::cin >> cash;
					int change{ cash - total };

					if (cash == total) {
						std::cout << "\nYou have no change Thankyou for Ordering!!!\n\n\n";
					}

					else if (cash < total) {
						std::cout << "\nNot enough cash...\n\n\n";
					}

					else if (cash > total) {
						std::cout << "\nYour change is: P" << change << "\n";
						std::cout << "Thanks for Ordering!!!\n\n\n";
					}
				}
						break;

				default: {
					std::cout << "Invalid Input...\n\n\n";
				}
					   break;
				}


			}
				  break;
    
			case 2: {
				int cash{}, quant{};
				char menu{};
				std::cout << "\n_______________________________\n";
				std::cout << "\nDesserts\n\n";
				std::cout << "a.Chocolate Cake P25\n";
				std::cout << "b.Ice Cream P50\n";
				std::cout << "\nKindly choose a particular menu: ";
				std::cin >> menu;
				switch (menu) {
				case 'A':
				case 'a': {
					std::cout << "Your order is Chocolate Cake P25\n";
					std::cout << "Enter quantity: ";
					std::cin >> quant;
					int total{ 25 * quant };
					std::cout << "The amount to be paid is: P" << total;
					std::cout << "\nEnter your cash on hand: ";
					std::cin >> cash;
					int change{ cash - total };

					if (cash == total) {
						std::cout << "\nYou have no change Thankyou for Ordering!!!\n\n\n";
					}

					else if (cash < total) {
						std::cout << "\nNot enough cash...\n\n\n";
					}

					else if (cash > total) {
						std::cout << "\nYour change is: P" << change << "\n";
						std::cout << "Thanks for Ordering!!!\n\n\n";
					}
				}
						break;

				case 'B':
				case 'b': {
					std::cout << "Your order is Ice Cream P50\n";
					std::cout << "Enter quantity: ";
					std::cin >> quant;
					int total{ 50 * quant };
					std::cout << "The amount to be paid is: P" << total;
					std::cout << "\nEnter your cash on hand: ";
					std::cin >> cash;
					int change{ cash - total };

					if (cash == total) {
						std::cout << "\nYou have no change Thankyou for Ordering!!!\n\n\n";
					}

					else if (cash < total) {
						std::cout << "\nNot enough cash...\n\n\n";
					}

					else if (cash > total) {
						std::cout << "\nYour change is: P" << change << "\n";
						std::cout << "Thanks for Ordering!!!\n\n\n";
					}
				}
						break;

				default: {
					std::cout << "Invalid Input...\n\n\n";
				}
					   break;
				}
			}
				  break;

			case 3: {
				int cash{}, quant{};
				char menu{};
				std::cout << "\n_______________________________\n";
				std::cout << "\nDrinks\n\n";
				std::cout << "a.Coke P18\n";
				std::cout << "b.Sprite P20\n";
				std::cout << "\nKindly choose a particular menu: ";
				std::cin >> menu;
				switch (menu) {
				case 'A':
				case 'a': {
					std::cout << "Your order is Coke P18\n";
					std::cout << "Enter quantity: ";
					std::cin >> quant;
					int total{ 18 * quant };
					std::cout << "The amount to be paid is: P" << total;
					std::cout << "\nEnter your cash on hand: ";
					std::cin >> cash;
					int change{ cash - total };

					if (cash == total) {
						std::cout << "\nYou have no change Thankyou for Ordering!!!\n\n\n";
					}

					else if (cash < total) {
						std::cout << "\nNot enough cash...\n\n\n";
					}

					else if (cash > total) {
						std::cout << "\nYour change is: P" << change << "\n";
						std::cout << "Thanks for Ordering!!!\n\n\n";
					}
				}
						break;

				case 'B':
				case 'b': {
					std::cout << "Your order is Sprite P20\n";
					std::cout << "Enter quantity: ";
					std::cin >> quant;
					int total{ 20 * quant };
					std::cout << "The amount to be paid is: P" << total;
					std::cout << "\nEnter your cash on hand: ";
					std::cin >> cash;
					int change{ cash - total };

					if (cash == total) {
						std::cout << "\nYou have no change Thankyou for Ordering!!!\n\n\n";
					}

					else if (cash < total) {
						std::cout << "\nNot enough cash...\n\n\n";
					}

					else if (cash > total) {
						std::cout << "\nYour change is: P" << change << "\n";
						std::cout << "Thanks for Ordering!!!\n\n\n";
					}
				}
						break;

				default: {
					std::cout << "Invalid Input...\n\n\n";
				}
					   break;
				}
			}
				  break;

				  default:{
					  std::cout << "Invalid Input\n\n\n";
			      }
						 break;
          }
			
	return 0;
}
#include <iostream>
#include <vector>
#include <memory>
#include "Animal.h"
#include "Cow.h"
#include "FrisianCow.h"
#include "Sheep.h"


int main()
{
	std::vector<std::unique_ptr<Animal>> container; // Create animals container

	int animalAmount;
	int choice;
	std::cout << "Enter the amount of animals you want to add" << std::endl;
	std::cin >> animalAmount;

	for (int i = 0; i < animalAmount; ++i) // For each animal ask user to choose a type
	{
		std::cout << "Choose an animal to add \n[1] For Sheep \n[2] For cow\n[3] For Frisian cow" << std::endl;
		std::cin >> choice; 
		switch (choice) {
		case 1: // Add a sheep
			container.push_back(std::make_unique<Sheep>());
			break;
		case 2: // Add a cow
			container.push_back(std::make_unique<Cow>());
			break;
		case 3: // Add a frisian cow
			container.push_back(std::make_unique<Frisian>());
			break;
		default: // If invalid input
			std::cout << "Invalid choice, please try again\n";
			animalAmount--; // Decrement to retry the iteration
		}
	}

	for (auto& animal : container) // Make each animal in container speak
	{
		animal->speak();
	}
	

}
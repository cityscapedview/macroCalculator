#include "User.h"
#include <string>
#include <iostream>
#include <limits>

// TODO:
// - [ ] Abstract all std in & out to main.cpp class for now. (can refactor later).
// - [ ] Try and reduce double state.
// - [ ] Instantiate user on startup.
// - [ ] Use setters to set data with try and catch logic in users
// - [ ] Handle all business logic in Users
// - [ ] Finish populating functions for calculating.


int main()
{
  int weight;
  int height;
  int age;
  int weeklyActivity;
  int goal;

  User user = User::createUser();
  user.abeek();

  std::cout << "Welcome to the MacroCalculator, please answer the following questions to recieve your macro goals!";

  // Ask for weight
  std::cout << "Enter weight (in lbs): ";
  while (!(std::cin >> weight) || weight <= 0) {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Invalid input. Please enter a valid weight (postitive number): ";
  }
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

  // Ask for height
  std::cout << "Enter your height (in inches): ";
  while (!(std::cin >> height) || height <= 0) {
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      std::cout << "Invalid input. Please enter a valid height (positive number): ";
  }
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

  // Ask for age
  std::cout << "Enter your age: ";
  while (!(std::cin >> age) || age <= 0) {
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      std::cout << "Invalid input. Please enter a valid age (positive integer): ";
  }
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

  // Ask for weekly activity level
  std::cout << "Enter your weekly activity level (e.g., sedentary, moderate, active): ";
  while (!(std::cin >> weeklyActivity) || weeklyActivity <= 0) {
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      std::cout << "Invalid input. Please enter a valid age (positive integer): ";
  }
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

  // Ask for goal
  std::cout << "Enter your goal (e.g., lose weight, gain muscle, maintain): ";
  while (!(std::cin >> goal) || goal <= 0) {
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      std::cout << "Invalid input. Please enter a valid age (positive integer): ";
  }
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

  // Maybe add a display and ask if this is correct, if not they start again

  // Display the summary
  std::cout << "\n--- Health Information Summary ---\n";
  std::cout << "Weight: " << weight << " kg\n";
  std::cout << "Height: " << height << " cm\n";
  std::cout << "Age: " << age << " years\n";
  std::cout << "Weekly Activity Level: " << weeklyActivity << "\n";
  std::cout << "Goal: " << goal << "\n";

  return 0;
}

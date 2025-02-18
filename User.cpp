#include "User.h"
#include <string>
#include <iostream>
#include <limits>

  // Private Constructor
  User::User(int weight, int height, string weeklyActivity, int age,  string goal) : weight(weight), height(height), weeklyActivity(weeklyActivity), age(age), goal(goal) {}


  // caclulateActivityModifier

  // convertPoundsToKilograms

  // calculateGenderModifier

  // calculateGenderModifier

  // calculateCaloricGoal

  // caclulateMacroGoal


  // static method to instantiate User based on input.
  User User::createUser() {
    int weight;
    int height;
    string weeklyActivity;
    int age;
    string goal;

    // To do abstract all stdin logic to main.
    // Single responsibility pattern
    // Business logic should be in user.
    // Seperating view(input and output)
    // feed input and ouput into user object
    //
    //
    // You could make setters in the main file and then handle validation logic in the object.
    // for example try setWeight, catch error
    //
    //
    // architecture is more similar to event based than mvp


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
    std::getline(std::cin, weeklyActivity);

    // Ask for goal
    std::cout << "Enter your goal (e.g., lose weight, gain muscle, maintain): ";
    std::getline(std::cin, goal);

    // Maybe add a display and ask if this is correct, if not they start again

    // Display the summary
    std::cout << "\n--- Health Information Summary ---\n";
    std::cout << "Weight: " << weight << " kg\n";
    std::cout << "Height: " << height << " cm\n";
    std::cout << "Age: " << age << " years\n";
    std::cout << "Weekly Activity Level: " << weeklyActivity << "\n";
    std::cout << "Goal: " << goal << "\n";

    return User(weight, height, weeklyActivity, age, goal);
  }

  // Display goals

#include "User.h"
#include <string>
#include <iostream>
#include <limits>

// TODO:
// - [ ] Abstract all std in & out to main.cpp class for now. (can refactor later).
// - [ ] Try and reduce double state.
// - [ ] Use setters to set data with try and catch logic in users
// - [ ] Handle all business logic in Users
// - [ ] Look up and Add single unit testing in cpp for this app.
// - [ ] Look up and see if there is a way to export results to a excel spread.


int main()
{
  int weight;
  int height;
  int age;
  int gender;
  int weeklyActivity;
  int goal;

  User user = User::createUser();

  std::cout << "Welcome to the MacroCalculator, please answer the following questions to recieve your macro goals!";

  // Ask for weight
  std::cout << "Enter weight (in lbs): ";
  std::cin >> weight;
  user.setWeight(weight);
  std::cout << "Your Entered Weight:" << user.getWeight() << std::endl;

  // Ask for height
  std::cout << "Enter your height (in inches): ";
  std::cin >> height;
  user.setHeight(height);
  std::cout << "Your Entered Height:" << user.getHeight() << std::endl;

  // Ask for age
  std::cout << "Enter your age: ";
  std::cin >> age;
  user.setAge(age);
  std::cout << "Your Entered Age:" << user.getAge() << std::endl;

  // Ask for weekly activity level
  std::cout << "Enter your weekly activity level (e.g., sedentary, moderate, active): ";
  std::cin >> weeklyActivity;
  user.setWeeklyActivity(weeklyActivity);
  std::cout << "Your Entered Height:" << user.getWeeklyActivity() << std::endl;

  // Enter your gender
  std::cout << "Enter your gender (e.g., male): ";
  std::cin >> gender;
  user.setGender(gender);
  std::cout << "Your Entered Gender:" << user.getGender() << std::endl;

  // Ask for goal
  std::cout << "Enter your goal (e.g., lose weight, gain muscle, maintain): ";
  std::cin >> goal;
  user.setGoal(goal);
  std::cout << "Your Entered Goal:" << user.getGoal() << std::endl;

  // Maybe add a display and ask if this is correct, if not they start again

  // Display the summary
  std::cout << "\n--- Health Information Summary ---\n";
  std::cout << "Weight: " << user.getWeight() << " kg\n";
  std::cout << "Height: " << user.getHeight() << " cm\n";
  std::cout << "Age: " << user.getAge() << " years\n";
  std::cout << "Weekly Activity Level: " << user.getWeeklyActivity() << "\n";
  std::cout << "Goal: " << user.getGoal() << "\n";

  return 0;
}

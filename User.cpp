#include "User.h"
#include <string>
#include <iostream>
#include <limits>

  // Private Constructor
  User::User(int weight, int height, int weeklyActivity, int age,  int goal) : weight(weight), height(height), weeklyActivity(weeklyActivity), age(age), goal(goal) {}

  // caclulateActivityModifier

  // convertPoundsToKilograms

  // calculateGenderModifier

  // calculateGenderModifier

  // calculateCaloricGoal

  // caclulateMacroGoal

  // public method to state abeek;
  void User::abeek() const {
    std::cout << "Abeek\n";
  }

  // public method to set weight


  // public method to display weight

  // static method to instantiate User based on input.
  User User::createUser() {
    int weight;
    int height;
    int weeklyActivity;
    int age;
    int goal;

    return User(weight, height, weeklyActivity, age, goal);
  }

  // Display goals

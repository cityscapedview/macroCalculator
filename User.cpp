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

  // Public method to set private variable.
  void User::setPrivateVariable(string privateVariable, int userInput) {
    privateVariable = userInput;
  }

  // Public method to set private weight value.
  void User::setWeight(int userInput) {
    weight = userInput;
  }

  // Public method to set private height value.
  void User::setHeight(int userInput) {
    height = userInput;
  }

  // Public method to set private weekly activity value.
  void User::setWeeklyActivity(int userInput) {
    height = userInput;
  }
  // Public method to set private age value.
  void User::setAge(int userInput) {
    height = userInput;
  }

  // Public method to set goal value.
  void User::setGoal(int userInput) {
    height = userInput;
  }

  // Public method to get private variable value.
  int User::getPrivateVariable(string privateVariable) {
    return weight;
  }

  // Public method to get private weight value.
  int User::getWeight() {
    return weight;
  }

  // Public method to get private height value.
  int User::getHeight() {
    return weight;
  }

  // Public method to get private weekly activity value.
  int User::getWeeklyActivity() {
    return weight;
  }

  // Public method to get private age value.
  int User::getAge() {
    return weight;
  }

  // Public method to get private goal value.
  int User::getGoal() {
    return weight;
  }

  // Static method to instantiate user based on input.
  User User::createUser() {
    int weight;
    int height;
    int weeklyActivity;
    int age;
    int goal;

    return User(weight, height, weeklyActivity, age, goal);
  }

  // Display goals

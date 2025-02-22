#include "User.h"
#include <string>
#include <iostream>
#include <limits>
#include <cmath>

  // Private Constructor
  User::User(int weight, int height, int weeklyActivity, int age, int gender, int goal, int protein, int carbs, int fat, int calories) : weight(weight), height(height), weeklyActivity(weeklyActivity), age(age), gender(gender), goal(goal), protein(protein), carbs(carbs), fat(fat), calories(calories) {}

  // Private method that calculates activity coefficient.
  int User::calculateActivityCoefficient(int weeklyActivity) {
    switch (weeklyActivity) {
      // sedentary
      case 1:
        return 1.2;
      // light activity
      case 2:
        return 1.375;
      // moderate activity
      case 3:
        return 1.55;
      // very active
      case 4:
        return 1.725;
    }
  }

  // Private method that converts pounds to kilograms.
  int User::convertPoundsToKilograms(int pounds) {
    return pounds / 2.205;
  }

  // Private method that converts inches to centimeters.
  int User::convertInchesToCentimeters(int inches) {
    return inches * 2.54;
  }

  // Private method that calculates gender coefficient.
  int User::calculateGenderCoefficient(int gender) {
    switch (gender) {
      // male
      case 1:
        return 5;
      // female
      case 2:
        return -161;
    }
  }

  // Private method that calculates goal coefficient.
  int User::calculateGoalCoefficient(int goal) {
    switch (goal) {
      // gain
      case 1:
        return 1.15;
      // maintain
      case 2:
        return 1;
      // cut
      case 3:
        return .8;
    }
  }

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

  // Public Method that calculates user's caloric goal.
  void User::calculateCaloricGoal() {
    int userWeight = convertPoundsToKilograms(weight);
    int userHeight = convertInchesToCentimeters(height);
    int genderCoefficient = calculateGenderCoefficient(gender);
    int activityCoefficient = calculateActivityCoefficient(weeklyActivity);
    int goalCoefficient = calculateGoalCoefficient(goal);

    calories = std::round((((10 * userWeight + 6.25 * userHeight -5 * age + genderCoefficient) * activityCoefficient)) * goalCoefficient);
  }

  // Public Method to calculate and set private variables: protein, fat, and carbs;
  void User::calculateMacros() {
    protein = std::round(weight);
    fat = std::round(weight * 0.4);
    carbs = std::round((protein * 4 + fat * 9) / 4);
  }

  // Static method to instantiate user based on input.
  User User::createUser() {
    int weight;
    int height;
    int weeklyActivity;
    int age;
    int goal;
    int gender;
    int protein;
    int carbs;
    int fat;
    int calories;

    return User(weight, height, weeklyActivity, age, gender, goal, protein, carbs, fat, calories);
  }

  // Display goals

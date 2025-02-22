#ifndef USER_H
#define USER_H

#include <string>
using namespace std;

class User {
private:
  // Private member variables
  int weight;
  int height;
  int weeklyActivity;
  int age;
  int gender;
  int goal;
  int protein;
  int carbs;
  int fat;
  int calories;

  // Private construcor
  User(int weight, int height, int weeklyActivity, int age, int gender, int goal, int protein, int carbs, int fat, int calories);


  // Private method that calculates activity coefficient.
  int calculateActivityCoefficient(int weeklyActivity);

  // Private method that converts pounds to kilograms.
  int convertPoundsToKilograms(int pounds);

  // Private method that converts inches to centimeters.
  int convertInchesToCentimeters(int inches);

  // Private method that calculates gender coefficient.
  int calculateGenderCoefficient(int gender);

  // Private method that calculates goal coefficient.
  int calculateGoalCoefficient(int goal);

public:
  // Static method to instantiate user based on input.
  static User createUser();

  // Public method to set private variable.
  void setPrivateVariable(string privateVariable, int userInput);

  // Public method to set private weight value.
  void setWeight(int userInput);

  // Public method to set private height value.
  void setHeight(int userInput);

  // Public method to set private weekly activity value.
  void setWeeklyActivity(int userInput);

  // Public method to set private age value.
  void setAge(int userInput);

  // Public method to set goal value.
  void setGoal(int userInput);

  // Public method to get private variable value.
  int getPrivateVariable(string privateVariable);

  // Public method to get private weight value.
  int getWeight();

  // Public method to get private height value.
  int getHeight();

  // Public method to get private weekly activity value.
  int getWeeklyActivity();

  // Public method to get private age value.
  int getAge();

  // Public method to get private goal value.
  int getGoal();

  void calculateCaloricGoal();

  void calculateMacros();

};

#endif // USER_H

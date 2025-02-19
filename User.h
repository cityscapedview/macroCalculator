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
  int goal;
  int protein;
  int carbs;
  int fat;
  int calories;

  // Private construcor
  User(int weight, int height, int weeklyActivity, int age,  int goal);


public:
  // Static method to instantiate user based on input.
  static User createUser();

  // Public method to set private variable.
  void setPrivateVariable(string privateVariable, int userInput);

  // Public method to get private variable value.
  int getPrivateVariable(string privateVariable);

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

};

#endif // USER_H

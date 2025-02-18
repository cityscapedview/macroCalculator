#ifndef USER_H
#define USER_H

#include <string>
using namespace std;

class User {
private:
  // private member variables
  int weight;
  int height;
  string weeklyActivity;
  int age;
  string goal;
  int protein;
  int carbs;
  int fat;
  int calories;

  // Private construcor
  User(int weight, int height, string weeklyActivity, int age,  string goal);


public:
  static User createUser();

};

#endif // USER_H

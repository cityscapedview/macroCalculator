#ifndef USER_H
#define USER_H

class User {
private:
  // private member variables
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
  static User createUser();

};

#endif // USER_H

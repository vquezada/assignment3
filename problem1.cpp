
//Problem 1: Create a class called Pet with all the
//necessary files (.h , .cpp, etc.) This class should have
//member variables name (string), age (int),
//type ([‘dog’, ‘cat’]) (string) and weight (double).
//Make sure to include the appropriate accessor (getters),
//mutator (setters). Once the Pet class has been implemented,
//create two instances of Pet and print their details to console
//output.

#include <iostream>
#include <string>
using namespace std;


class Pet { //class pet

public:   //characteristics of pet
  void setName(string petName);
  void setAge(int petAge);
  void setWeight(double petWeight);
  void Print();
  void setPetType(string petType);
private:
  string name;
  int age;
  double weight;
  string type;
};
// remaning the varibles to call later in the code
void Pet::setPetType(string petType){
  type = petType;
}
void Pet::setName(string petName){
  name = petName;
}
void Pet::setAge(int petAge){
  age = petAge;
}
void Pet::setWeight(double petWeight){
  weight = petWeight;
}
void Pet::Print(){
  cout << "Type: " << type << endl << "Name: " << name << endl << "Age: " << age << endl << "Weight: " << weight << endl;
}

int main(){
//my pets
  Pet dog;
  Pet cat;
// Dog pet with characteristics
  dog.setPetType("Dog");
  dog.setName("Paco");
  dog.setAge(2);
  dog.setWeight(40.0);

// Cat pet with characteristics
  cat.setPetType("Cat");
  cat.setName("Catty");
  cat.setAge(5);
  cat.setWeight(30.1);
// print statement for the 2 pets
  cout << "Your pets are " << endl;
// final call of cat and dog to print
  dog.Print();
  cat.Print();

  return 0;

}

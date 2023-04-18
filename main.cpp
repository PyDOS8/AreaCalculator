#include <iostream>
using namespace std;
int main(){
  int area;
  printf("What type of Area do you want to do? Square(1) Circle(2) Triangle(3) Perimeter(4) ");
  cin >> area;
  if(area == 1){
    float length;
    float width;
    printf("What is the length of the square? circle(2) ");
    cin >> length;
    printf("What is the width of the square? ");
    float calc = length*width;
    cout << "The area is " << calc << "cm" << endl;
    main();
  }
  if(area == 2){
    float radius;
    printf("What is the radius of the circle? ");
    cin >> radius;
    float calc = 3.14*radius*2;
    cout << "The area is " << calc << endl;
    main();
  }
  if(area == 3){
    float base;
    float height;
    printf("What is the base? ");
    cin >> base;
    printf("What is the height? ");
    float calc = base*height/2;
    cout << "The area is " << calc << "cm/in/ft" << endl;
    main();
  }
  if(area == 4){
    int amount;
    printf("Enter an amount 4-14> ");
    cin >> amount;
    if(amount == 3){
      float one;
      float two;
      float three;
      printf("Enter the first side ");
      cin >> one;
      printf("Enter the second side ");
      cin >> two;
      printf("Enter the third side ");
      cin >> three;
      float result = one+two+three;
      cout << "The perimeter is " << result  << " cm/in/ft" << endl;
      main();
    }
    if(amount == 4){
      float one;
      float two;
      float three;
      float four;
      printf("Enter the first side ");
      cin >> one;
      printf("Enter the second side ");
      cin >> two;
      printf("Enter the third side ");
      cin >> three;
      printf("Enter the fourth side ");
      cin >> four;
      float result = one+two+three+four;
      cout << "The perimeter is " << result << " cm/mm/m/ft/in" << endl;
      main();
    }
    if(amount == 5){
      float one;
      float two;
      float three;
      float four;
      float five;
      printf("Enter the first side "); 
      cin >> one;
      printf("Enter the second side ");
      cin >> two;
      printf("Enter the third side ");
      cin >> three;
      printf("Enter the fourth side ");
      cin >> four;
      printf("Enter the fifth side ");
      cin >> five;
      float result = one+two+three+four+five;
      cout << "The perimeter is " << result << "cm/mm/m/ft/in" << endl;
      main();
    }
  }
}
      

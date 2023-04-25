#include <iostream>
using namespace std;
int main(){
  int area;
  printf("What type of Area do you want to do? Square(1) Circle(2) Triangle(3) Perimeter(4) ");
  cin >> area;
  if(area == 1){
    float length;
    float width;
    printf("What is the length of the square? ");
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
    float calc = 3.14*radius*radius;
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
    cout << "The area is " << calc << "cm/in/ft/mm" << endl;
    main();
  }
  if(area == 4){
    int amount;
    printf("Enter an amount 3-13> ");
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
    if(amount == 6){
      float one;
      float two;
      float three;
      float four;
      float five;
      float six;
      printf("Enter the first side ");
      cin >> one;
      printf("Enter the second side ");
      cin >> two;
      printf("Enter the third side ");
      cin >> three;
      printf("Enter the fourth side ");
      cin >> four;
      printf("Enter your fifth mark ");
      cin >> five;
      printf("Enter your sixth mark ");
      cin >> six;
      float result = one+two+three+four+five+six;
      cout << "The perimeter is " << result << "cm/mm/ft/in/m " << endl;
      main();
    }
    if(amount == 7){
      float one;
      float two;
      float three;
      float four;
      float five;
      float six;
      float seven;
      printf("Enter the first side ");
      cin >> one;
      printf("Enter the second side ");
      cin >> two;
      printf("Enter the third side ");
      cin >> three;
      printf("Enter the fourth side ");
      cin >> four;
      printf("Enter the fifth side > ");
      cin >> five;
      printf("Enter the sixth side ");
      cin >> six;
      printf("Enter the seventh side ");
      cin >> seven;
      int result = one+two+three+four+five+six+seven;
      cout << "The perimeter " << result << "in/mm/m/cm/ft" << endl;
      main();
    }
    if(amount == 8){
      float one;
      float two;
      float three;
      float four;
      float five;
      float six;
      float seven;
      float eight;
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
      printf("Enter the sixth side ");
      cin >> six;
      printf("Enter the seventh side ");
      cin >> seven;
      printf("Enter the eighth side ");
      cin >> eight;
      int result = one+two+three+four+five+six+seven+eight;
      cout << "The perimeter is " << result << "in/cm/ft/mm/m" << endl;
      main();
    }
  }
}
      

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
    int calc = length*width;
    cout << "The area is " << calc << "cm";
  }
  if(area == 2){
    float radius;
    printf("What is the radius of the circle? ");
    cin >> radius;
    float calc = 3.14*radius*2;
    cout << "The area is " << calc;
  }
  if(area == 3){
    float base;
    float height;
    printf("What is the base? ");
    cin >>> base;
    printf("What is the height? ");
    float calc = base*height/2;
    cout << "The area is " << calc << "cm";
  }
  if(area == 4){
    int amount;
    printf("Enter an amount 4-14> ");
    cin >> amount;
  }
}

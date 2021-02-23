#include <iostream>
#include <iomanip> 
using namespace std;

int main() {

  int calculation_type;
  double radius, length, width, base, height;
  double area_c, area_r, area_t;

  cout << "Enter calculation type (must be 1-4): ";
  cin >> calculation_type;

  if (calculation_type == 1) {
    cout << "Enter radius: ";
    cin >> radius;

    if (radius < 0) {
      cout << "Input error!";
    }

    area_c = (radius * radius) * 3.14159;
    cout << setprecision(2) << fixed;
    cout << "Area of circle: " << area_c << "\n";

  }

  else if (calculation_type == 2) {
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter width: ";
    cin >> width; 

    if (length < 0 || width < 0) {
      cout << "Input error!";
    }

    area_r = length * width;
    cout << setprecision(2) << fixed;
    cout << "Area of rectangle: " << area_r << "\n";

  }

  else if (calculation_type == 3 ) {
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter height: ";
    cin >> height; 

    if (base < 0 || height < 0) {
      cout << "Input error!";
    }

    area_t = (base * height) * .5;
    cout << setprecision(2) << fixed;
    cout << "Area of triangle: " << area_t << "\n";
    
  } 

  else if (calculation_type == 4) {
    cout << "Quit.\n";
  }

  else {
    if (calculation_type > 4 || calculation_type < 1) {
      cout << "Input error! Must be between 1-4.";
    }
  }

}
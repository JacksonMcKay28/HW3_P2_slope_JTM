#include <iostream>

using namespace std;

int main() {
  //initialize variables
  double m;
  double x1 = 2;
  double y1 = 3;
  double x2 = 2;
  double y2 = 4;

  //display points
  cout << "The coordinates for the first plot are (" << x1 << "," << y1 << ")." << endl;
  cout << "The coordinates for the second plot are (" << x2 << "," << y2 << ")." << endl;

  //calculate slope
  m = (y2 - y1)/(x2 - x1);

  //display slope results
  cout << "The slope of the line connecting the 2 points is y = " << m << "x." << endl;
}
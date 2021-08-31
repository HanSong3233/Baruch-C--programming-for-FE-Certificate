//Exercise 2: Pass by reference: make the Distance function pass by reference so no copy is made. 
#include "Point.hpp"
#include <iostream>
using namespace std;

//After we run the program, we find that the constrcutor and destructor only construct twice. which is less. 
//We find that we can not change the input of distance function. 

int main() 
{
	double x, y, x2,y2;//x and y is the x,y value of point p1.  x2,y2 is the x, y value of point p2.

	//request user to enter the value of x and y for p1. 
	cout << "Please enter the x of your point here: ";
	cin >> x;
	cout << "Please enter the y of your point here: ";
	cin >> y;
	
	//create a point object p1, set the x,y value enter by the user. 
	Point p1(x,y);
	cout << "Now we name this point as p1" << endl;
	
	//Print the description of the Point use Tostring Function
	cout << "The point your created, p1, is:" << p1.ToString() << endl;
	
	//print the distance of point p1 to origin. 
	cout << "The distance between p1 and origin is: " << p1.DistanceOrigin() << endl;

	//request user to enter the value of x and y coordinate for p2. 
	cout << "Please enter the x of another point you want to create here: ";
	cin >> x2;
	cout << "Please enter the y of another point here: ";
	cin >> y2;
	
	//create a point object p2, set the value of x and y as user enter.
	Point p2(x2,y2);
	cout << "Now we name this point as p2"<<endl;
	
	
	//Print the description of the Point use Tostring Function
	cout << "another point your created, p2, is:" << p2.ToString() << endl;
	cout << "the distance between p1 and p2 is: " << p1.Distance(p2) << endl;

	return 0;
}
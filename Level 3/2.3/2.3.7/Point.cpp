#include "Point.hpp"       //include the header file that contains the definition of point. 
#include <iostream>      // C++ style I/O
#include <sstream>		//C++ stream buffering
#include <cmath>
using namespace std;


Point::Point() : m_x(0), m_y(0)//default constructor, default value (0,0)
{
}

Point::Point(double x, double y) : m_x(x), m_y(y)//constructor with initial value (x,y). 
{
}

Point::Point(const Point& p): m_x(p.m_x), m_y(p.m_y)  //Copy constructor
{
}


Point::~Point()//destructor
{
}

string Point::ToString() const   //return the string description of the point. 
{
	stringstream ss;
	ss << "(" << m_x << ", " << m_y << ")";

	return ss.str();
}

double Point::Distance() const//return the distance of point to the origin 
{
	return std::sqrt(m_y*m_y+m_x*m_x);
}

double Point::Distance(const Point& p) const//return the distance of point to point, we make it call by reference in this problem. 
{
	return std::sqrt((p.m_x - m_x)*(p.m_x- m_x)+(p.m_y - m_y)*(p.m_y -m_y));
}
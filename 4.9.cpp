#include <iostream>
#include<cmath>
using namespace std;



class Point
{
public:
	Point(double xx ,double yy);
	~Point();
	double getX() { return x; }
	double getY() { return y; }
private:
	double x;
	double y;
};

Point::Point(double xx=0, double yy=0 )
{
	x = xx;
	y = yy;
}

Point::~Point()
{
}

class Rectangle
{
public:
	Rectangle(Point p1, Point p2);
	~Rectangle();
	
private:
	Point p1, p2;
	
};

Rectangle::Rectangle(Point p1,Point p2):p1(),p2()
{
	
}

Rectangle::~Rectangle()
{
}

int main() {
	double x1, x2, y1, y2;
	cout << "请输入右上角的坐标" << endl;
	cin >> x1 >> y1;
	cout << "请输入左下角的坐标" << endl;
	cin >> x2 >> y2;
	Point p1(x1, y1), p2(x2, y2);
	Rectangle r(p1, p2);
	double area;
	area = (p1.getX() - p2.getX()) * (p1.getY() - p2.getY());
	cout << "面积=" << abs(area);
	

}
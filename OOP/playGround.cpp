#include <iostream>
using namespace std;

// Base class
class Shape
{
	private:
	int length,width;
public:
   Shape()
   {
	   
   }
	Shape(int l, int w)
	{
		length = l;
		width = w;
	} // default constructor
	

};

// // Derived class
// class Square : public Shape
// {
// public:
// 	Square(int l = 0, int w = 0)
// 		: Shape(l, w)
// 	{
// 	} // declaring and initializing derived class
// 	// constructor
// 	int get_Area()
// 	{
// 		cout << "Square area: " << length * width << endl;
// 		return (length * width);
// 	}
// };
// // Derived class
// class Rectangle : public Shape
// {
// public:
// 	Rectangle(int l = 0, int w = 0)
// 		: Shape(l, w)
// 	{
// 	} // declaring and initializing derived class
// 	// constructor
// 	int get_AreaR()
// 	{
// 		cout << "Rectangle area: " << length * width
// 			<< endl;
// 		return (length * width);
// 	}
// };

int main(void)
{
	 Shape a[10];
	
    

	return 0;
}

#ifndef BOXTYPE_H
#define BOXTYPE_H

#include <iostream>

using namespace std;

class BoxType
{
	// TODO: Provide the prototype to overload the stream insertion operator here.
	// TODO: Provide the prototype to overload the stream extraction operator here.

public:
	BoxType();
	BoxType(double, double, double);
	void setLength(double);
	void setWidth(double);
	void setHeight(double);

	// TODO: Provide the prototype to overload the addition operator here.
	// TODO: Provide the prototype to overload the subtraction operator here.
	// TODO: Provide the prototype to overload the multiplication operator here.
	// TODO: Provide the prototype to overload the division operator here.

	// TODO: Provide the prototype to overload the greater than operator here.
	// TODO: Provide the prototype to overload the less than operator here.
	// TODO: Provide the prototype to overload the equality operator here.
	// TODO: Provide the prototype to overload the not-equal-to operator here.

	// TODO: Provide the prototype to overload the pre-increment operator here.
	// TODO: Provide the prototype to overload the post-increment operator here.
	// TODO: Provide the prototype to overload the pre-decrement operator here.
	// TODO: Provide the prototype to overload the post-decrement operator here.

private:
	double length;
	double width;
	double height;
};

#endif // BOXTYPE_H
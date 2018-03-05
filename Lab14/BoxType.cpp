#ifndef BOXTYPE_CPP
#define BOXTYPE_CPP
#include "BoxType.h"

// Default Constructor
BoxType::BoxType()
{
	length = 0;
	width = 0;
	height = 0;
}

// Parameterized Constructor
BoxType::BoxType(double len, double wid, double hei)
{
	setLength(len);
	setWidth(wid);
	setHeight(hei);
}

void BoxType::setLength(double len)
{
	length = len;
}

void BoxType::setWidth(double wid)
{
	width = wid;
}

void BoxType::setHeight(double hei)
{
	width = hei;
}

// TODO: Implement the addition operator overload here.


// TODO: Implement the subtraction operator overload here.
// Remember that boxes cannot have negative dimensions.


// TODO: Implement the multiplication operator overload here.


// TODO: Implement the division operator overload here.
// Remember that division by zero is undefined.       


// TODO: Implement the greater than operator overload here.


// TODO: Implement the less than operator overload here.


// TODO: Implement the equality operator overload here.


// TODO: Implement the not-equal-to operator overload here.


// TODO: Implement the post-increment operator overload here.


// TODO: Implement the pre-increment operator overload here.


// TODO: Implement the post-decrement operator overload here.


// TODO: Implement the pre-decrement operator overload here.


// TODO: Implement the stream insertion operator overload here.


// TODO: Implement the stream extraction operator overload here.


#endif // !BOXTYPE_CPP
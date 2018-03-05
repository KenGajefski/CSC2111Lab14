#ifndef BOXTYPE_H
#define BOXTYPE_H

#include <iostream>

using namespace std;

class BoxType
{
	// TODO: Provide the prototype to overload the stream extraction operator here.
	friend ostream& operator<<(ostream&, const BoxType&);
	// TODO: Provide the prototype to overload the stream insertion operator here.
	friend istream& operator>>(istream&, BoxType&);

public:
	BoxType();
	BoxType(double, double, double);
	void setLength(double);
	void setWidth(double);
	void setHeight(double);

	// TODO: Provide the prototype to overload the addition operator here.
	BoxType operator+(const BoxType&);
	// TODO: Provide the prototype to overload the subtraction operator here.
	BoxType operator-();
	// TODO: Provide the prototype to overload the multiplication operator here.
	BoxType operator*();
	// TODO: Provide the prototype to overload the division operator here.
	BoxType operator/(const BoxType&);

	// TODO: Provide the prototype to overload the greater than operator here.
	bool operator>(const BoxType&);
	// TODO: Provide the prototype to overload the less than operator here.
	bool operator<(const BoxType&);
	// TODO: Provide the prototype to overload the equality operator here.
	bool operator==(const BoxType&);
	// TODO: Provide the prototype to overload the not-equal-to operator here.
	bool operator!=(const BoxType&);

	// TODO: Provide the prototype to overload the pre-increment operator here.
	BoxType operator++();
	// TODO: Provide the prototype to overload the post-increment operator here.
	BoxType operator++(int);
	// TODO: Provide the prototype to overload the pre-decrement operator here.
	BoxType operator--();
	// TODO: Provide the prototype to overload the post-decrement operator here.
	BoxType operator--(int);

private:
	double length;
	double width;
	double height;
};

#endif // BOXTYPE_H
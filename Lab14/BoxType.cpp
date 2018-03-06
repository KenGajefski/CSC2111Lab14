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
BoxType BoxType::operator+(const BoxType& param) const {
	BoxType temp;

	temp.length = length + param.length;
	temp.width = width + param.width;
	temp.height = height + param.height;

	return temp;
}

// TODO: Implement the subtraction operator overload here.
// Remember that boxes cannot have negative dimensions.
BoxType BoxType::operator-(const BoxType& param) const {
	BoxType temp;

	if ((length - param.length) < 0)
		temp.length = 0;
	else
		temp.length = length - param.length;

	if ((width - param.width) < 0)
		temp.width = 0;
	else
		temp.width = width - param.width;

	if ((height - param.height) < 0)
		temp.height = 0;
	else
		temp.height = height - param.height;

	return temp;
}

// TODO: Implement the multiplication operator overload here.
BoxType BoxType::operator*(const BoxType& param) const {
	BoxType temp;

	temp.length = length * param.length;
	temp.width = width * param.width;
	temp.height = height * param.height;

	return temp;
}

// TODO: Implement the division operator overload here.
// Remember that division by zero is undefined.       
BoxType BoxType::operator/(const BoxType& param) const {
	BoxType temp;

	temp.length = length / param.length;
	temp.width = width / param.width;
	temp.height = height / param.height;

	return temp;
}

// TODO: Implement the greater than operator overload here.
bool BoxType::operator>(const BoxType& param) const {
	return ((length + width + height) > (param.length + param.width + param.height));
}

// TODO: Implement the less than operator overload here.
bool BoxType::operator<(const BoxType& param) const {
	return ((length + width + height) < (param.length + param.width + param.height));
}

// TODO: Implement the equality operator overload here.
bool BoxType::operator==(const BoxType& param) const {
	return ((length + width + height) == (param.length + param.width + param.height));
}

// TODO: Implement the not-equal-to operator overload here.
bool BoxType::operator!=(const BoxType& param) const {
	return ((length + width + height) != (param.length + param.width + param.height));
}

// TODO: Implement the post-increment operator overload here.
BoxType BoxType::operator++(int n) {
	BoxType temp(length, width, height);

	temp.length += 1;
	temp.width += 1;
	temp.height += 1;

	return temp;
}

// TODO: Implement the pre-increment operator overload here.
BoxType BoxType::operator++() {
	length++;
	width++;
	height++;

	return *this;
}

// TODO: Implement the post-decrement operator overload here.
BoxType BoxType::operator--(int n) {
	BoxType temp(length, width, height);

	if (length == 0)
		length = 0;
	else
		length--;

	if (width == 0)
		width = 0;
	else
		width--;

	if (height == 0)
		height = 0;
	else
		height--;

	return temp;
}

// TODO: Implement the pre-decrement operator overload here.
BoxType BoxType::operator--() {
	if (length == 0)
		length = 0;
	else
		length--;

	if (width == 0)
		width = 0;
	else
		width--;

	if (height == 0)
		height = 0;
	else
		height--;

	return *this;
}

// TODO: Implement the stream insertion operator overload here.
istream& operator>>(istream &obj, BoxType& param) {
	obj >> param.length >> param.width >> param.height;

	return obj;
}

// TODO: Implement the stream extraction operator overload here.
ostream& operator<<(ostream& obj, const BoxType& param) {
	obj << param.length << " " << param.width << " " << param.height << endl;

	return obj;
}

#endif // !BOXTYPE_CPP
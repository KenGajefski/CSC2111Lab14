#include "BoxType.h"

int main()
{
	BoxType box1;
	BoxType box2;

	cout << "Space separated, enter the length, width, and height of box1: ";
	cin >> box1;
	cout << "cout << box1;\n";
	cout << box1;

	cout << "Space separated, enter the length, width, and height of box2: ";
	cin >> box2;
	cout << "cout << box2;\n";
	cout << box2;

	cout << "box1 + box2;\n";
	cout << box1 + box2;
	cout << "cout << box1 - box2;\n";
	cout << box1 - box2;
	cout << "cout << box1 * box2;\n";
	cout << box1 * box2;
	cout << "cout << box1 / box2;\n";
	cout << box1 / box2;

	if (box1 > box2)
		cout << "box1 > box2" << endl;
	if (box1 < box2)
		cout << "box1 < box2" << endl;
	if (box1 == box2)
		cout << "box1 == box2" << endl;
	if (box1 != box2)
		cout << "box1 != box2" << endl;

	cout << "cout << ++box1;\n";
	cout << ++box1;
	cout << "cout << --box2;\n";
	cout << --box2;

	BoxType box3 = box2++;
	cout << "BoxType box3 = box2++;" << endl;
	cout << "cout << box3;\n";
	cout << box3;
	cout << "cout << box2;\n";
	cout << box2;

	return 0;
}
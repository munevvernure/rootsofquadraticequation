//Write the program that finds the roots of a quadratic equation
//where the equation coefficients are entered from the keyboard

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int a, b, c;
	double root1, root2, delta;
	cout << "Type the coefficients of the quadratic equation:" << endl;
	cout << "a:"; cin >> a;
	cout << "b:"; cin >> b;
	cout << "c:"; cin >> c;
	cout << endl;

	delta = (b * b) - (4 * a * c);
	if (delta > 0)
	{
		root1 = (-b + sqrt(delta)) / (2 * a);
		root2 = (-b - sqrt(delta)) / (2 * a);

		cout << "Root 1 = " << root1 << endl;
		cout << "Root 2 = " << root2 << endl;
	}
	else if (delta == 0)
	{
		root1 = -b / (2 * a);
		root2 = -b / (2 * a);

		cout << "Root 1 : " << root1 << endl;
		cout << "Root 2  :" << root2 << endl;
	}
	else
		cout << "There is not reel roots.";
	return 0;
}  

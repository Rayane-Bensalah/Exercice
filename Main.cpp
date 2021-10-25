#include <iostream>

using namespace std;

int main()
{
	float operation(float, float, char);
	float x;
	float y;

	cout << "entrez deux valeurs" << endl;
	cin >> x >> y;

	cout << "Leur somme est :    " << operation(x, y, '+');
	cout << "Leur différence est " << operation(x, y, '-');
	cout << "Leur produit est    " << operation(x, y, '*');
	cout << "Leur quotient est   " << operation(x, y, '/');

	return 0;
}

float operation(float x1, float x2, char op)
{
	float res;

	switch (op)
	{
	case '+': res = x1 + x2;
		break;
	case '-': res = x1 - x2;
		break;
	case '/': res = x1 / x2;
		break;
	case '*': res = x1 * x2;
		break;

		return res;
	}
}

#include <iostream>

using namespace std;

struct Coin
{
	int val, freq = 0;
	Coin()
	{
		this->val = -1;
	}
	Coin(int v)
	{
		this->val = v;
	}
};

void Rep2El(int z[], int n)
{
	Coin coins[n];
	int i = 0, j = 0, k = 0;

	// Calc & Output section
	cout << "\n\n";
	for (int k = 0; k < 100; cout << "=", k++)
		;

	cout << "\n\nElements Repeated: ";
	for (; i < n; i++)
	{
		for (j = 0; j < k; j++)
			if (coins[j].val == z[i])
			{
				coins[j].freq++;
				cout << coins[j].val << " ";
				break;
			}

		if (j == k)
		{
			coins[k].val = z[i];
			coins[k].freq = 1;
			k++;
		}
	}

	cout << "\n\n";
	for (int k = 0; k < 100; cout << "=", k++)
		;
}

int main()
{
	int n, i = 0;
	cout << "\nEnter the no. of elements: ";
	cin >> n;

	int z[n];
	cout << "\n\nEnter the elements:\n";
	for (; i < n; cin >> z[i++])
		;

	Rep2El(z, n);

	return 0;
}
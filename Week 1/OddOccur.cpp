#include <iostream>

using namespace std;

struct Coin
{
	int val, freq=0;
	Coin()
	{
		this->val = -1;
	}
	Coin(int v)
	{
		this->val = v;
	}
};

void OddOccur(int z[], int n)
{
	Coin coins[n];
	int i=0, j=0, k=0;

	// Calc section:: Time: O(n^2+n{final}), space: O(2n)
	for (; i < n; i++)
	{
		for (j = 0; j < n; j++)
			if (k && coins[j].val == z[i])
				coins[j].freq++;
		
		if (j > k)
		{
			coins[++k].val = z[i];
			coins[k].freq++;
		}		
	}

	// Output section
	cout << "\n\n";
	for (int k = 0; k < 100; cout << "=", k++)
		;

	for (i = 0; i < k; i++)
		if (coins[i].freq % 2 != 0)
			cout << coins[i].val;

	cout << endl;
	for (int k = 0; k < 100; cout << "=", k++)
		;
}

int main()
{
    int n, i=0;
	cout << "\nEnter the no. of elements: ";
	cin >> n;

	int z[n];
	cout << "\n\nEnter the elements:\n";
	for (; i < n; cin>>z[i++]);

	OddOccur(z, n);

    return 0;
}
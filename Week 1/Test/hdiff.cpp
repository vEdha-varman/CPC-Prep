#include <iostream>
using namespace std;

void InSort(int Z[], int n)
{
	for (int i = 1, j, temp; i < n; i++)
	{
		temp = Z[i];
		for (j = i - 1; j >= 0 && temp < Z[j]; j--)
			Z[j + 1] = Z[j];
		Z[j + 1] = temp;
		// for(j=0;j<n;j++)
		//     cout<<Z[j]<<' ';
		// cout<<endl;
	}
}

int Loss(int z[], int n, int m)
{
	InSort(z, n);
	int min = z[m - 1] - z[0];

	for (int i = 1; i < n - m; i++)
	{
		cout << z[i + m - 1] << "-" << z[i] << ":";
		if (min > z[i + m - 1] - z[i])
		{
			min = z[i + m - 1] - z[i];
		}
	}
	return min;
}

int main()
{
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int n, m;
	cin >> n >> m;
	int z[n];
	for (int i = 0; i < n; i++)
		cin >> z[i];

	cout << Loss(z, m, n);

	return 0;
}

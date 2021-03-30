#include <iostream>

#define SIZE 10

using namespace std;

void Union_Intersection_SortedArrays(int z1[], int m, int z2[], int n)
{
	int Union[2 * SIZE], Intersection[SIZE];
	int i, j, x, y;
	i = j = x = y = 0;

	// Calc section

	while (i < m && j < n)
	{
		if (z1[i] == z2[j])
		{
			Intersection[y++] = z1[i];
			Union[x++] = z2[j];

			i++;
			j++;
		}
		else if (z1[i] < z2[j])
		{
			Union[x++] = z1[i];
			i++;
		}
		else
		{
			Union[x++] = z2[j];
			j++;
		}
	}
	while (j < n)
		Union[x++] = z2[j++];
	while (i < m)
		Union[x++] = z1[i++];

	// Output section
	cout << "\n\n";
	for (int k = 0; k < 100; cout << "=", k++)
		;

	cout << "\n\nUnion: ";
	for (i = 0; i < x; cout << Union[i] << " ", i++)
		;
	cout << "\n\nIntersection: ";
	for (j = 0; j < y; cout << Intersection[j] << " ", j++)
		;

	cout << "\n\n";
	for (int k = 0; k < 100; cout << "=", k++)
		;
}

int main()
{
	int m, n, i = 0;
	cout << "\nEnter the sizes of sorted arrays: ";
	cin >> m >> n;

	int z1[m], z2[n];

	cout << "\n\nEnter the values in 1st sorted array:\n";
	for (; i < m; cin >> z1[i++])
		;
	cout << "\n\nEnter the values in 2nd sorted array:\n";
	for (i = 0; i < n; cin >> z2[i++])
		;

	Union_Intersection_SortedArrays(z1, m, z2, n);

	return 0;
}
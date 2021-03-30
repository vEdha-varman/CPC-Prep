#include <iostream>
#include <vector>

using namespace std;

void Union_Intersection_SortedArrays(int z1[], int m, int z2[], int n)
{
	vector<int> Union, Intersection;
	int i=0, j=0;

	while (i<m && j<n)
	{
		if (z1[i] == z2[j])
		{
			Intersection.push_back(z1[i]);
			Union.push_back(z2[j]);

			i++;j++;
		}
		else if (z1[i] < z2[j])
		{
			Union.push_back(z1[i]);
			i++;
		}
		else
		{
			Union.push_back(z2[j]);
			j++;
		}
	}
	while (j<n)
		Union.push_back(z2[j++]);
	while (i<m)
		Union.push_back(z1[i++]);

	cout << "\n\n";
	for(int k=0; k<100; cout << "=", k++);

	cout << "\n\nUnion: ";
	for (int i = 0; i < Union.size(); i++)
	{
		cout << Union[i] << " ";
	}
	cout << "\n\nIntersection: ";
	for (int i = 0; i < Intersection.size(); i++)
	{
		cout << Intersection[i] << " ";
	}

	cout << "\n\n";
	for(int k=0; k<100; cout << "=", k++);

}

int main()
{
	int m, n, i=0;
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
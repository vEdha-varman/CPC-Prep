#include <iostream>

using namespace std;

/* Ways that I can think of:
 * One is blind brute force
 * another is Linked list deletions(complex yet as good as blind brute force only)
 *..
 * and a counting-sort-like method
*/

int missingNum(int z[], int n)
{
	int Freq[n], i = 0;
	for (; i < n; Freq[i] = 0, i++)
		;

	// Calc
	for (i = 0; i < n - 1; i++)
		Freq[z[i] - 1] += 1;

	// Return
	for (i = 0; i < n; i++)
		if (Freq[i] == 0)
			return i + 1;
	return -1;
}

int main()
{
	// Declarations
	int n, i = 0;
	cout << "\nEnter `n`: ";
	cin >> n;

	int z[n];
	cout << "\n\nEnter the elements:\n";
	for (; i < n - 1; cin >> z[i++])
		;

	// Output section
	cout << "\n\n";
	for (int k = 0; k < 100; cout << "=", k++)
		;

	cout << "\n\nMissing Element: "
		 << missingNum(z, n) << "\n\n";

	for (int k = 0; k < 100; cout << "=", k++)
		;

	return 0;
}
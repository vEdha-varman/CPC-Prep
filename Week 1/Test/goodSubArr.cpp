#include <iostream>
using namespace std;

int goodSubArr(int z[], int n, int m)
{
	int num=0, dp[n][n];
	for (int i = 0; i < n; dp[0][i]=z[i],i++)
		if (z[i] >= m)
			num++;

	// 
	for (int i = 1, j; i < n; i++)
	{
		
		for (j = 0; j < n-i; i++)
			dp[i][j] = dp[i-1][j] + z[j+1];
		
		if (dp[i][j] >= m)
			num++;
		
	}

	return num;
}

int main()
{
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	return 0;
}

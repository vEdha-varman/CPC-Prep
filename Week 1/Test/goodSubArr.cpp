#include <iostream>
using namespace std;

int goodSubArr(int z[], int n, long m)
{
    long num = 0, dp[n][n];
    for (int i = 0; i < n; dp[0][i] = z[i], i++)
        if (z[i] >= m)
            num++;

    //
    for (int i = 1, j; i < n; i++)
    {

        for (j = 0; j < n - i; j++)
        {
            dp[i][j] = dp[i - 1][j] + z[j + i];
            // cout << i << ":" << j << "::" << dp[i][j] << " ";
            if (dp[i][j] >= m)
                num++;
        }

        // cout << "\n";
    }

    return num;
}

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n; long m;
    cin>>n>>m;
    int z[n];
    for (int i = 0; i < n; cin>>z[i],i++);
    

    cout << goodSubArr(z, n, m);
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
const int N = 2000000;
int main()
{

    vector<bool> is_prime(N + 1, true);
    vector<int> prime;

    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i * i <= N; i++)
    {
        if (is_prime[i])
        {
            for (int j = i * i; j <= N; j += i)
            {
                is_prime[j] = false;
            }
        }
    }

    for (int i = 2; i <= N; i++)
    {
        if (is_prime[i])
        {
            prime.push_back(i);
        }
    }

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << prime[i] << " ";
    }
    cout << endl;
}
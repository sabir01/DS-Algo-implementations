#include <bits/stdc++.h>
#define vi vector<int>
#define pb push_back

using namespace std;

vi sieve(int n)
{
    vi prime;
    vector<bool> mark(n+1, true);
    int i, j;

    mark[0] = false;
    mark[1] = false;

    for(i = 2; i*i < n; i++)
    {
        for(j = 2*i; j <= n; j += i)
        {
            mark[j] = false;
        }
    }
    for(i = 2; i <= n; i++)
        if(mark[i])
            prime.pb(i);
    
    return prime;
}
int main()
{
    vector<int> prime = sieve(100);

    for(auto it: prime)
        cout << it << " ";
}
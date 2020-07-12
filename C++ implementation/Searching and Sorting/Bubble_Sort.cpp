/// In the name of Allah, Most Gracious, Most Merciful.
#include "bits/stdc++.h"
#define ll long long
#define ld long double
#define ull unsigned long long
#define vi vector<int>
#define vii vector<vector<int> >
#define vll vector<ll>
#define vlll vector<vector<ll> >
#define pb push_back
#define pii pair<int, int>
#define mp make_pair
#define gin(str) getline(cin, str)
#define ALL(v) v.begin(), v.end()
#define Reverse(v) reverse(ALL(v))
#define nl "\n"
#define spc " "
#define Fi first
#define Se second
#define MOD 1000000007
#define PI 2*acos(0.0)
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define bye return 0
#define NO printf("NO\n")
#define YES printf("YES\n")
#define FOR(n) for(int i = 0; i < n; i++)
#define iFOR(i, n) for(i = 0; i < n; i++)
#define rFOR(i, n) for(i = n - 1; i >= 0; i--)
#define REP(i, a, b) for(i = a; i <= b; i++)
using namespace std;

void bubbleSort(int arr[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; i < n - i - 1; j++)
        {
            if(arr[j+1] < arr[j])
            {
                swap(arr[j+1], arr[j]);
            }
        }
    }
}
int main()
{
    int arr[] = {6,5,3,2,1};
    bubbleSort(arr, 5);
    cout << "Hello World"; 
    for(auto it: arr)
    {
        cout << it << spc;
    }


    bye;
}
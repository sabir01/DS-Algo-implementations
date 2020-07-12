#include <bits/stdc++.h>
using namespace std;

bool is_prime(long long n)
{
    if(n == 1)  return false;
    if(n == 2)  return true;
    if(n % 2 == 0)  return false;
    for(int i = 3; i*i <= sqrt(n); i += 2)
        if(n % i == 0)  return false;
    return true;
}
int main()
{
    string s = is_prime(2)?"This is prime":"This is not prime";
    cout << s;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "123";
    int v = 0;
    for(int j = 0; j < s.size(); j++)
        v = v*10+(s[j]-'0');
    cout << v;

}
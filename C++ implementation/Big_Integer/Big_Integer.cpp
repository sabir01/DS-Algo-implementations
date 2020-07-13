#include <bits/stdc++.h>
using namespace std;
#define BigInt vector<int>
#define pb push_back
#define FOR(n)    for(int i = 0; i < n; i++)
#define REV(n)    for(int i = n; i >= 0; i--)
int base = 10;

void Set(BigInt &a)
{
    while (a.size() > 1 && a.back() == 0)
        a.pop_back();
}
void Print(BigInt a)
{
    Set(a);
    printf("%d", (a.size() == 0) ? 0 : a.back());
    for (int i = a.size() - 2; i >= 0; i--)
        printf("%d", a[i]); /// Check & varify ----------------> %d or %09d
    cout << "\n";
}
BigInt Integer(string s)
{
    BigInt ans;
    if (s[0] == '-')
        return ans;
    if (s.size() == 0)
    {
        ans.pb(0);
        return ans;
    }
    while (s.size() % 9 != 0)
        s = '0' + s;
    for (int i = 0; i < s.size(); i += 9)
    {
        string temp;
        temp = s.substr(i, 9);
        ans.insert(ans.begin(), stoi(temp));
    }
    Set(ans);
    return ans;
}
// BigInt Integer(char c[])
// {
//     Integer(string(c));
// }
BigInt Integer(long long n)
{
    return Integer(to_string(n));
}
// BigInt Integer(int n)
// {
//     return Integer(to_string(n));
// }
void operator >> (istream &in, BigInt &a)
{
    string s;
    getline(cin, s);
    a = Integer(s);
}
void operator << (ostream &out, BigInt a)
{
    Print(a);
}
bool operator < (BigInt a, BigInt b)
{
    if(a.size() != b.size())    return (a.size() < b.size());
    REV(a.size() - 1)
    {
        if(a[i] != b[i])    return (a[i] < b[i]);
    }
    return false;
}
bool operator > (BigInt a, BigInt b)
{
    return (b < a);
}
bool operator == (BigInt a, BigInt b)
{
    return (!(a<b) && !(b<a));
}
bool operator <= (BigInt a, BigInt b)
{
    return (a < b || a == b);
}
bool operator >= (BigInt a, BigInt b)
{
    return (a > b || a == b);
}

BigInt operator + (BigInt a, BigInt b)
{
    Set(a);
    Set(b);
    BigInt ans;
    int carry;
    FOR(max(a.size(), b.size()) - 1)
    {
        if(i < a.size())    carry += a[i];
        if(i < b.size())    carry += b[i];
        ans.pb(carry % base);
        carry /= base;
    }
    if(carry)   ans.pb(carry);
    return ans;
}
BigInt operator + (BigInt a, int b)
{
    return a + Integer(b);
}
BigInt operator ++ (BigInt &a)
{
    a = a + Integer(1);
}
BigInt operator += (BigInt &a, BigInt b)
{
    a = a + b;
}
BigInt operator += (BigInt &a, int b)
{
    a = a + Integer(b);
}
//  -- - / * % 

BigInt operator - (BigInt a, BigInt b)
{
    Set(a);
    Set(b);
    BigInt ans;
    int carry;
    
}
int main()
{
    BigInt a;
    char c[] = "1234";
    a = Integer(c);
    Print(a);
}
#include <bits/stdc++.h>
using namespace std;
#define BigInt vector<int>
#define pb push_back

void Set(BigInt &a)
{
    while (a.size() > 1 && a.back() == 0)
        a.pop_back();
}
void Print(BigInt a)
{
    Set(a);
    printf("%d", (a.size() == 0) ? 0 : a.back());
    for(int i = a.size() - 2; i >= 0; i--)  printf("%d", a[i]); /// Check & varify ----------------> %d or %09d
    cout << "\n";
}
BigInt Integer(string s)
{
    BigInt ans;
    if(s[0] == '-') return ans;
    if(s.size() == 0){  ans.pb(0); return ans;}
    while (s.size()%9 != 0) s = '0'+s;
    for(int i = 0; i < s.size(); i+=9)
    {
        string temp;
        temp = s.substr(i, 9);
        ans.insert(ans.begin(), stoi(temp));
    }
    Set(ans);
    return ans;
}
int main()
{
    BigInt a;
    a = Integer("12308250981429920384091238948210984091238409812309481209384");
    Print(a);

}
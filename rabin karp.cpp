#include <bits/stdc++.h>
using namespace std;

int Hash(string s)
{
    int i, j, h = 0;
    int len = s.size();

    for(i = 0; i < len; i++)
    {
        h = 33 * h + s[i];
    }
    return h;
}

int match(string str, string pat)
{
    int slen = str.size(), plen = pat.size(), i, j;
    int pHash = Hash(pat);
    string temp = str.substr(0, plen);
    int sHash = Hash(temp);
    int pos = -1;

    for(i = 0; i < slen - plen - 1; i++)
    {
        char ch = str[i];
        sHash = Hash(str.substr(i, plen));
        if(sHash == pHash)
        {
            temp = str.substr(i, plen);
            if(temp == pat)
            {
                pos = i;
                break;
            }
        }
    }

    return pos;
}
int main()
{
    string s = "bernstein hash is one of the best hash functions for rabin karp algorithm";
    string p = "best";

    cout << match(s,p);

    return 0;
}

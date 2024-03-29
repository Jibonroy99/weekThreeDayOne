
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
 
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
 
        string s, o, rs ="meow";
        cin >> s;
        for (char &c : s)
        {
            if (c >= 'A' && c <= 'Z')
            {
                c = c + 32;
            }
            if (o.empty() || o.back() != c)
            {
                o.push_back(c);
            }
        }
        if (rs == o)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
 
    return 0;
}
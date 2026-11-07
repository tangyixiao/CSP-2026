#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    int n,cnt =0;
    int l[200010];
    string s[200010];
    string s
    cin >>n;
    for(int i=1;i<=n;i++)
    {

        cin >> l[i] >> s[i];
    }
    for(int i=1;i<=n;i++)
    {
        if(l[i] == l[n+1-i])
        {
            if(s[i] != s[n+1-i])
            {
                cnt++;
            }

        }
        else
        {
            break;
        }
    }
    cnt = cnt/2;


    }
    return 0;
}

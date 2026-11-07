#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    int n;
    string s="";
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        int m;
        cin >> m;
        char a;
        cin >> a;
        for(int j=1;j<=m;j++)
        {

            s=s+a;
        }
    }
    long long l=0,sum=0;
    long long r=s.size()-1;
    while(l<=r)
    {
        if(s[l]==s[r])
        {
            l++;
            r--;
        }
        else
        {

            s[l]=s[r];
            sum++;
            l++;
            r--;
        }

    }
    cout << sum;
    return 0;

}

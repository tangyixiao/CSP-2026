#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    int n,a,b,cnt=0;
    char s;
    string s1;
    char b[100000];
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        cin>>s;
        b[i]=a*s;
        s1+=b[i];
    }
    int l=0;r=s1.size()-1;
    while(true)
    {
        if(s1[l]==s1[r])
        {
            l++;
            r--;
        }
        else{
            cnt++;
        }
        if(l==r)
        {
            break;
        }
    }
    cout<<cnt;
    return 0;
}

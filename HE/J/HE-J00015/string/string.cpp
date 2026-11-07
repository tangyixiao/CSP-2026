#include <bits/stdc++.h>
using namespace std;

int a[200010];
string s[200010];
int main () {
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    int n;
    cin>>n;
    char ch;
    for(int i = 1;i <= n;i++)
    {
        cin>>a[i]>>ch;
        s[i]+=ch;
    }
    int i = 1;
    int j = n;
    long long ret = 0;
    while(i<j)
    {
        while(s[i]!=s[j]&&i<j)
        {
            if(a[i]<a[j])
            {
                ret+=a[i];
                a[j]-=a[i];
                i++;
            }
            else if(a[i]==a[j])
            {
                ret+=a[i];
                i++;
                j--;
            }
            else
            {
                ret+=a[j];
                a[i]-=a[j];
                j--;
            }
        }
        while(s[i]==s[j]&&i<j)
        {
            if(a[i]<a[j])
            {
                a[j]-=a[i];
                i++;
            }
            else if(a[i]==a[j])
            {
                i++;
                j--;
            }
            else
            {
                a[i]-=a[j];
                j--;
            }
        }
    }
    printf("%lld",ret);
    return 0;
}

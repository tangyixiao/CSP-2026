#include<iostream>
#define int long long
using namespace std;

int n;
string s;
int cnt;

signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
    cin>>n;
    while(n--)
    {
        int x;
        char c;
        cin>>x>>c;
        while(x--)
        {
            s=s+c;
        }
    }
    int len=s.size();
    for(int i=0;i<len/2;i++)
    {
        if(s[i]!=s[len-i-1])
        {
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}
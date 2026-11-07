#include <bits/stdc++.h>
using namespace std;

int a[10000];
char s[100005];
int main()
{
	
	freopen("string.in ","r",stdin);
	freopen("string.out ","w",stdout);
    int n;
    cin>>n;
    if(n==1)
    {
    	cout<<0;
    	return 0;
	}
    for(int i=1;i<=n;i++)
    {
    	cin>>a[i]>>s[i];
	}
	int suu=1;
	for(int i=1;i<=n;i++)
    {
    	if(s[i]!=s[n-i+1])
    	{
    	  suu=0;
    	  break;
		}
    }
    if(suu==1)
    {
    	cout<<0;
    	return 0;
	}
	
}
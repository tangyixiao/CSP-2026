#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    long long n;
    cin>>n;
    string s="?";
    for(long long i = 1;i <= n;i++)
    {
    	long long o;
    	char c;
    	cin>>o>>c;
    	while(o--)s+=c;
	}
	long long i=1,j=s.length()-1;
	long long ans=0;
	while(i<j)
	{
		if(s[i]!=s[j])ans++;
		i++;j--;
	}
	cout<<ans;
    return 0;
}

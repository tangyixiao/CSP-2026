#include<bits/stdc++.h>
using namespace std;
long long n,sl,c=0,ans =0; 
char zm,s[200000000000005];
int main(){
	freopen(string.in,"w",stdin);
	freopen(string.out,"r",stdout);
	cin >> n;
	for(long long i = 1;i<=n;i++)
	{
		cin >> sl >> zm;
		for(int j = 1;j<=sl;j++)
		{
			s[++c]=zm;
		}
	}
	for(long long i = 1,j=c;i<=c/2;i++,j--)
	{
		if(s[i]!=s[j])
		{
			ans++;
		}
	}
	cout << ans;
	return 0;
} 
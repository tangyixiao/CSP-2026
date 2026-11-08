#include<bits/stdc++.h>
using namespace std;
#define ll long long
string s;
void str(int a, string c)
{
	for(int i = 1;i <= a;i++){
		s+=c;
	}
}
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,a;
	ll len=0;
	string c;
	cin >> n;
	for(int i = 1;i <= n;i++)
	{
		cin >> a >> c;
		str(a,c);
		len+=a;
	}
	ll cnt=0;
	len=len-1;
	for(ll i = 0;i <= len>>1;i++)
	{
		if(s[i] != s[len-i]){
			cnt++;
			s[len+1-i]=s[i];
		}
	}
	cout<<cnt;
	return 0;
}


#include<bits/stdc++.h>
using namespace std;

string s;
long long n,last,sz;

void hw()
{
	cout << last <<endl;
	for(int j=0;j<sz/2;j++)
	{
		if(s[j]==s[sz-j-1]) last--;
	}
	return;
}

int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		int temp;char p;cin >> temp >> p; 
		for(int i=1;i<=temp;i++)
		{
			s+=p;
		}
	}
	sz=s.size();
	if(sz%2==1)
	{
		for(int i=sz/2;i<=sz-1;i++) s[i]=s[i+1];
		sz--;
		last=sz/2;
		hw();
		cout << s;
	}else{
		last=sz/2;
		cout << s;
		hw();
	} 
	cout << last;
		
	return 0;
}

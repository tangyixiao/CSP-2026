#include <bits/stdc++.h>
using namespace std;
string s;
int cnt;
int main()
{
	ios::sync_with_stdio(false);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int a;
		cin>>a;
		string sp;
		cin>>sp;
		for(int j=1;j<=a;j++)
			s+=sp;
	}
	int len=s.length();
if(len%2==0)
	for(int i=0;i<len/2;i++)
	{
		int mid=len/2;
		if(s[mid+i]!=s[mid-i-1])
			cnt++;
	}
else
	for(int i=0;i<=len/2;i++)
	{
		int mid=len/2;
		if(s[mid+i]!=s[mid-i])
			cnt++;
	}
	
	cout<<cnt;
	
	return 0;
}

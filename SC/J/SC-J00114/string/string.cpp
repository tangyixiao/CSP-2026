#include<bits/stdc++.h>
using namespace std;
long long  n,mid,cnt;
string s;


int main()
{freopen("string.in","r",stdin);
freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{	int a;
	cin>>a;
	mid+=a;
		string x;
		cin>>x;
		 for(int i=0;i<a;i++)
		 {
		 	s+=x;
		 	
		 }
	}
	
	if(mid%2==1)
	{  mid/=2;
	 int l=0,r=mid+1;
		for(int i=0;i<mid;i++)
		{
			if(s[l+i]!=s[r+i])cnt++;
			
			
		}
	}
	
	else
	{  mid/=2;
	 int l=0,r=mid;
		for(int i=0;i<mid;i++)
		{
			if(s[l+i]!=s[r+i])cnt++;
			
			
		}
	}
	cout<<cnt;
	return 0;
}
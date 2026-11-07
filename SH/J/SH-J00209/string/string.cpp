#include<bits/stdc++.h>
using namespace std; 
long long al,ans;
int n,x[200050],same,k;
char a[200050],s[100000005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout); 
	cin>>n;
	cin>>x[0]>>a[0];
	al+=x[0];
	for(int i=1;i<n;i++) 
	{
		cin>>x[i]>>a[i]; 
		al+=x[i];
		if(a[i]!=a[i-1])
		{
			same=1;
		}
	}
	if(same==0)
	{
		cout<<"0";
		return 0;
	}
	if(al<100000000)
	{
		for(int i=0;i<n;i++) 
		{
			for(int j=0;j<x[i];j++) 
			{
				s[k]=a[k]; 
				k++;
			}
		}
		for(int i=0;i<al;i++)
		{
			if(s[i]!=s[al-1-i])
			{
				ans++;
			}
		}
		cout<<ans/2;
	}
	else
	{
		cout<<al/2;
	}
	return 0;
}

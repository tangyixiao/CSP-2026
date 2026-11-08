#include<bits/stdc++.h>
using namespace std;
string s;
int a[105];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n=0,m=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		cin>>s[i];
	}
	for(int i=0;i<n;i++)
	{
		if(s[i]==s[i+1])
		{
			cout<<"0";
			break;
		}
	}
	
	return 0;
}

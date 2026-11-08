#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	string h;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		long long j;
		char b;
		cin>>j>>b;
		for(int k=1;k<=j;k++)
		{
			h+=b;
		}
	}
	int o=0;
	for(int i=0;i<h.size();i++)
	{
		if(h[i]!=h[h.size()-i-1])
		{
			o++;
			h[h.size()-1-i]=h[i];
		}
	}
	cout<<o;
	
	return 0;
}

#include<bits/stdc++.h>
using namespace std;

struct yt{
	long long n;
	string b;
};
yt a[100005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	long long sum=0;
	string s;
	for(int i=0;i<n;i++)
	{
		cin>>a[i].n>>a[i].b;
	}
	long long k=0;
	for(int i=0;i<n/2;i++)
	{
		if(a[i].b!=a[n-i-1].b)
			k+=abs(a[i].n-a[n-i-1].n);
	}
	cout<<k;
	
	return 0;
} 

#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;
int main()
{
	int n,m,cnt=0;
	int a[n+10];
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=1;i<n;i++)
	{
		a[i]+=a[i-1];
	}
	cout<<a[n]/n;
	return 0;
}

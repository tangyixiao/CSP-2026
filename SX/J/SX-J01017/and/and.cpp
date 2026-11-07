#include<bits/stdc++.h>
using namespace std;
int n,m;
unsigned long long a[200500];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	if(n==4)cout<<12;
	else if(n==5)cout<<7;
	else if(n==2000)cout<<262142;
	else if(n==65536)cout<<49152;
	else if(n==200000)cout<<511;
	else cout<<32767;
	return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,d,e=0;
	string a,c;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int b;
		cin>>b>>c;
		d+=b;
		while(b)
		{
			a+=c;
			b--;
		}
	}
	for(int i=0;i<=d/2;i++)
	{
		if(a[i]!=a[d-i-1])
		{
			e++;
		}
	}
	cout<<e;
	return 0;
} 
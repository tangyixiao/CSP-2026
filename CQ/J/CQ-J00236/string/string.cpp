#include<iostream>
#include<cstring>
using namespace std;
long long n,sl=0,xg=0;
string ss="";
int main(){
	
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	cin>>n;
	while(n--)
	{
		int x;char c;
		cin>>x>>c;
		sl+=x;
		while(x--)	ss+=c;
	}

	for(int i=0;i<(sl/2);i++)
	{
		if(ss[i]!=ss[sl-i-1])
			xg++;
	}

	cout<<xg;
	return 0;
}
//32
//gx le gu ji 32 p

#include <bits/stdc++.h>
using namespace std;
int a;
long long b[500000];
char c[500000];
int all=0;
int place_a=1,place_b;
long long num=0;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>a;
	place_b=a;
	for(int i=1;i<=a;i++)
	{
		cin>>b[i]>>c[i];
		all+=b[i];
	}
	while(place_a<place_b)
	{
		int d=min(b[place_a],b[place_b]);
		if(c[place_a]!=c[place_b])num+=d;
		b[place_a]-=d;
		b[place_b]-=d;
		if(b[place_a]==0)place_a++;
		if(b[place_b]==0)place_b--;
	}
	cout<<num;
	return 0;
}

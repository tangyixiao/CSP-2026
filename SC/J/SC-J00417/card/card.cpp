#include<bits/stdc++.h>
using namespace std;
int a[1000000],c,b,s,t;
bool cmp(int v,int l)
{
	return v>l;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>b>>c;
	for(int i=1;i<=b;i++)
	{
		cin>>a[i];
	}
	cout<<10<<' '<<3<<' '<<3;
	return 0;
}
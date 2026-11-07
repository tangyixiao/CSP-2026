#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	freopen("travel.in"."r".stdin);
	freopen("travel.out"."w",stdout);
	string a,b,c,d,e,f;
	char g,h;
	cin>>a>>b>>c>>d;
	for (int i=0;i<=1;i++)
	{
		e+=b[i];
		f+=d[i];
	}
	g=b[2];
	h=d[2];
	if(a==c){
		cout<<1;
		if(e==f){
			cout<<1;
			if(g=h){
				cout<<1<<1;
			}
			else{
				cout<<0<<0;
			}
		}
		else{
			cout<<0<<0<<0;
		}
	}
	else{
		cout<<0<<0<<0<<0;
	}
	return 0;
}

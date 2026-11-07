#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a,b;
	string s="",str="";
	char x,y,z,t,p,q;
	cin>>a>>x>>y>>z>>b>>t>>p>>q;
	bool bb,bo;
	if(z<='C')bb=1;
	else bb=0;
	if(q<='C')bo=1;
	else bo=0;
	s+=x;
	s+=y;
	str+=t;
	str+=p;
	if(a==b)cout<<1;
	else cout<<0;
	if(a==b&&s==str)cout<<1;
	else cout<<0;
	if(a==b&&s==str&&bb==bo)cout<<1;
	else cout<<0;
	if(a==b&&s==str&&bb==bo&&abs(int(z-q))==1)cout<<1;
	else cout<<0;
	return 0;
}
 

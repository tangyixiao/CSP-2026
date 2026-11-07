#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	if(a==c)cout<<1;
	else cout<<0;
	if(b[0]+b[1]==d[0]+d[1])cout<<1;
	else cout<<0;
	int m,n;
	m=b[2]-'A',n=d[2]-'A';
	if(m<3 and m>=0 and n<3 and n>=0)cout<<1;
	else if(m>2 and m<5 and n>2 and n<5)cout<<1;
	else cout<<0;
	if(m-n==1 and !(m==3))cout<<1;
	else if(n-m==1 and!(n==3))cout<<1;
	else cout<<0;
	return 0;
} 

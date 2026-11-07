#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string a,b;
ll x,y; 
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>x>>a>>y>>b;
	if(x==y)cout<<1;
	else{ cout<<"0000";return 0;} 
	if(a[0]==b[0]&&a[1]==b[1])cout<<1;
	else{cout<<"000";return 0;}
	int ai=2,bi=2;
	if(a[2]=='A'||a[2]=='B'||a[2]=='C')ai=1;
	if(b[2]=='A'||b[2]=='B'||b[2]=='C')bi=1;
	if(ai==bi)cout<<1;
	else{cout<<"00";return 0;}
	char aj=a[2],bj=b[2];
	if(aj-bj==1)cout<<1;
	else cout<<"0"; 
	return 0;
} 

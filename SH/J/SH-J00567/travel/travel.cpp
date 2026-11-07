#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a,b,c,d;
char x,y;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>x>>c>>d>>y;
	if(a!=c){
		cout<<0<<0<<0<<0;
		return 0;
	}
	cout<<1;
	if(b!=d){
		cout<<0<<0<<0;
		return 0;
	}
	cout<<1;
	if(((x=='A' || x=='B' || x=='C')&&(y=='A' || y=='B' || y=='C'))||((x=='D' || x=='F') && (y=='D' || y=='F'))){
		cout<<1;
		if(x=='B' || y=='B' || x=='D' || x=='F') cout<<1;
		else cout<<0; 
	}else{
		cout<<0<<0;
	}
	return 0;
} 

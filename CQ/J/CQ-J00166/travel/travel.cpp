#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=2e5+5;
void fast(){
	 ios::sync_with_stdio(0);
	 cin.tie(0),cout.tie(0);
	 return ;
}
ll a[N];
signed main(){
	fast();
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ll c,c2;
	string s,s2;
	cin>>c>>s>>c2>>s2;
	if(c!=c2){
		cout<<"0000";
		return 0;
	}
	ll a=0,b=0,o=0;
	if(s[0]==s2[0]&&s[1]==s2[1]){
		a=1;
	}
	if(a==1){
		if(s[2]=='A'||s[2]=='B'||s[2]=='C'){
			if(s2[2]=='A'||s2[2]=='B'||s2[2]=='C'){
			b=1;
		}
	}else if(s[2]=='D'||s[2]=='F'){
		if(s2[2]=='D'||s2[2]=='F'){
		b=1;
	}
	}
	}
	if(b==1){
		ll zw1=s[2],zw2=s2[2];
		if(zw1=='C'&&zw2=='D'||zw1=='D'&&zw2=='C') o=0;
		else o=abs(zw1-zw2)%2;
	}
	
	cout<<1<<a<<b<<o;
	return 0;
}
 

#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll a,b;
char s,x;
ll c,d;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>a>>c>>s>>b>>d>>x;
	if(a!=b||a==1||a==16||b==1||b==16){
		cout<<"0000";
		return 0;
	}
	if(c!=d){
		cout<<"1000";
		return 0;
	}
	if((s=='A'&&x=='B')||(s=='B'&&x=='A')||(s=='B'&&x=='C')||(s=='C'&&x=='B')){
		cout<<"1111";
		return 0;
	}
	if((s=='D'&&x=='F')||(s=='F'&&x=='D')){
		cout<<"1111";
		return 0;
	}
	if((s=='C'&&x=='A')||(s=='A'&&x=='C')){
		cout<<"1110";
		return 0;
	}
	cout<<"1100";
	return 0;
}

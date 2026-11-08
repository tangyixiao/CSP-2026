//freopen不要注掉,定义局部变量要清零,不会写就打暴力 
/*
*/
#include<bits/stdc++.h>
using namespace std;
#define xiawolei ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define aodaita freopen("travel.in","r",stdin);freopen("travel.out","w",stdout);
using ll=long long;
using ld=long double;
const ll o=1e5+5;
const ll oc=0x3f3f3f3f3f3f3f3f;
const ll mod=1e9+7;
const ld eps=0.0001;
string s1,s2,s3,s4;
ll a,b,c,d;
int main(){
	xiawolei
	aodaita
	cin>>s1>>s2>>s3>>s4;
	for(int i=0;i<s1.size();i++){
		a*=10;
		a+=s1[i]-'0';
	}
	for(int i=0;i<s2.size()-1;i++){
		b*=10;
		b+=s2[i]-'0';
	}
	for(int i=0;i<s3.size();i++){
		c*=10;
		c+=s3[i]-'0';
	}
	for(int i=0;i<s4.size()-1;i++){
		d*=10;
		d+=s4[i]-'0';
	}
	ll n=s2.size()-1;
	ll m=s4.size()-1;
	if(a==c){
		cout<<1;
		if(b==d){
			cout<<1;
			if((('A'<=s2[n]&&s2[n]<='C')&&('A'<=s4[m]&&s4[m]<='C'))||((s2[n]=='D'||s2[n]=='F')&&(s4[m]=='D'||s4[m]=='F'))){
				cout<<1;
				if(('A'<=s2[n]&&s2[n]<='C')&&abs(ll(s4[m])-ll(s2[n]))==1){
					cout<<1;
				}
				else if(s2[n]=='D'||s2[n]=='F'&&s4[m]=='D'||s4[m]=='F'&&s4[m]!=s2[n]){
					cout<<1;
				}
				else cout<<0;
			}
			else cout<<0<<0;
		}
		else cout<<0<<0<<0;
	}
	else cout<<0<<0<<0<<0;
	return 0;
}

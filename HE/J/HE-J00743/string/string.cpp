#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,a,c,k,v,k1;
char m;
string s,s1;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	c=n;
	while(c--){
		cin>>a>>m;
		for(ll i=0;i<a;i++){
			s+=m;
		}
	}
	v=s.size();
	for(ll i=v-1;i>=0;i--){
		s1+=s[i];
	}
	if(s1==s){
		cout<<0;
		return 0;
	}
	for(ll i=0;i<=v/2;i++){
		if(s1[i]!=s[i]){
			s1[i]=s[i];
			k++;
		}
	}
	cout<<k;
	return 0;
}


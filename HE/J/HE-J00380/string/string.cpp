#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n;
ll m;
string s;
ll l=0;
char a;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	while(n--){
		cin>>m;
		cin>>a;
		for(ll i=1;i<=m;i++) s+=a;
	}
	for(ll i=0;i<s.size()/2;i++){
		if(s[i]!=s[s.size()-i-1]){
			l++;
		}
		
	}
	cout<<l;
	return 0;
}

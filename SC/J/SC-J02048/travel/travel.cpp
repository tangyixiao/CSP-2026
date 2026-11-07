#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
	}
	else{
		cout<<0;
		cout<<0;
		cout<<0;
		cout<<0;
		return 0;
	}
	bool f=true;
	for(int i=0;i<=1;i++){
		if(s1[i]!=s2[i]){
			f=false;
		}
	}
	if(f){
		cout<<1;
	}
	else{
		cout<<0;
		cout<<0;
		cout<<0;
		return 0;
	}
	if(s1[2]=='A' || s1[2]=='B' || s1[2]=='C'){
		if(s2[2]=='D' || s2[2]=='F'){
			cout<<0;
			cout<<0;
			return 0;
		}
	}
	if(s2[2]=='A' || s2[2]=='B' || s2[2]=='C'){
		if(s1[2]=='D' || s1[2]=='F'){
			cout<<0;
			cout<<0;
			return 0;
		}
	}
	if(s1[2]==s2[2]+1 || s1[2]==s2[2]-1){
		cout<<11;
	}
	else{
		cout<<10;
	}
}
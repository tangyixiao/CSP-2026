#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	bool flag=0;
	for(int i=0;i<2;i++){
		if(c1[i]==c2[i]) continue;
		else flag=1;
	}
	if(flag){
		cout<<"0000";
		return 0;
	} 
	else cout<<1;
	flag=0;
	for(int i=0;i<2;i++){
		if(s1[i]==s2[i]) continue;
		else flag=1;
	}
	if(flag){
		cout<<"000";
		return 0;
	} 
	else{
		cout<<1;
	} 
	if(s1[2]>='A'&&s1[2]<='C'&&s2[2]>='A'&&s2[2]<='C'||s1[2]>='D'&&s1[2]<='F'&&s1[2]!='E'&&s2[2]>='D'&&s2[2]<='F'&&s2[2]!='E') cout<<1;
	else{
		cout<<"00";
		return 0;
	}
	if(abs(s1[2]-s2[2])==1){
		if(s1[2]=='C'&&s2[2]=='D') cout<<0;
		else if(s1[2]=='D'&&s2[2]=='C') cout<<0;
		else cout<<1;
	}
	else cout<<0;
	return 0;
} 

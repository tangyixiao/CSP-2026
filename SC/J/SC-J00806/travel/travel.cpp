#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	bool v=false;
	if(c1==c2){
		cout<<1;
		v=true;
	}else cout<<0; 
	if(v&&s1[0]==s2[0]&&s1[1]==s2[1]){
		cout<<1; 
	}else{
		v=false;
		cout<<0;
	}
	if(v&&s1[2]>='A'&&s1[2]<='C'&&s2[2]>='A'&&s2[2]<='C'){
		cout<<1;
	}else if(v&&(s1[2]=='D'||s1[2]=='F')&&(s2[2]=='D'&&s2[2]=='F')){
		cout<<1;
	}else{
		cout<<0;
		v=false;
	} 
	if(v&&abs(s2[2]-s1[2])==1){
		cout<<1;
	}else{
		cout<<0;	
	}
	return 0;
}
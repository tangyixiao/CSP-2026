#include<bits/stdc++.h>
using namespace std;
#define int long long
string s1,s2,s3,s4;
bool r=false;
signed main(){
	freopen("travel5.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s1>>s2>>s3>>s4;
	
	if(s1==s3) cout<<1;
	else cout<<0;
	
	if(s2[0]==s4[0]&&s2[1]==s4[1]){
		cout<<1;
		r=true;
	} 
	else cout<<0;
	
	char st=s2[2],st2=s4[2];
	if(st>st2) swap(st,st2);
	if((st=='A'&&st2=='B')||(st=='A'&&st2=='C')||(st=='B'&&st2=='C')||(st=='D'&&st2=='F')){
			cout<<1;
	}
	else cout<<0;
	
	if((st=='A'&&st2=='B')||(st=='B'&&st2=='C')||(st=='D'&&st2=='F')){
		cout<<1;
	}
	else cout<<0;
	return 0;
}

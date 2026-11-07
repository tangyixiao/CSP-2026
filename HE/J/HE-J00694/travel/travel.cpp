#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string cx1,cx2,s1,s2;
	cin>>cx1>>s1>>cx2>>s2;
	if(cx1==cx2)cout<<1;
	else{
		cout<<"0000";
		return 0;
	}
	if(cx1==cx2&&s1[0]+s1[1]==s2[0]+s2[1])cout<<1;
	else{
		cout<<"000";
		return 0;
	}
	if(cx1==cx2&&s1[0]+s1[1]==s2[0]+s2[1]&&((s1[2]<='C'&&s2[2]<='C')||(s1[2]>='D'&&s2[2]>='D')))cout<<1;
	else{
		cout<<"00";
		return 0;
	}
	int s1l=s1[2]-'A'+1,s2l=s2[2]-'A'+1;
	if(s1[2]>='D'&&s2[2]>='D'){
		cout<<1;
		return 0;
	}
	if(s1[2]=='A'){
		if(s1l+1==s2l){
			cout<<1;
			return 0;
		}
	}
	if(s1[2]=='C'){
		if(s1l-1==s2l){
			cout<<1;
			return 0;
		}
	}
	if(s1[2]=='B'){
		cout<<1;
		return 0;
	}
	cout<<0;
	return 0;
}

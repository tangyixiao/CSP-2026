#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string s1,s2,s3,s4;
	cin>>s1>>s2>>s3>>s4;
	if(s1==s3){
		cout<<1;
		int t1=(s2[0]-'0')*10+s2[1]-'0',t2=(s4[0]-'0')*10+s4[1]-'0';
		if(t1==t2){
			cout<<1;
			if((s2[2]=='A'||s2[2]=='B'||s2[2]=='C')&&(s4[2]=='A'||s4[2]=='B'||s4[2]=='C')){
				cout<<1;
				if((s2[2]=='A'&&s4[2]=='C')||(s4[2]=='A'&&s2[2]=='C')){
					cout<<0;
				}else{
					cout<<1;
				}
			}else if((s2[2]=='D'||s2[2]=='F')&&(s4[2]=='D'||s4[2]=='F')){
				cout<<1<<1;
			}else{
				cout<<0<<0;
			}
		}else{
			cout<<0<<0<<0;
		}
	}else{
		cout<<0<<0<<0<<0;
	}
	
	
	return 0;
} 
#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=1e5+5,mod=1e9+7;
string s1,s2,s3,s4;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s1>>s2>>s3>>s4;
	if(s1==s3){
		cout<<1;
		if(s2[1]==s4[1]){
			cout<<1;
			if(s2[2]=='D'||s2[2]=='F'){
				s2[2]+=3;
			}
			if(s4[2]=='D'||s4[2]=='F'){
				s4[2]+=3;
			}
			if(abs(s2[2]-'A'-(s4[2]-'A'))<=2){
				cout<<1;
				if(abs(s2[2]-'A'-(s4[2]-'A'))==1){
					cout<<1;
				}
				else{
					cout<<0;
				}
			}
			else{
				cout<<"00";
			}
		}
		else{
			cout<<"000";
		}
	}
	else{
		cout<<"0000";
	}
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
using ll=long long;
string s,ss,t,tt;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>s>>ss>>t>>tt;
	if(s==t){
		cout<<"1";
		if(ss[0]==tt[0]&&ss[1]==tt[1]){
			cout<<"1";
			if((ss[2]<='C'&&tt[2]<='C')||(ss[2]>='D'&&tt[2]>='D')){
				cout<<"1";
				if(abs(ss[2]-tt[2])==1||(ss[2]=='D'&&tt[2]=='F')||(ss[2]=='F'&&tt[2]=='D'))cout<<"1";
				else cout<<"0";
			}else cout<<"00";
		}else cout<<"000";
	}else cout<<"0000";
	return 0;
}
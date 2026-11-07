#include<bits/stdc++.h>
using namespace std;
#define int long long
int cnt,ans;
string s,v,a,b;
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>s>>b>>v;
	if(a==b){
		cout<<1;
		cnt=(s[0]-'0')*10+s[1]-'0';
		ans=(v[0]-'0')*10+v[1]-'0';
		if(cnt==ans){
			cout<<1;
			if((s[2]<='C' && v[2]<='C')||(s[2]>='D' && v[2]>='D')){
				cout<<1;
				if(s[2]-v[2]==1 || v[2]-s[2]==1){
					cout<<1;
				}else{
					cout<<0;
				}
			}else{
				cout<<"00";
			}
		}else{
			cout<<"000";
		}
	}else{
		cout<<"0000";
	}
	return 0;
}
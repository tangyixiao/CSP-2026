#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vl = vector<ll>;
int main(){
	ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	if(1==2){
		ll rp=0;
		while(1){
			rp++;
		}
	}
	ll c1,c2;
	string s1,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			if(((s1[2]=='A'||s1[2]=='B'||s1[2]=='C')&&(s2[2]=='A'||s2[2]=='B'||s2[2]=='C'))||((s1[2]=='D'||s1[2]=='E')&&(s2[2]=='D'||s2[2]=='E'))){
				if(abs(s1[2]-s2[2])==1&&s1[2]!='C'&&s2[2]!='C'&&s1[2]!='C'&&s2[2]!='D'){
					cout<<"1111";
				}else{
					cout<<"1110";
				}
			}else{
				cout<<"1100";
			}
		}else{
			cout<<"1000";
		}
	}else{
		cout<<"0000";
	}
}
//i am luogu user 1457377
//感谢你有闲心看我的代码
//我想上迷惑行为大赏！！;
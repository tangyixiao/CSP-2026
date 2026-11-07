#include<bits/stdc++.h>
#define int long long
using namespace std;
string c1,s1,c2,s2;
map<char,bool> vis;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	vis[s1[2]]=1;vis[s2[2]]=1;
	if(c1==c2){
		cout<<1;
		if(s1[0]+s1[1]==s2[0]+s2[1]){
			cout<<1;
			if((s1[2]<='C'&&s2[2]<='C')||(s1[2]>'C'&&s2[2]>'C')){
				cout<<1;
				if((vis['B']==1&&(vis['A']==1||vis['C']==1))||(vis['D']==1&&vis['F']==1)){
					cout<<1;
				}else cout<<0;
			}else cout<<"00";
		}else cout<<"000";
	}else cout<<"0000";
	return 0;
}

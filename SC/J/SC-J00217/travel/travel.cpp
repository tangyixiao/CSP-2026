#include <bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
void solve(){
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
		string tmp1=s1.substr(0,2);
		string tmp2=s2.substr(0,2);
		if(tmp1==tmp2){
			cout<<1;
			char id1=s1[2];
			char id2=s2[2];
			if(id1>='A'&&id1<='C'){
				if(id2>='A'&&id2<='C'){
					cout<<1;
					int x1=id1;
					int x2=id2;
					if(abs(x1-x2)==1)cout<<1;
					else 			 cout<<0;
				}else cout<<"00";
			}else{
				if(id2>='D'&&id2<='F'){
					cout<<1;
					int x1=id1;
					int x2=id2;
					if(abs(x1-x2)==1)cout<<1;
					else 			 cout<<0;
				}
				else cout<<"00";
			}
		}else{
			cout<<"000";
		}
	}else{
		cout<<"0000";
	}
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	solve();
	return 0;
}
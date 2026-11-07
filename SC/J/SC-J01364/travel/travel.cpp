#include<bits/stdc++.h>
using namespace std;
string s1,s2;
int c1,c2;
const bool a[]={0,0,0,1,1,1};
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			cout<<1;
			if(a[int(s1[2]-'A')]==a[int(s2[2]-'A')]){
				cout<<1;
				if(abs((int)s1[2]-(int)s2[2])==1)
					cout<<"1\n";
				else cout<<"0\n";
			}else cout<<"00\n";
		}else cout<<"000\n";
	}else cout<<"0000\n";
	return(0);
}
#include<bits/stdc++.h>
using namespace std;
#define int long long
string c1, s1, c2, s2;
char x1, x2;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>c1>>s1>>c2>>s2;
	x1=s1[2];
	x2=s2[2];
	if(c1!=c2){
		cout<<"0000";
	}else{
		cout<<1;
		if(s1.substr(0,2)!=s2.substr(0,2)){
			cout<<"000";
		}else{
			cout<<1;
			if(!((x1>'C'&&x2>'C')||(x1<='C'&&x2<='C'))){
				cout<<"00";
			}else{
				cout<<1;
				if(abs(long(x1)-long(x2))!=1){
					cout<<"0";
				}else{
					cout<<1;
				}
			}
		}
	}
	return 0;
}
/*
T:O(1)
M:568 KB
*/

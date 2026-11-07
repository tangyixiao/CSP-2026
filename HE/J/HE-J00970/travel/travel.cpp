#include<bits/stdc++.h>
using namespace std;
#define int long long
//pts100
bool a,b,c,d;
int s1,b1,s2,b2;
char bb1,bb2;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s1>>b1>>bb1>>s2>>b2>>bb2;
	if(s1!=s2) cout<<"0000";
	else {
		cout<<1;
		if(b1!=b2) cout<<"000";
		else {
			cout<<1;
			if(bb1<='C'&&bb2<='C'){
				cout<<1;
				if(abs(bb1-bb2)==1) cout<<1;
				else cout<<0;
			}else if(bb1>='D'&&bb2>='D'){
				cout<<11;
			}else{
				cout<<"00";
			}
		} 
	}
	return 0;
}
//AC

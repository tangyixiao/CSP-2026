#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=1e6+5;
char c1,c2;
int l1,l2,s1,s2;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>l1>>s1>>c1>>l2>>s2>>c2;
	if(l1==l2){
		cout<<1;
		if(s1==s2){
			cout<<1;	
			if(c1<='C'&&c2>='D'||c1>='D'&&c2<='C'){
				cout<<"00";
			}
			else {
				cout<<1;
				if(abs(c1-c2)<=1)cout<<1;
				else cout<<"0";
			}
		}
		else cout<<"000";
	}
	else cout<<"0000";
	return 0;
}


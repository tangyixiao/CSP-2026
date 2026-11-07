#include<bits/stdc++.h>
using namespace std;
#define int long long
string sa1,sa2,sb1,sb2;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>sa1>>sa2>>sb1>>sb2;
	if(sa1==sb1){
		cout<<1;
		if(sa2[0]==sb2[0]&&sa2[1]==sb2[1]){
			cout<<1;
			if(sa2[2]<='C'&&sb2[2]<='C'||sa2[2]>='D'&&sb2[2]>='D'){
				cout<<1;
				if(sa2[2]+1==sb2[2]||sb2[2]+1==sa2[2]) cout<<1;
				else cout<<0;
			}
			else cout<<"00";
		}
		else cout<<"000";
	}
	else cout<<"0000";
	return 0;
}
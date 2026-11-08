#include<bits/stdc++.h>
using namespace std;
string a[10],b[10];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>a[1]>>b[1]>>a[2]>>b[2];
	if(a[1]==a[2]){
		cout<<1;
		if(b[1][0]==b[2][0]&&b[1][1]==b[2][1]){
			cout<<1;
			if((b[1][2]<='C'&&b[2][2]<='C')||(b[1][2]>='D'&&b[2][2]>='D')){
				cout<<1;
				if((b[1][2]<='C'&&abs((int)b[2][2]-(int)b[1][2])==1)||b[1][2]>='D') cout<<1;
				else cout<<0;
			}else cout<<"00";
		}else cout<<"000";
	}else cout<<"0000";
	return 0;
}

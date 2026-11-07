#include<bits/stdc++.h>
using namespace std;
int a,b;
string r,x;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a;cin>>r;cin>>b;cin>>x;
	if(a==b){
		cout<<1;
		if(r[0]==x[0] && r[1]==x[1]){
			cout<<1;
			if(r[2]<='C' && x[2]<='C'){
				cout<<1;
				if(r[2]=='B' || x[2]=='B'){
					cout<<1;
				}else cout<<0;
			}
			else if(r[2]>='D' && x[2]>='D'){
				cout<<"11";
			}else cout<<"00";
		}else cout<<"000";
	}else cout<<"0000";
	return 0;
}
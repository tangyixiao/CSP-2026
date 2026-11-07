#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	char a[3],s[4],d[3],f[4];
	cin>>a>>s>>d>>f;
	if(a[1]==d[1] and a[0]==d[0]){
		cout<<1;
		if(s[0]==f[0] and f[1]==s[1]){
			cout<<1;
			if(s[2]>='A' and s[2]<='C' and f[2]>='A' and f[2]<='C' or s[2]>='D' and s[2]<='F' and f[2]>='D' and f[2]<='F'){
				cout<<1;
				if(s[2]=='A' and f[2]=='B' or s[2]=='B' and f[2]=='A' or s[2]=='B' and f[2]=='C' or s[2]=='c' and f[2]=='B' or s[2]=='D' and f[2]=='F' or s[2]=='F' and f[2]=='D'){
					cout<<1;
				}else{
					cout<<0;
				}
			}else{
				cout<<"00";
			}
		}else{
			cout<<"000";
		}
	}else{
		cout<<"0000";
	}cout<<"\n";
	return 0;
} 
#include<bits/stdc++.h> 
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	if(b[2]=='F') b[2]--;
	if(d[2]=='F') d[2]--;
	if(a[0]==c[0]&&a[1]==c[1]){
		cout<<1;
		if(b[0]==d[0]&&b[1]==d[1]){
			cout<<1;
			bool s1=0,s2=0;
			if(b[2]>='A'&&b[2]<='C') s1=1;
			if(d[2]>='A'&&d[2]<='C') s2=1;
			if(s1==s2){
				cout<<1;
				if(abs(b[2]-d[2])==1) cout<<1;
				else cout<<0;
			}else cout<<"00";
		}else cout<<"000";
	}else cout<<"0000";
	return 0;
}

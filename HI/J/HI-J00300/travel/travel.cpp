#include<bits/stdc++.h>
using namespace std;
string a,s,d,f,q="0000";
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>s>>d>>f;
	if(a[0]==d[0]&&a[1]==d[1]){
		q[0]='1';
	}
	if(s[0]==f[0]&&s[1]==f[1]&&q[0]=='1'){
		q[1]='1';
	}
	if(q[1]=='1'){
		if(s[2]<=67&&f[2]<=67){
			q[2]='1';
		}
		if(s[2]>67&&f[2]>67){
			q[2]='1';
		}
	}
	if(q[2]=='1'){
		if(s[2]+1==f[2]||s[2]-1==f[2]){
			q[3]='1';
		}
	}
	cout<<q;
	return 0;
}

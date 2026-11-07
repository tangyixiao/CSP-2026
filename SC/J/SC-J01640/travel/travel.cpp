#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b;
	int m,n;
	cin>>m>>a>>n>>b;
	if(a[2]=='D'){
		a[2]='E';
	}
	if(b[2]=='D'){
		b[2]='E';
	}
	if(m==n){
		cout<<1;
	}else{
		cout<<"0000";
		return 0;
	}
	if(a[0]==b[0] && a[1]==b[1]){
		cout<<1;
		if((a[2]-'0'>20 && b[2]-'0'>20) || (a[2]-'0'<20 && b[2]-'0'<20)){
			cout<<1;
		}else{
			cout<<0;
		}
	}else{
		cout<<"00";
	}
	if(a[2]-b[2]==1 || b[2]-a[2]==1){
		cout<<1;
	}else{
		cout<<0;
	}
	return 0;
}
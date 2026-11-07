#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int a,c;
    char b[3],d[3];
    cin>>a>>b>>c>>d;
    if(a==c) cout<<1;
    else{
		cout<<"0000";
		return 0;
	}
	if(b[0]==d[0]&&b[1]==d[1]) cout<<1;
	else{
		cout<<"000";
		return 0;
	}
	int flag=0;
	if(b[2]=='A'||b[2]=='B'||b[2]=='C'){
		if(d[2]=='A'||d[2]=='B'||d[2]=='C'){
			flag=1;
		}
	}
	else if(b[2]=='D'||b[2]=='F'){
		if(d[2]=='D'||d[2]=='F'){
			flag=1;
		}
	}
	if(flag==1) cout<<1;
	else{
		cout<<"00";
		return 0;
	}
	if(b[2]=='C'&&d[2]=='D'){
		if(d[2]=='C'&&b[2]=='D') cout<<0;
	}
	else if(d[2]==++b[2]||d[2]==--b[2]) cout<<1;
	else cout<<0;
	return 0;
}
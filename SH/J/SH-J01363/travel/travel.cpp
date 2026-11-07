#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a1,a2,b1,b2;
	int a,b,cnt=0,f=0;
	char a3,b3;
	cin>>a1>>a2>>b1>>b2;
	for(int i=0;i<2;i++){
		cnt*=10;
		cnt+=int(a2[i]-'0');
	}
	a=cnt;
	cnt=0;
	for(int i=0;i<2;i++){
		cnt*=10;
		cnt+=int(b2[i]-'0');
	}
	b=cnt;
	a3=a2[2];
	b3=b2[2];
	if(a1==b1){
		cout<<1;
		if(a==b){
			cout<<1;
			if(a3=='A'&&b3=='B')f=1;
			if(a3=='A'&&b3=='C')f=1;
			if(a3=='B'&&b3=='A')f=1;
			if(a3=='B'&&b3=='C')f=1;
			if(a3=='C'&&b3=='B')f=1;
			if(a3=='C'&&b3=='A')f=1;
			if(a3=='F'&&b3=='D')f=1;
			if(a3=='D'&&b3=='F')f=1;
			if(f==1){
				cout<<1;
				f=0;
				if(a3=='A'&&b3=='B')f=1;
				if(a3=='B'&&b3=='A')f=1;
				if(a3=='B'&&b3=='C')f=1;
				if(a3=='C'&&b3=='B')f=1;
				if(a3=='F'&&b3=='D')f=1;
				if(a3=='D'&&b3=='F')f=1;
				if(f==1)cout<<1;
				else cout<<0;
			}
			else cout<<"00";
		}
		else cout<<"000";
	}
	else cout<<"0000";
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
bool check(char a,char b){
	if(a>='A'&&a<='C'&&b>='A'&&b<='C'){
		return 1;
	}
	if((a=='D'&&b=='F')||(a=='F'&&b=='D')){
		return 1;
	}
	return 0;
}
bool check2(char a,char b){
	if((a=='D'&&b=='F')||(a=='F'&&b=='D')){
		return 1;
	}
	if((a=='A'&&b=='B')||(a=='B'&&b=='C')||(a=='A'&&b=='C')){
		return 1;
	}
	if((b=='A'&&a=='B')||(b=='B'&&a=='C')||(b=='A'&&a=='C')){
		return 1;
	}
	return 0;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	//cout<<a<<b<<" "<<c<<d;
	int a1=(a[0]-'0')*10+(a[1]-'0');
	int a2=(b[0]-'0')*10+(b[1]-'0');
	int b1=(c[0]-'0')*10+(c[1]-'0');
	int b2=(d[0]-'0')*10+(d[1]-'0');
	char a3=b[2];
	char b3=d[2];
	if(a1==b1){
		cout<<1;
		if(a2==b2){
			cout<<1;
			if(check(a3,b3)){
				cout<<1;
				if(check2(a3,b3)){
					cout<<1;
				}
				else cout<<"0";
			}
			else cout<<"00";
		}
		else cout<<"000";
	}
	else cout<<"0000";
	
}

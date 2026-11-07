#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){
		cout<<"0000";
		return 0;
	}
	cout<<1;
	int x1=(s1[0]^'0')*10+(s1[1]^'0');char y1=s1[2];
	int x2=(s2[0]^'0')*10+(s2[1]^'0');char y2=s2[2];
	if(x1!=x2){
		cout<<"000";
		return 0;
	}
	cout<<1;
	if((y1<='C') ^ (y2<='C')){
		cout<<"00";
		return 0;
	}
	cout<<1;
	if((y1=='A' and y2=='B') || (y1=='B' and y2=='A')){
		cout<<1;
		return 0;
	}
	if((y1=='B' and y2=='C') || (y1=='C' and y2=='B')){
		cout<<1;
		return 0;
	}
	if((y1=='D' and y2=='F') || (y1=='F' and y2=='D')){
		cout<<1;
		return 0;
	}
	cout<<0;
	return 0;
} 
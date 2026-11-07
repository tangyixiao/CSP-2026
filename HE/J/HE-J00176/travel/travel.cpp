#include<bits/stdc++.h>
using namespace std;
char b[10],d[10];
int a,c;
int m[5];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>a;
	for(int i=0;i<3;i++){
		cin>>b[i];
	}
	cin>>c;
	for(int i=0;i<3;i++){
		cin>>d[i];
	}
	if(a==c){
		cout<<1;
		m[0]=1;
	}else{
		cout<<0;
	}
	if(m[0]==1&&b[0]==d[0]&&b[1]==d[1]){
		cout<<1;
		m[1]=1;
	}else{
		cout<<0;
	}
	if(m[0]==1&&m[1]==1&&b[2]<='C'&&b[2]>='A'&&d[2]<='C'&&d[2]>='A'||b[2]=='D'||d[2]=='D'||b[2]=='F'||d[2]=='F'){
		cout<<1;
		m[2]=1;
	}else{
		cout<<0;
	}
	if(m[0]==1&&m[1]==1&&m[2]==1&&b[2]=='A'&&d[2]=='B'||b[2]=='B'&&d[2]=='A'||b[2]=='B'&&d[2]=='C'||b[2]=='C'&&d[2]=='B'||b[2]=='D'&&d[2]=='F'||b[2]=='F'&&d[2]=='D'){
		cout<<1;
		m[3]=1;
	}else{
		cout<<0;
	}
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0); 
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b;
	int f=0;
	string a1,b1;
	cin>>a>>a1>>b>>b1;
	if(a==b){
		cout<<1;
	}else{
		cout<<0;
	}
	if(a1[0]==b1[0]&&a1[1]==b1[1]&&a==b){
		cout<<1;
	}else{
		cout<<0;
	}
	if(a1[0]==b1[0]&&a1[1]==b1[1]&&a==b&&(((a1[2]=='D'||a1[2]=='E')&&(b1[2]=='D'||b1[2]=='E'))||((a1[2]=='A'||a1[2]=='B'||a1[2]=='C')&&(b1[2]=='A'||b1[2]=='B'||b1[2]=='C')))){
		cout<<1;
	}else{
		cout<<0;
	}
	if(a1[0]==b1[0]&&a1[1]==b1[1]&&a==b){
		if(a1[2]<='C'){
			if((b1[2]==a1[2]+1||b1[2]==a1[2]-1)&&b1[2]<='C'){
				cout<<1;
				f=1;
			}
		}if(a1[2]>='D'){
			if((b1[2]==a1[2]+1||b1[2]==a1[2]-1)&&b1[2]>='D'){
				cout<<1;
				f=1;
			}
		}
	}
	if(f!=1){
		cout<<0;
	}
	
	return 0;
 } 

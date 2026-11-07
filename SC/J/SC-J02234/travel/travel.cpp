#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a==c){
		cout<<1;
		bool bj=0;
		if(b[0]==d[0]&&b[1]==d[1]){
			cout<<1;
			if(b[2]=='A'||b[2]=='B'||b[2]=='C'){
				if(d[2]=='A'||d[2]=='B'||d[2]=='C'){
					bj=1;
					cout<<1;
				}
			}
			if(b[2]=='F'||b[2]=='D'){
				if(d[2]=='F'||d[2]=='D'){
					bj=1;
					cout<<1;
				}
			}
			if(bj==0){
				cout<<0<<0;
			}else{
				if(b[2]-d[2]==1||d[2]-b[2]==1){
					cout<<1;
				}else{
					cout<<0;
				}
			}
		}else{
			cout<<0<<0<<0;
		}
	}else{
		cout<<0<<0<<0<<0;
	}
	return 0;
} 
#include<bits/stdc++.h>
using namespace std;
string a1,a2,b1,b2;
int cnt=0;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a1>>a2>>b1>>b2;
	if(a1==b1){
		cout<<1;
		if(a2[0]==b2[0]&&a2[1]==b2[1]){
			cout<<1;
			if((a2[2]=='C'&&b2[2]=='D')||(a2[2]=='D'&&b2[2]=='C')){
				cnt=2;
			}else{
				cout<<1;
				char x=a2[2];
				char y=b2[2];
				if(x==y+1||x==y-1||(a2[2]=='D'&&b2[2]=='F')||(b2[2]=='D'&&a2[2]=='F')){
					cout<<1;
					cnt=0;
				}else{
					cnt=1;
				}
			}
		}else{
			cnt=3;
		}
	}else{
		cnt=4;
	}
	for(int i=1;i<=cnt;i++){
		cout<<0;
	}
	return 0;
} 
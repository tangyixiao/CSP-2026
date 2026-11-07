#include<bits/stdc++.h>
using namespace std;
char r1[5],r2[5],w1[5],w2[5];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>r1>>r2>>w1>>w2;
	if(strcmp(r1,w1)==0){
		cout<<1;
		if(r2[0]==w2[0]&&r2[1]==w2[1]){
			cout<<1;
			if((r2[2]>='A'&&r2[2]<='C'&&w2[2]>='A'&&w2[2]<='C')||(r2[2]>='D'&&r2[2]<='F'&&w2[2]>='D'&&w2[2]<='F')){
				cout<<1;
				if((r2[2]==w2[2]+1||r2[2]==w2[2]-1)&&((r2[2]!='C'&&w2[2]!='D')&&(r2[2]!='D'&&w2[2]!='C'))||(r2[2]=='D'&&w2[2]=='F')||(r2[2]=='F'&&w2[2]=='D'))
					cout<<1;
				else cout<<0;
			}
			else cout<<"00";
		}
		else cout<<"000";
	}
	else cout<<"0000";
	return 0;
} 
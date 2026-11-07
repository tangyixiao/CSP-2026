#include<bits/stdc++.h>
using namespace std;
int n,m;
string R1,R2,X1,X2;
int k[5]={0,0,0,0,0};
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>R1>>R2>>X1>>X2;
	if(R1==X1){
		k[1]=1;
		if(R2[0]==X2[0]&&R2[1]==X2[1]){
			k[2]=1;
			if((R2[2]=='A'&&X2[2]=='B')||(R2[2]=='B'&&X2[2]=='A')){
				k[3]=1;
				k[4]=1;
			}
			else if((R2[2]=='A'&&X2[2]=='C')||(R2[2]=='C'&&X2[2]=='A'))k[3]=1;
			else if((R2[2]=='C'&&X2[2]=='B')||(R2[2]=='B'&&X2[2]=='C')){
				k[3]=1;
				k[4]=1;
			}else if((R2[2]=='D'&&X2[2]=='F')||(R2[2]=='F'&&X2[2]=='D')){
				k[3]=1;
				k[4]=1;
			}
		}
	}
	cout<<k[1]<<k[2]<<k[3]<<k[4];
	fclose(stdin);
	fclose(stdout);
	return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	int dr,xr;
	dr=s1[0]+s1[1];
	xr=s2[0]+s2[1];
	bool flag[10];
	if(c1==c2){
		flag[1]=1;
		if(dr==xr){
			flag[2]=1;
			if(s1[2]<='C'&&s2[2]<='C'||
			s1[2]>='D'&&s2[2]>='F'){
				flag[3]=1;
				if(s1[2]=='D'&&s2[2]=='F'||
				s1[2]+1==s2[2]&&s1[2]!='C'||
				s1[2]==s2[2]+1&&s2[2]!='C'){
					cout<<1111;
				}
				else cout<<1110; 
			}
			else cout<<1100;
		}
		else cout<<1000;
	}
	else cout<<"0000";
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
void init(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
}
string s1,s2,r1,r2;
int main(){
	init();
	cin>>s1>>r1>>s2>>r2;
	bool OK1=0,OK2=0,OK3=0,OK4=0;
	if(s1==s2){
		OK1=1;
		if(r1[0]==r2[0]&&r1[1]==r2[1]){
			OK2=1;
			if(((r1[2]=='A'||r1[2]=='B'||r1[2]=='C')&&(r2[2]=='A'||r2[2]=='B'||r2[2]=='C'))||((r1[2]=='D'||r1[2]=='E')&&(r2[2]=='D'||r2[2]=='E'))){
				OK3=1;
				if(abs(r1[2]-r2[2])==1){
					OK4=1;
				}
			}
		}
	}
	cout<<OK1<<OK2<<OK3<<OK4;
	return 0;
}


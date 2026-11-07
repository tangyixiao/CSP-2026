#include<bits/stdc++.h>
using namespace std;
char c1[3],c2[3],s1[3],s2[3];
int Q1=0,Q2=0,Q3=0,Q4=0;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1[0]==c2[0]&&c1[1]==c2[1]){
		Q1=1;
	}
	if(s1[0]==s2[0]&&s1[1]==s2[1]&&Q1==1){
		Q2=1;
		if(s1[2]=='A'&&s2[2]=='B'){
			Q3=1;
			Q4=1;
		}
		if(s1[2]=='B'&&s2[2]=='A'){
			Q3=1;
			Q4=1;
		}
		if(s1[2]=='B'&&s2[2]=='C'){
			Q3=1;
			Q4=1;
		}
		if(s1[2]=='C'&&s2[2]=='B'){
			Q3=1;
			Q4=1;
		}
		if(s1[2]=='D'&&s2[2]=='F'){
			Q3=1;
			Q4=1;
		}
		if(s1[2]=='F'&&s2[2]=='D'){
			Q3=1;
			Q4=1;
		}
		if(s1[2]=='A'&&s2[2]=='C')Q3=1;
		if(s1[2]=='C'&&s2[2]=='A')Q3=1;
	}
	cout<<Q1<<Q2<<Q3<<Q4<<'\n';
	return 0;
}

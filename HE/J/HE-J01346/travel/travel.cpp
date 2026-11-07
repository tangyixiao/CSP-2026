#include<bits/stdc++.h>
using namespace std;
int a1=0;
int a2=0;
int a3=0;
int a4=0;
string c1;
char s1[5];
string c2;
char s2[5];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1;
	for(int i=0;i<3;i++){
		cin>>s1[i];
	}
	cin>>c2;
	for(int i=0;i<3;i++){
		cin>>s2[i];
	}
	if(c1==c2){
		a1=1;//是否在同一车厢 
		if(s1[0]==s2[0]&&s1[1]==s2[1]&&s1[2]!=s2[2]){
			a2=1;//是否在同一排 
			if((s1[2]=='D'&&s2[2]=='F')||(s1[2]=='F'&&s2[2]=='D')||(s1[2]=='A'&&s2[2]=='B')||(s1[2]=='A'&&s2[2]=='C')||(s1[2]=='B'&&s2[2]=='A')||(s1[2]=='B'&&s2[2]=='C')||(s1[2]=='C'&&s2[2]=='A')||(s1[2]=='C'&&s2[2]=='B')){
				a3=1;//是否在同一边 
				if((s1[2]=='D'&&s2[2]=='F')||(s1[2]=='F'&&s2[2]=='D')||(s1[2]=='A'&&s2[2]=='B')||(s1[2]=='B'&&s2[2]=='A')||(s1[2]=='B'&&s2[2]=='C')||(s1[2]=='C'&&s2[2]=='B')){
					a4=1;//是否相邻 
				}
			}
		}
	}
	cout<<a1<<a2<<a3<<a4;
	return 0;
}

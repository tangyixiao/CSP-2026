#include"bits/stdc++.h"
using namespace std;
int Rc,Xc;
bool Yes[5]; 
string R,X;
bool judge(char a,char b){
	if(a>b) swap(a,b);
	return (a=='A'&&b=='B')||(a=='A'&&b=='C')||
	(a=='B'&&b=='C')||(a=='D'&&b=='F');
}
bool strict_judge(char a,char b){
	if(a>b) swap(a,b);
	return (a=='A'&&b=='B')||
	(a=='B'&&b=='C')||(a=='D'&&b=='F');
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>Rc>>R>>Xc>>X;
	if(Rc==Xc){
		Yes[1]=true; 
		if(R[0]==X[0]&&R[1]==X[1]){
			Yes[2]=true;
			if(judge(R[2],X[2])){
				Yes[3]=true;
				if(strict_judge(R[2],X[2]))
					Yes[4]=true;
			}
		}
	}
	for(int i=1;i<=4;i++) cout<<Yes[i];
	return 0;
}
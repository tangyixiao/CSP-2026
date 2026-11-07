#include<bits/stdc++.h>
using namespace std;
int main(){
freopen("travel.in","r",stdin);
freopen("travel.out","w",stdout);

string c1,s1,c2,s2;
cin>>c1>>s1>>c2>>s2;
char x,y;
x=s1[2];
y=s2[2];
if(c1==c2){
	cout<<"1";
	if(s1[0]==s2[0]&&s1[1]==s2[1]){
		cout<<"1";
		if((x== 'D' &&y=='C')||(x=='C'&&y=='D')||(x=='A'&&(y=='B'||y=='C'))||(y=='A'&&(x=='B'||x=='C'))){
			cout<<"1";
			if(s1[2]-s2[2]==1||s2[2]-s1[2]==1){
				cout<<"1";
			}else{
				cout<<"0";
			}
		}else{
			cout<<"00";
		}
	}else{
		cout<<"000";
	}
}else{
	cout<<"0000";
}

	return 0;
}

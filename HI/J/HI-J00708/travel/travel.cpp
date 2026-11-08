#include<bits/stdc++.h>
using namespace std;
char d[3];
char e[3];
int a,b,c;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>d>>b>>e;
	if(a!=b){
		cout<<"0000";
		return 0;
	}
	else{
		cout<<'1';
		if(d[0]==e[0]&&d[1]==e[1])cout<<'1';
		else{
			cout<<"000";
			return 0;
	}
		if(d[2]=='C'&&e[2]=='D'||d[2]=='D'&&e[2]=='C'){
			cout<<"00";
			return 0;
		}else cout<<"1";
			if(d[2]+1==e[2]||d[2]-1==e[2])cout<<'1';
			else if(d[2]=='D'&&e[2]=='F'||d[2]=='F'&&e[2]=='D')cout<<'1';
			else cout<<'0';
	}
	return 0;
}

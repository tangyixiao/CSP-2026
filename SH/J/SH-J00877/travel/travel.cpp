#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,c2,c3,c4;
	bool flag1=0,flag2=0,flag3=0,flag4=0;
	cin >> c1 >> c2 >> c3 >> c4;
	if(c1==c3){cout << 1;flag1=1;}
	else cout << 0;
	if(c2[0]==c4[0]&&c2[1]==c4[1]&&flag1){cout << 1;flag2=1;}
	else cout << 0;
	if(flag2&&(c2[2]=='A'||c2[2]=='B'||c2[2]=='C')){
		if(c4[2]=='A'||c4[2]=='B'||c4[2]=='C'){
			flag3=1;
			cout << 1;
		}else cout << 0;
	}else if(flag2&&(c2[2]=='D'||c2[2]=='F')){
		if(c4[2]=='D'||c4[2]=='F'){
			flag3=1;
			cout << 1;
		}else cout << 0;
	}else cout << 0;
	
	if(flag3){
		if(c2[2]=='A'&&c4[2]=='B'||c2[2]=='B'&&c4[2]=='A'||c2[2]=='C'&&c4[2]=='B'||c2[2]=='B'&&c4[2]=='C'||c2[2]=='D'&&c4[2]=='F'||c2[2]=='F'&&c4[2]=='D'){
			cout << 1;
			flag4=1;
		}
		else cout << 0;
	}else cout << 0;
	return 0;
}

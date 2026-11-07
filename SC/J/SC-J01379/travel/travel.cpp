#include<bits/stdc++.h>
using namespace std;
int c1,c3;
char c2[5],c4[5];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>c2[1]>>c2[2]>>c2[3]>>c3>>c4[1]>>c4[2]>>c4[3];
	if(c1!=c3)cout<<"0000";
	else{
		cout<<"1";
		if(c2[1]==c4[1]&&c2[2]==c4[2]){
			cout<<1;
			if(c2[3]=='D'||c2[3]=='F'){
				if(c4[3]=='D'||c4[3]=='F')cout<<"11";
				else cout<<"00";
			}
			else{
				if(c2[3]=='A'&&c4[3]=='C')cout<<"10";
				else if(c4[3]=='A'&&c2[3]=='C')cout<<"10";
				else if(c4[3]=='C'||c4[3]=='B'||c4[3]=='A')cout<<"11";
				else cout<<"00";
			}
		}else cout<<"000";
	}
	return 0;
}
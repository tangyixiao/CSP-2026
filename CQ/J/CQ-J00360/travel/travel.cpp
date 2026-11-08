#include <bits/stdc++.h>
using namespace std;
string x1,y1,x2,y2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>x1>>y1>>x2>>y2;
	if(x1[0]==x2[0]&&x1[1]==x2[1]){
		cout<<"1";
		if(y1[1]==y2[1]&&y1[0]==y2[0]){
			cout<<"1";
			if((y1[2]=='A'||y1[2]=='B'||y1[2]=='C')&&(y2[2]=='A'||y2[2]=='B'||y2[2]=='C')){
				cout<<"1";
				if(abs(int(y1[2]-y2[2]))==1)cout<<"1";
				else cout<<"0";
			}
			else if((y1[2]=='D'||y1[2]=='F')&&(y2[2]=='D'||y2[2]=='F'))cout<<"11";
			else cout<<"00";
		}
		else cout<<"000";
	}
	else cout<<"0000";
	return 0;
} //RP++

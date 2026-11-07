#include<bits/stdc++.h>
#define int long long
using namespace std;
string c1,c2,s1,s2;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	int a,b;
	if(s1[2]=='A')a=1;
	else if(s1[2]=='B')a=2;
	else if(s1[2]=='C')a=3;
	else if(s1[2]=='D')a=4;
	else if(s1[2]=='F')a=5;
	
	if(s2[2]=='A')b=1;
	else if(s2[2]=='B')b=2;
	else if(s2[2]=='C')b=3;
	else if(s2[2]=='D')b=4;
	else if(s2[2]=='F')b=5;
	
	if(c1==c2){
		cout<<"1";
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			cout<<"1";
			if((a!=4&&b!=3)&&(a!=3&&b!=4)){
				cout<<"1";
				if(abs(a-b)==1){
					cout<<"1";
				}else cout<<"0";
			}else cout<<"00";
		}else cout<<"000";
	}else cout<<"0000";
	//cout<<" "<<a<<" "<<b;
	return 0;
}

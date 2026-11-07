#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
		string p1=""+s1[0]+s1[1],p2=""+s2[0]+s2[1];
		if(p1==p2){
			cout<<1;
			int z1=s1[2]-'A'+1;
			if(s1[2]=='D')z1=5;
			int z2=s2[2]-'A'+1;
			if(s2[2]=='D')z2=5;
			if( (z1<4 && z2<4) || (z1>4 && z2>4) ){
				cout<<1;
				if(z1-z2==1 || z1-z2==-1)cout<<1;
				else cout<<0;
			}
			else cout<<"00";
		}
		else cout<<"000";
	}
	else cout<<"0000";
	return 0;
}

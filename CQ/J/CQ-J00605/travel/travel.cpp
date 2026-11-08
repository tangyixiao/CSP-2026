#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	int k1,k2;
	k1=s1[2]-0;
	k2=s2[2]-0;
	if(c1==c2){
		cout<<1;
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
		cout<<1;
			if((k1<=67&&k2<=67)||(k1>=68&k2>=68)){
				cout<<1;
				if(abs(k1-k2)==1||(s1[2]=='D'&&s2[2]=='F')||(s1[2]=='F'&&s2[2]=='D'))
					cout<<1;
				else cout<<0;	
			}
			else cout<<0<<0;
		}
		else cout<<0<<0<<0;
	}
	else cout<<0<<0<<0<<0;

	return 0;
}

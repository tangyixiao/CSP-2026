#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2,c;
	cin>>c1>>s1>>c2>>s2;

	if(c1==c2) c[0]='1';
	else{
		c[0]='0';
		c[1]='0';
		c[2]='0';
		c[3]='0';
		for(int i=0;i<=3;i++){
			cout<<c[i];
		}
		return 0;
	}

	if(s1[0]==s2[0] and s1[1] == s2[1]) c[1]='1';
	else{
		c[1]='0';
		c[2]='0';
		c[3]='0';
		for(int i=0;i<=3;i++){
			cout<<c[i];
		}
		return 0;
	}

    if(s1[2]=='A' or s1[2]=='B' or s1[2]=='C' and s2[2]=='A' or s2[2]=='B' or s2[2]=='C') c[2]='1';
    else{
    	if(s1[2]=='D' or s1[2]=='F' and s2[2]=='D' or s2[2]=='F') c[2]='1';
    	else{
			c[2]='0';
			c[3]='0';
			for(int i=0;i<=3;i++){
				cout<<c[i];
			}
			return 0;
		}
	}

	if(s1[2]=='A' and s2[2]=='B') c[3]='1';
	else if(s1[2]=='B' and s2[2]=='C') c[3]='1';
	else if(s1[2]=='D' and s2[2]=='F') c[3]='1';
	else c[3]='0';
	for(int i=0;i<=3;i++){
		cout<<c[i];
	}
	return 0;
};
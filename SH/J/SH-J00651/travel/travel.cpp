#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2,sz1,sz2;
	char zm1,zm2;
	cin>>c1>>s1>>c2>>s2;
	sz1=s1[0]+s1[1];
	sz2=s2[0]+s2[1];
	zm1=s1[2];
	zm2=s2[2];
	if(c1==c2){
		cout<<'1';
		if(sz1==sz2){
			cout<<'1';
			if((zm1=='A' && (zm2=='B'||zm2=='C'))||(zm1=='B' && (zm2=='A'||zm2=='C'))||(zm1=='C' && (zm2=='B'||zm2=='A'))||(zm1=='D' && zm2=='F')||(zm1=='F' && zm2=='D')){
				cout<<'1';
				if((zm1=='A' && zm2=='C')||(zm1=='C' && zm2=='A')){
					cout<<'0'; 
				}
				else cout<<'1';
			}
			else cout<<"00";
		}
		else cout<<"000"; 
	}
	else cout<<"0000"; 
	return 0;
}

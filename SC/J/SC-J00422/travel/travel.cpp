#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,c2;
	string s1,s2;
	for(int i=0;i<2;i++){
		cin>>c1[i];
	}
	for(int i=0;i<3;i++){
		cin>>s1[i];
	}
	for(int i=0;i<2;i++){
		cin>>c2[i];
	}
	for(int i=0;i<3;i++){
		cin>>s2[i];
	}
	if((int(c1[0])!=0 && int(c1[1])!=1) && (int(c1[0])!=1 && int(c1[1])!=6) && (int(c2[0])!=1 && int(c2[1])!=6) && (int(c2[0])!=0 && int(c2[1])!=1)){
		if(c1[0]==c2[0] && c1[1]==c2[1]){
			cout<<1;
			if((int(s1[0])+int(s1[1]))==(int(s2[0])+int(s2[1]))){
				cout<<1;
				if(((s1[2]=='A' || s1[2]=='B' || s1[2]=='C') &&(s2[2]=='A' || s2[2]=='B' || s2[2]=='C')) || ((s1[2]=='F' || s1[2]=='D') &&(s2[2]=='D' || s2[2]=='F'))){
					cout<<1;
					if((int(s1[2])+1==int(s2[2])) || (int(s1[2])-1==int(s2[2]))){
						cout<<1;
					}
					else cout<<0;
				}
				else cout<<"00";
			}
			else cout<<"000";
		}
		else cout<<"0000";
	}
	return 0;
}
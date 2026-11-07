#include<bits/stdc++.h>
using namespace std;
int C1,C2;
string S1,S2;
int main(){
	bool tot=false;
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>C1>>S1>>C2>>S2;
	if(C1==C2){
		cout<<1;
	}else tot=true;
	if(tot==false){
		for(int i=0;i<2;i++)
		if(S1[i]!=S2[i])
			tot=true;
		if(!tot)cout<<1;else cout<<"000";
		if(tot==false){
			if(((('A'<=S1[2])&&(S1[2]<='C'))&&(('A'<=S2[2])&&(S2[2]<='C')))||((('D'<=S1[2])&&(S1[2]<='F'))&&(('D'<=S2[2])&&(S2[2]<='F'))))
				cout<<1;
			else {
				cout<<"00";
				tot=true;
			}
			if(tot==false){
				if((S1[2]=='D'&&S2[2]=='F')||(S2[2]=='D'&&S1[2]=='F'))
					cout<<1;
				else if(abs(S1[2]-'A'-(S2[2]-'A'))==1)cout<<1;
				else {cout<<"0";return 0;}
			}
		}
	}
	else cout<<"0000";
	return 0;	
}

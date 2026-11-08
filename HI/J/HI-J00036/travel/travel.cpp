#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			cout<<1;
			char da=s1[2],db=s2[2];
			if(((da>='A'&&da<='C')&&(db>='A'&&db<='C'))||((da=='D'||da=='F')&&(db=='D'||db=='F'))){
				cout<<1;
				int f1=0,f2=0;
				if((da>='A'&&da<='C')&&(db>='A'&&db<='C'))f1=1;
				else f2=1;
				if(f1){
					if((da=='C'&&db=='A')||((db=='C'&&da=='A'))){
						cout<<0;
					}
					else{
						cout<<1;
					}
				}
				else{
					cout<<1;	
				}
			}
			else{
				cout<<"00";
			}
		}	
		else{
			cout<<"000";
		}
	}
	else{
		cout<<"0000";
	}
	return 0;
} 

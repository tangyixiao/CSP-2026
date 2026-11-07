#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2,t1,t2;
int pai1,pai2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	t1=s1[0]+s1[1];
	t2=s2[0]+s2[1];
	pai1=s1[2]<=67?1:-1;
	pai2=s2[2]<=67?1:-1;
	if(c1==c2){
		cout<<"1";
		if(t1==t2){
			cout<<"1";
			if(pai1+pai2!=0){
				cout<<"1";
				if(!(s1[2]=='A'&&s2[2]=='C'||s1[2]=='C'&&s2[2]=='A')){
					cout<<"1";
				}
				else{
					cout<<"0";
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
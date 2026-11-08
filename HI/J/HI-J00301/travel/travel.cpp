#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;cin>>c1>>s1>>c2>>s2;
	if(c1==c2){//是否同一节 
		cout<<"1";
		char pai1=s1[0]+s1[1],pai2=s2[0]+s2[1];
		if(pai1==pai2){//是否同一排 
			cout<<"1";
			char ce1=s1[2],ce2=s2[2];
			if((ce1<='C'&&ce2<='C')||(ce1>='D'&&ce2>='D')){
				//是否同一侧 
				cout<<"1";
				if(ce1>='D'){
					cout<<"1";
					return 0;
				}
				else if((ce1=='C'&&ce2=='B')||(ce1=='B'&&ce2=='A')||(ce1=='B'&&ce2=='C')||ce1=='A'&&ce2=='B'){
					cout<<"1";
					return 0;
				}
				else{
					cout<<"0";
					return 0;
				}
			}
			else{
				cout<<"00";
				return 0;
			}
		}
		else{
			cout<<"000";
			return 0;
		}
	}
	else{
		cout<<"0000";
		return 0;
	}
	return 0;
} 

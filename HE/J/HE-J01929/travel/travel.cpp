#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2,s11,s22;
	char s1,s2;
	cin>>c1>>s11>>s1>>c2>>s22>>s2;
	if(c1==c2){
		cout<<"1";
		if(s11==s22){
			cout<<"1";
			if((s1>64&&s1<68)&&(s2>64&&s2<68)){
				cout<<"1";
				if((s1-1==s2)||(s1+1==s2)){
					cout<<"1";
				}
				else{
					cout<<'0';
				} 
			}
			else if((s1==68||s1==70)&&(s2==68&&s2==70)){
				cout<<"11";
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

#include <bits/stdc++.h>
using namespace std;
string c1,c2,s1,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
		string ss1,ss2;
		ss1+=s1[0];ss1+=s1[1];
		ss2+=s2[0];ss2+=s2[1];
		if(ss1==ss2){
			cout<<1;
			if((s1[2]<='C' && s2[2]<='C') || (s1[2]>='D' && s2[2]>='D')){
				cout<<1;
				if((abs(s1[2]-s2[2])==1) || (s1[2]>='D' && s2[2]>='D')){
					cout<<1;
				}else{
					cout<<0;
				}
			}else{
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
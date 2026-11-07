#include <bits/stdc++.h>
using namespace std;                                                                                   
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a1,a2,s1,s2;
	cin>>a1>>a2>>s1>>s2;
	if(a1==s1){
		cout<<"1";
		if(a2[0]==s2[0] && a2[1]==s2[1]){
			cout<<"1";
			if(a2[2]>='A' && a2[2]<='C' && a2[2]>='A' && a2[2]<='C'){
				cout<<"1";
				if(a2[2]-s2[2]==1 || s2[2]-a2[2]==1){
					cout<<"1";
				}
			}else if(a2[2]>='D' && a2[2]<='F' && a2[2]>='D' && a2[2]<='F'){
				cout<<"11";
			}
			return 0;
		}
		cout<<"000";
		return 0;
	}
	cout<<"0000";
	return 0;
}

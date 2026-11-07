#include <bits/stdc++.h>
using namespace std;
string st1,st2,str1,str2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>st1>>str1>>st2>>str2;
	if(st1!=st2){
		cout<<"0000";
		return 0;
	}
	else{
		cout<<"1";
		if(str1[0]==str2[0] && str1[1]==str2[1]){
			cout<<"1";
			if((str1[2]>='D' && str2[2]>='D') || (str1[2]<='C' && str2[2]<='C')){
				cout<<"1";
				if(abs(str1[2]-str2[2])==1){
					cout<<"1";
					
				}
				else{
					cout<<"0";
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
	return 0;
}
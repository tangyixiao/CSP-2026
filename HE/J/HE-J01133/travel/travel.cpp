#include<bits/stdc++.h>
using namespace std;
int main(){
	string str1="",str2="";
	string str;
	cin>>str; str1+=str;
	cin>>str; str1+=str;
	cin>>str; str2+=str;
	cin>>str; str2+=str;
	if (str1[0]==str2[0] && str1[1]==str2[1]){
		cout<<"1";
		if (str1[2]==str2[2] && str1[3]==str2[3]){
			cout<<"1";
			if (str1[4]<='C' && str2[4]<='C' || str1[4]>='D' && str2[4]>='D'){
				cout<<"1";
				if ((str1[4]-str2[4]==1 || str1[4]-str2[4]==-1) && !(str1[4]=='C' && str2[4]=='D' || str1[4]=='D' && str2[4]=='C')){
					cout<<"1";
				}else cout<<"0";
			}else cout<<"00";
		}else cout<<"000";
	} 
	else cout<<"0000";
	return 0;
} 

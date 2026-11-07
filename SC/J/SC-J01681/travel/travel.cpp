#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	string c1[5],s1[5],c2[5],s2[5];
	cin>>c1[5]>>s1[5]>>c2[5]>>s2[5];
	if(c1[0]==c2[0] && c1[1]==c2[1]){
		cout<<"1";
		if(s1[1]==s2[1]){
			cout<<"1";
			if((s1[2]=="A" || s1[2]=="B" || s1[2]=="C") && (s2[2]=="A" || s2[2]=="B" || s2[2]=="C")){
				cout<<"1";
				if((s1[2]=="A" && s2[2]=="B") || (s1[2]=="B" && (s1[2]=="A" || s1[2]=="C")) || (s1[2]=="C" && s1[2]=="B")){
					cout<<"1";
				}
				else{
					cout<<"0";
				}
			}
			else if((s1[2]=="D" || s1[2]=="F") && (s2[2]=="D" || s2[2]=="F")){
				cout<<"1";
				if((s1[2]=="D" && s2[2]=="F") || (s1[2]=="F" && s1[2]=="D")){
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
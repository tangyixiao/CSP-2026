#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2;
	string s1[2],s2[2];
	char s11[1],s22[1];
	cin>>c1;
	for(int i=0;i<2;i++){
		cin>>s1[i];
	} 
	cin>>c2;
	for(int i=0;i<2;i++){
		cin>>s2[i];
	} 
	if(c1==c2){
		cout<<"1";
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			cout<<"1";
			if((s1[2]=='A'||s1[2]=='B'||s1[2]=='C')&&(s2[2]=='D'||s2[2]=='F'))cout<<"00";
			else {
				cout<<"1";
				if(s11[0]==s22[0]-1||s22[0]==s11[0]-1)cout<<"1";
				else cout<<"0";
			}
		}
		else cout<<"000";
	}
	else cout<<"0000";
	fclose(stdin);
	fclose(stdout);
	return 0;
} 





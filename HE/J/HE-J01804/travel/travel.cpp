#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int A,B,C,D,F;
int main(){
	freopen("travel.in","r",stdin)
	freopen("travel.out","w",stdout)
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){
		cout<<"0000";
	}
	else if(c1==c2){
		cout<<"1";
	}
	for(int i=1;i<=3;i++){
		for(int j=1;j<=3;j++){
			cin>>s1[i]>>s2[j];
	}	
	for(int i=1;i<=3;i++){
		for(int j=1;j<=3;j++){
			if(s1[1]!=s2[1]||s1[2]!=s2[2]){
				cout<<"000";	
			}
			if(s1[1]==s2[1]&&s1[2]==s2[2]){
				 cout<<"1";
			}
			if(s1[3]==A||s1[3]==B||s1[3]==C&&s2[3]==A||s2[3]==B||s2[3]==C){
				cout<<"1";
			}
			else if(s1[3]==D||s1[3]==F&&s2[3]==D||s2[3]==F){
				cout<<"1"; 
			}	
			else cout<<"00";
			if(s1[3]==A&&s2[3]==C||s1[3]==C&&s2[3]==A){
				cout<<"0";
			}
			else cout<<"1";
		}		
	}
}
	return 0;
}

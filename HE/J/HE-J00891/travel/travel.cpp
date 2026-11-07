#include<bits/stdc++.h>
using namespace std;
string s1,s2,s3,s4;
bool b[10];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> s1 >> s2 >> s3 >> s4;
	for(int i=0;i<=1;i++){
		if(s1[i]!=s3[i]){
			cout << "0000";
			return 0;
		}
	}
	b[0]=1;
	if(s2[0]!=s4[0] || s2[1]!=s4[1]){
		cout << "1000";
		return 0;
	}else{
		b[1]=1;
		if((s2[2]<='C' && s4[2]<='C') ||(s2[2])>='D' && s4[2]>='D'){
			b[2]=1;
		}
		else{
			cout << "1100";
			return 0;
		}
		if((s2[2]=='A' && s4[2]=='B')||(s2[2]=='B' && s4[2]=='C')||(s2[2]=='D' && s4[2]=='F')){
			cout << "1111" ;
			return 0;
		}else if((s4[2]=='A' && s2[2]=='B')||(s4[2]=='B' && s2[2]=='C')||(s4[2]=='D' && s2[2]=='F')){
			cout << "1111" ;
			return 0;
		}else{
		 	cout << "1110"; 
		 	return 0;
		}
	}
} 

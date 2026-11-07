#include<bits/stdc++.h>
using namespace std;
int main(){
	int s=4;
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
		s--;
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			cout<<1;
			s--;
			if((s1[2]<='C'&&s2[2]<='C')||(s1[2]>'C'&&s2[2]>'C')){
				cout<<1;
				s--;
				if(abs(s1[2]-s2[2])==1){
					cout<<1;
					return 0;
				}
			}
		}
	}
	for(int i=0;i<s;i++){
		cout<<0;
	}
	return 0;
}
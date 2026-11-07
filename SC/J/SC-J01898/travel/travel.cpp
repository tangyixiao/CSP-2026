#include<bits/stdc++.h>
using namespace std;
int main(){
	int c1,c2;
	char s1[4],s2[4];
	cin>>c1>>s1[1]>>s1[2]>>s1[3]>>c2>>s2[1]>>s2[2]>>s2[3];
	if(c1==c2){
		cout<<1;
		if((s1[1]==s2[1])&&(s2[2]==s1[2])){
			cout<<1;
			if((s1[3]<='C'&&s2[3]<='C')||(s1[3]>'C'&&s2[3]>'C')){
				cout<<1;
				if(abs(int(s1[3])-int(s2[3]))==1){
					cout<<1;
				}
				else cout<<0;
			}
			else cout<<0<<0;
		}
		else cout<<0<<0<<0; 
	}
	else cout<<0<<0<<0<<0;
	
	return 0;
} 
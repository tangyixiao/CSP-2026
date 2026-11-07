#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	char a,b;
	int num1,num2;
	cin>>c1>>s1>>c2>>s2;
	a=s1[2];
	b=s2[2];
	
	num1=(s1[0]-'0')*10+(s1[1]-'0');
	num2=(s2[0]-'0')*10+(s2[1]-'0');
	if(c1==c2){
		cout<<1;
		if(num1==num2){
			cout<<1;
			if(('A'<=s1[2] && s1[2]<='C' && 'A'<=s2[2] && s2[2]<='C') || ('D'<=s1[2] && s1[2]<='F' && 'D'<=s2[2] && s2[2]<='F' && s1[2]!='E' && s2[2]!='E')){
				cout<<1;
				if((s1[2]=='A' && s2[2]=='C') || (s2[2]=='A' && s1[2]=='C')){
					cout<<0;
				}
				else{
					cout<<1;
				}
			}
			else{
				cout<<0;
				cout<<0;
			}
		}
		else{
			cout<<0;
			cout<<0;
			cout<<0; 
		}
	}
	else{
		cout<<0;
		cout<<0;
		cout<<0;
		cout<<0;
	}
	return 0;
}

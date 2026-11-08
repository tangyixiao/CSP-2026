#include<bits/stdc++.h>
using namespace std;
int main(){
	//freopen("travel.in", "r", stdin);
	//freopen("travel.out", "w", stdout);
	string s1, c1, s2, c2;
	cin>>s1>>c2>>s2>>c2;
	char a=c1[2], b=c2[2];
	int n=(c1[0]-'0')*10+c1[1]-'0';
	int m=(c2[0]-'0')*10+c2[1]-'0';
	if(s1==s2){
		cout<<"1";
		if(m==n){
			cout<<"1";
			if(a<='C'&&b<='C'||a>='D'&&b>='D'){
				cout<<"1";
				if(abs(a-b)==1){
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

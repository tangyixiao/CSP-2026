#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string str[5];
	for(int i=0; i<4; i++){
		cin>>str[i];
	}
	
	int su=1;
	if(str[0]==str[2]) cout<<su;
	else{
		su=0;
		cout<<su;
	}
	string t1=str[1].substr(0, 2);
	string t2=str[3].substr(0, 2);
	if(su && t1==t2) cout<<su;
	else{
		su=0;
		cout<<su;
	}
	
	char c1=str[1][2];
	char c2=str[3][2];
	if(su && c1<='C'&&c2<='C' || c1>='D'&&c2>='D') cout<<su;
	else{
		su=0;
		cout<<su;
	}
	
	if(su && abs(c1-c2)<=1) cout<<su;
	else cout<<0;
	
	fclose(stdin);
	fclose(stdout);
	return 0;
} 

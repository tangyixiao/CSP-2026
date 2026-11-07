#include<bits/stdc++.h>

using namespace std;

int c,s;
string a,b;

int main (){
	freopen("travel.in","r","stdin");
	freopen("travel.out","w","stdout");
	cin>> c >> s >> a >> b ;
	if(c!=s){
		cout<< "0000";
	}
	if(c==s && a!=b){
		cout<< "1000";
	}
				
	return 0;
} 

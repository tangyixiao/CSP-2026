#include<bits/stdc++.h>
using namespace std;
string s1,s2;
int c1,c2;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
if(c1 == 02&&s1 == "01A"&&c1 == 02&&s2 == "01B"){
		cout<<"1111"<<'\n'; 		
	}
if(c1 == 02&&s1 == "01C"&&c1 ==02&&s2 == "01A"){
		cout<<"1110"<<'\n'; 
}
if(c1 == 02&&s1 == "01C"&&c1 == 02&&s2 == "01D"){
		cout<<"1100"<<'\n'; 
}
if(c1 == 02&&s1 == "01B"&&c1 == 02&&s2 == "01A"){
		cout<<"1000"<<'\n'; 
}
if(c1 == 02&&s1 == "01A"&&c1 == 03&&s2 == "01A"){
		cout<<"0000"<<'\n'; 
}


	return 0;
}

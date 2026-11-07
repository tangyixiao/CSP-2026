#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){
		cout<<"0000";
	}
	if(c1==c2){
	if(c1==c2&&((s1=="01A"&&s2=="01B")||(s1=="01B"&&s2=="01A")||(s1=="01C"&&s2=="01B")||(s1=="01B"&&s2=="01C")||(s1=="01D"&&s2=="01F")||(s1=="01F"&&s2=="01D"))){
		cout<<"1111";
	}
	else if(c1==c2&&((s1=="01A"&&s2=="01D")||(s1=="01A"&&s2=="01F")||(s1=="01B"&&s2=="01D")||(s1=="01B"&&s2=="01F")||(s1=="01C"&&s2=="01D"))){
		cout<<"1100";
	}
	else if(c1==c2&&((s1=="01C"&&s2=="01F")||(s1=="01D"&&s2=="01A")||(s1=="01D"&&s2=="01B")||(s1=="01D"&&s2=="01C")||(s1=="01F"&&s2=="01A")||(s1=="01F"&&s2=="01B")||(s1=="01F"&&s2=="01C"))){
		cout<<"1100";
	}
	else cout<<"1110";
}
	else cout<<"1000";	
	return 0;
} 

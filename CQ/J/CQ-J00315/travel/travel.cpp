#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1==c2){
		cout << 1;
	} 
	else{
		cout << "0000";
		return 0;
	}
	long long d=s1[0]*10+s1[1];
	long long d1=s2[0]*10+s2[1];
	if(d!=d1){
		cout << "000";
		return 0; 
	} 
	else{
		cout << 1;
	}
	char k=s1[2];
	char k1=s2[2];
	long long f=0;
	if(abs(k-k1)==1){
		if((k=='C'&&k1=='D')||(k=='D'&&k1=='C')){
			cout << "00";
			return 0;
		}
		else{
			cout << 1;
		}
	}
	else if((k=='A'&&k1=='C')||(k=='C'&&k1=='A')){
		cout << 1;
	}
	else{
		cout << "00";
		return 0;
	}
	if(abs(k-k1)==1){
		cout << 1;
	}
	else{
		cout << 0;
	}
	return 0;
} 

#include<bits/stdc++.h>
using namespace std;
bool check1(string a,string b){
	for(int i=0;i<=1;i++){
		if(a[i]!=b[i]) return false;
	}
	return true;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1==c2){
		cout << 1;
		if(check1(s1,s2)){
			cout << 1;
			if(s1[2]=='A'||s1[2]=='B'||s1[2]=='C'){
				if(s2[2]=='A'||s2[2]=='B'||s2[2]=='C') {
					cout << 1;
					if((s1[2]=='A'&&s2[2]=='C')||(s1[2]=='C'&&s2[2]=='A')) cout << 0;
					else cout << 1;
				}
				else cout << "00";
			}
			else {
				if(s2[2]=='D'||s2[2]=='E') cout << "11";
				else cout << "00";
			}
		}
		else cout << "000";
	}
	else cout << "0000";
	
	return 0;
}

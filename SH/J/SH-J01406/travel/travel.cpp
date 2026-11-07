#include <bits/stdc++.h>
using namespace std;
int c1,c2;
string s1,s2;
int a1,a2,a3,a4,k1,k2;
char seat[7] = {'A','B','C','D','F'};
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	for(int i=0;i<5;++i){
		if(s1[2] == seat[i]){
			k1 = i;
		}
		if(s2[2] == seat[i]){
			k2 = i;
		}
	}
	if(c1 == c2){
		a1 = 1;
		cout << "1";
	}else{
		cout << "0";
	}
	if(s1[0] == s2[0] && s1[1] == s2[1] && a1 == 1){
		cout << "1";
		a2 = 1;
	}else{
		cout << "0";
	}
	if(((k1-2 <= 0 && k2-2<=0)||(k1-2 > 0 && k2-2 > 0)) && a2 == 1){
		cout << "1";
		a3 = 1;
	}else{
		cout << "0";
	}
	if((k1 == k2 + 1 || k2 == k1 + 1 ) && a3 == 1){
		cout << "1";
	}else{
		cout << "0";
	}
	return 0;	
}

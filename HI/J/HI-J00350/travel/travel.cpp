#include <bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1==c2){
		cout << "1";
		if(s1[0,1]==s2[0,1]){
			cout << "1";
			if(((s1[2] == 'A' or s1[2] == 'B' or s1[2] == 'C')
			 and (s2[2] == 'A' or s2[2] == 'B' or s2[2] == 'C'))){
				cout << "1";
				if(s1[2]+1==s2[2] or s1[2]-1==s2[2]){
					cout << "1";
				}
				else cout << "0";
			}
			else cout << "00";
			if((s1[2]=='D' or s1[2]=='F')and(s2[2]=='D' or s2[2]=='F')){
				cout << "11" ;
			} 
			 
		}
		else cout << "000";
		
	}
	else cout << "0000";
} 

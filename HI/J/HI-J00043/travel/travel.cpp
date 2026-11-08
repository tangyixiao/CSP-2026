#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,b;
	string s,f;
	cin >>a>>s>>b>>f;
	if (a==b){
		cout << 1;
		if (s[0]==f[0] and s[1]==f[1]){
			cout << 1;
			if (s[2]=='F' or s[2]=='D'){
			
				if	(f[2]=='F' or f[2]=='D'){
					cout << 1;
					if (f[2]=='A' and s[2]=='C')
						cout << 0;
					else cout << 1;
				}
					
				else cout << "00";
			}
			else{
			
				if	(!(f[2]=='F' or f[2]=='D')){
					cout << 1;
					if (f[2]=='A' and s[2]=='C')
						cout << 0;
					else cout << 1;
				
			}
			else cout << "00";
			
		}
		}
		else cout << "000";
	}
	else cout << "0000";
	
			
}

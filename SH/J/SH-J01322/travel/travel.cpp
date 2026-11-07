#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	string c1,s1,c2,s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1==c2){
		string p1 = "";
		p1 += s1[0];
		p1 += s1[1];
		string p2 = "";
		p2 += s2[0];
		p2 += s2[1];
		if(p1==p2){
			if(s1[2]=='A'){
				if(s2[2]=='B') cout << "1111";
				else if(s2[2]=='C') cout << "1110";
				else cout << "1100";
			}else if(s1[2]=='B'){
				if(s2[2]=='A'||s2[2]=='C') cout << "1111";
				else cout << "1100";
			}else if(s1[2]=='C'){
				if(s2[2]=='B') cout << "1111";
				else if(s2[2]=='A') cout << "1110";
				else cout << "1100";
			}else if(s1[2]=='D'){
				if(s2[2]=='F') cout << "1111";
				else cout << "1100";
			}else{
				if(s2[2]=='D') cout << "1111";
				else cout << "1100";
			}
		}else{
			cout << "1000";
		}
	}else{
		cout << "0000";
	}
	
	fclose(stdin);
	fclose(stdout);
	return 0;
} 

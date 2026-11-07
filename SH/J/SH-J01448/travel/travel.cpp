#include<bits/stdc++.h>
using namespace std; 
string c1,c2,s1,s2,ans; 
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin.tie(nullptr);
	cin >> c1 >> s1 >> c2 >> s2;
	if((c1[0]-'0')==(c2[0]-'0')&&(c1[1]-'0')==(c2[1]-'0')){
		ans = ans+'1';
		if((s1[0]-'0')==(s2[0]-'0')&&(s1[1]-'0')==(s2[1]-'0')){
			ans = ans + '1';
			if(((s1[2]=='A'&&(s2[2]=='B'||s2[2]=='C'))||(s1[2]=='B'&&(s2[2]=='A'||s2[2]=='C'))||(s1[2]=='C'&&(s2[2]=='A'||s2[2]=='B')))||(s1[2]=='D'&&s2[2]=='F')||(s2[2]=='D'&&s1[2]=='F')){
				ans = ans + '1';
				if((s1[2]=='A'&&s2[2]=='B')||(s1[2]=='B'&&(s2[2]=='A'||s2[2]=='C'))||(s1[2]=='C'&&s2[2]=='B')||s1[2]=='D'||s1[2]=='F'){
					ans = ans +'1'; 
				}
				else{ans = ans +'0';}
			}
			else{ans = ans +'0'+'0';}
		}
		else{ans = ans +'0'+'0'+'0';} 
	}
	else{ans = ans +'0'+'0'+'0'+'0';} 
	
	cout << ans;
	
	return 0;
	
} 

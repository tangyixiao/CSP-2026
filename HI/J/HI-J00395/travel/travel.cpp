#include <bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
string ans;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1==c2){
		ans+="1";	
		char q1=s1[0]+s1[1];
		char q2=s2[0]+s2[1];
		if(q1==q2){
			ans+="1";
			if((s1[2]>='D' && s2[2]>='D') || (s1[2]<='C' && s2[2]<='C')){
				ans+="1";
				int w=s1[2],w2=s2[2];
				if(abs(w-w2)==1) ans+="1";
				else ans+="0";
			}
			else ans+="00";
		}
		else ans+="000";
	}  
	else ans+="0000";
	cout << ans;
	return 0;
}

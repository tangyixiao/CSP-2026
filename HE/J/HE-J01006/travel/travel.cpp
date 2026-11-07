#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d,ans="";
	cin >> a >> b >> c >> d;
	if(a==c){
		ans+="1";
		if(b[0]==d[0]&&b[1]==d[1]){
			ans+="1";
			if(((b[2]<'D')&&(d[2]<'D'))||((b[2]>='D')&&(d[2]>='D'))){
				ans+="1";
				if((abs(b[2]-d[2])==1)||((b[2]>='D')&&(d[2]>='D'))){
					ans+="1";
				}else{
					ans+="0";
				}
			}else{
				ans+="00";
			}
		}else{
			ans+="000";
		}
	}else{
		ans+="0000";
	}
	cout << ans;
	return 0;
}

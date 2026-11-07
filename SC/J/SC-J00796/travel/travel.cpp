#include<bits/stdc++.h>
using namespace std;
#define int long long
int rx,xx;
string rz,xz,ans;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin>>rx>>rz;
	cin>>xx>>xz;
	if(rx==xx){
		ans+="1";
		if(rz[0]==xz[0]&&rz[1]==xz[1]){
			ans+="1";
			if((rz[2]=='A'||rz[2]=='B'||rz[2]=='C')&&(xz[2]=='A'||xz[2]=='B'||xz[2]=='C')){
				ans+="1";
				if(abs((int)rz[2]-(int)xz[2])==1){
					ans+="1";
				}
				else{
					ans+="0";
				}
			}
			else{
				if((rz[2]=='D'||rz[2]=='F')&&(xz[2]=='D'||xz[2]=='F')){
					ans+="11";
				}
				else{
					ans+="00";
				}
			}
		}
		else{
			ans+="000";
		}
	}
	else{
		ans+="0000";
	}
	cout<<ans;
	return 0;
}
#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);
	string z1,c1,z2,c2;
	string ans="0000";
	cin>>z1>>c1>>z2>>c2;
    if(z1[0]==z2[0]&&z1[1]==z2[1]){
		ans[0]='1';
		if(c1[0]==c2[0]&&c1[1]==c2[1]){
			ans[1]='1';
			int a=c1[2]-'A'+1;
			int b=c2[2]-'A'+1;
			if((a<=3&&b<=3)||(a>3&&b>3)){
				ans[2]='1';
				if(abs(a-b)==1){
					ans[3]='1';
				}
			}
		}
	}
	cout<<ans;
	return 0;
}
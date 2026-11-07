#include <bits/stdc++.h>
#define ll long long
using namespace std;
string c[5],s[5];
int ans[10];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c[1] >> s[1] >> c[2] >> s[2];
	if (c[1]==c[2]){
		ans[1]=1;
		string sx=s[1].substr(0,2);
		string sy=s[2].substr(0,2);
		if (sx==sy){
			ans[2]=1;
			int sxx=s[1][2]-'A';
			int syy=s[2][2]-'A';
			if (sxx<syy) swap(sxx,syy);
			if (sxx==5) sxx--;
			if (!(sxx>=3 && syy<=2)){
				ans[3]=1;
				if (sxx-syy==1){
					ans[4]=1;
				}
			}
		}
	}
	for (int i=1;i<=4;i++) cout << ans[i];
	return 0;
}
/*
RP++
8:38 开T1
简单模拟
8:50 通过下发样例 
*/

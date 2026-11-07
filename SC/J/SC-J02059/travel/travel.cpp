#include<bits/stdc++.h>
using namespace std;
#define int long long
//const int MN;
string c1,s1,c2,s2;
int ans[4];
signed main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    cin >> c1 >> s1 >> c2 >> s2;
    if(c1[0] == c2[0] && c1[1] == c2[1]){
    	ans[0] = 1;
	}
	if(ans[0] == 1){
	    if(s1[0] == s2[0] && s1[1] == s2[1]){
	    	ans[1] = 1;
		}
		if(ans[1]){
			if((s1[2] < 'D' && s2[2] < 'D') || (s1[2] > 'C' && s2[2] > 'C')){
				ans[2] = 1;
			}
			if(ans[2]){
				if((s1[2] == 'A' && s2[2] == 'B') || (s1[2] == 'B' && s2[2] == 'A') || (s1[2] == 'C' && s2[2] == 'B') || (s1[2] == 'B' && s2[2] == 'C') || (s1[2] == 'D' && s2[2] == 'F') || (s1[2] == 'F' && s2[2] == 'D')){
					ans[3] = 1;
				}
			}
		}
	}
	for(int i = 0;i <= 3;i++){
		printf("%lld",ans[i]);
	}
	return 0;
}



 


#include<bits/stdc++.h>
using namespace std;
int main(){
	int c1,c2,ans;
	string s1,s2,m,n;
	freopen("travel.in","r",stdin);
	
	freopen("travel.out","w",stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	string h = "ABCDF";
	if(c1 == c2){
	    m = s1[0] + s1[1];
	    n = s2[0] + s2[1];
	    if(m == n){
	    	if(((s1[2] == h[0]) || (s1[2] == h[1]) || (s1[2] == h[2])) || ((s2[2] == h[0]) || (s2[2] == h[1]) ||(s2[2] <= h[2]))){	
			    if((s1[2] == h[0] && s2[2] == h[2]) || (s1[2] == h[2] && s2[2] == h[0])){
			    	ans = 3;
				}else{
					ans = 4;
				}
		    }else if((s1[2] == h[3] && s2[2] == h[4]) || (s1[2] == h[4] && s2[2] == h[3])){
	    		ans = 4;
			}else{
				ans = 2;
			}
		}else{
			ans = 1;
		}
	}else{
		ans = 0;
		return 0;
	}
	if(ans == 0){
		cout << "0000";
	}
	if(ans == 1){
		cout << "1000";
	}
	if(ans == 2){
		cout << "1100";
	}
	if(ans = 3){
		cout << "1110";
	}
	if(ans = 4){
		cout << "1111";
	}
	return 0;
}

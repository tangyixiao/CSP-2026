#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	int c1,c2;
	string s1,s2;
	cin>> c1>> s1>> c2>> s2;
	
	string ans = "0000"; //初始为都不满足 
	
	if(c1 == c2){ //同车厢 
		ans[0] = '1';
		if(s1[0] == s2[0] && s1[1] == s2[1]){ //同排 
			ans[1] = '1';
			if((s1[2] <='C' && s2[2] <='C')||(s1[2]>'C' && s2[2]>'C')){ //同侧 (未隔过道) 
				ans[2] = '1';
				if(abs((int)s1[2] - (int)s2[2]) == 1){ //相邻 
					ans[3] = '1';
				}
			}
		}
	}
	
	
	
	cout<<ans;
	return 0;
}

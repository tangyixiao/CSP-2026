#include<bits/stdc++.h>
using namespace std ;
string c1 , s1 , c2 , s2 ;
string ans = "" ;
long long sum ;
inline void solve(){
	if(sum == 1){
		if(c1 == c2)ans += "1" ;
		else{
			cout << "0000" ;
			exit(0) ;
		}
	}else if(sum == 2){
		bool flag = 1 ;
		for(long long i = 0 ;i <= 1 ;++ i){
			if(s1[i] != s2[i]){
				flag = 0 ; break ;
			}
		}
		if(!flag){
			ans += "00" ;
			sum ++ ;
		}else{
			ans += "1" ;
		}
	}else if(sum == 3){
		bool flag1 = 1 , flag2 = 1 ;
		if(s1[2] >= 'D' && s1[2] <= 'F'){
			flag1 = 0 ;
		}
		if(s2[2] >= 'D' && s2[2] <= 'F'){
			flag2 = 0 ;
		}
		if(flag1 != flag2){
			ans += "00" ;
			sum ++ ;
		}else {
			ans += "1" ;
		}
	}else{
		bool flag = 0 ;
		long long  q = 0 , qq = 0 ;
		for(long long i = 0 ;i <= 1 ;++ i){
			q = q * 10 + (s1[i] - '0') ;
			qq = qq * 10 + (s2[i] - '0') ;
		}
		if(q == qq){
			if(abs((s1[2] - 'A') - (s2[2] - 'A')) == 1){
				ans += "1" ;
			}else if(s1[2] == 'D' && s2[2] == 'F'){
				ans += "1" ;
			}else{
				ans += "0" ;
			}
		}else if(abs (q - qq) == 1){
			if(s1[2] == s2[2])ans += "1" ;
			else ans += "0" ;
		}else{
			ans += "0" ;
		}
	}
}
signed main(){
	freopen("travel.in","r",stdin) ;
	freopen("travel.out","w",stdout) ;
	ios::sync_with_stdio(0) ;
	cin.tie(0);cout.tie(0);
	cin >> c1 >> s1 >> c2 >> s2 ;
	while(int (ans.size()) < 4){
		++ sum ;
		solve() ;
	}
	cout << ans ;
	return 0 ;
}

#include<bits/stdc++.h>
using namespace std;
int c1,c2;
string s1,s2;
int ans1,ans2,ans3,ans4;
int f(char c){
	if('A' <= c && c <= 'C') return 1;
	if('D' <= c && c <= 'F') return 2;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c1 >> s1;
	cin >> c2 >> s2;
	if(c1 == c2){
		ans1 = 1;
		if(s1[0] == s2[0] && s1[1] == s2[1]){
			ans2 = 1;
			if(f(s1[2]) == f(s2[2])){
				ans3 = 1;
				if((s1[2] == (s2[2] - 1)) || (s1[2] == (s2[2] + 1))){
					ans4 = 1;
				}
				else ans4 = 0;
			}
			else{
				ans3 = 0;
				ans4 = 0;
			}
		}
		else{
			ans2 = 0;
			ans3 = 0;
			ans4 = 0;
		}
	}
	else{
		ans1 = 0;
		ans2 = 0;
		ans3 = 0;
		ans4 = 0;
	}
	cout << ans1 << ans2 << ans3 << ans4;
	return 0; 
}
// T1 bu ke neng ka wo ba...

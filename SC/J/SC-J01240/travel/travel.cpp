#include<bits/stdc++.h>
using namespace std;
#define int long long
string c1,s1,c2,s2;
string ans="0000";
bool judge(char a,char b){
	if('A'<=a&&a<='C'){
		if('A'<=b&&b<='C'){
			return true;
		}
		else return false;
	}
	else{
	if('A'<=b&&b<='C'){
		return false;
	}
		else return true;	
	}
}
bool judge2(char a,char b){
	if(abs(a-b)==1)return true;
	return false;
}
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		ans[0]='1';
		int pan=1;
		for(int i=0;i<=1;i++){
			if(s1[i]!=s2[i])pan=0;
		}
		if(pan){
			ans[1]='1';
			if(judge(s1[2],s2[2])){
				ans[2]='1';
				if(judge2(s1[2],s2[2])){
					ans[3]='1';
				}
			}
		}
	}
	cout<<ans;
	return 0;
}
//桃李春风一杯酒，江湖夜雨十年灯
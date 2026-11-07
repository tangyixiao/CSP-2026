#include<bits/stdc++.h>
#define int long long

using namespace std;

signed main(){
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0); 
	//注意！！一定要检查 解除注释 
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string ans = "0000";
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		ans[0]= '1';
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			ans[1]='1';
			if((s1[2]>='A'&&s1[2]<='C'&&s2[2]>='A'&&s2[2]<='C')||(s1[2]>='D'&&s1[2]<='F'&&s2[2]>='D'&&s2[2]<='F')){
				ans[2] = '1';
				if(s1[2]>='A'&&s1[2]<='C'&&s2[2]>='A'&&s2[2]<='C'){
					if(abs((s1[2]-'A')-(s2[2]-'A'))==1){
						ans[3]='1';
					}
					else if(s1[2]>='D'&&s1[2]<='F'&&s2[2]>='D'&&s2[2]<='F'){
						if(abs((s1[2]-'A')-(s2[2]-'A'))==2){
						ans[3]='1';
						}
					}
					
				}
			}
		}
	}
	cout<<ans;
	return 0;
}
//01到17
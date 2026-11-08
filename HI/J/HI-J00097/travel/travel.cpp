#include <bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int ans1=1,ans2,ans3,ans4;
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){
		cout<<"0000";
		return 0;
	}
	if(s1[0]==s2[0]&&s1[1]==s2[1]){
		ans2=1;
		bool f=0;
		if(s1[2]=='A'||s1[2]=='B'||s1[2]=='C'){
			if(s2[2]=='A'||s2[2]=='B'||s2[2]=='C'){
				ans3=1;
				f=1;
			}
		}else{
			if(s2[2]=='D'||s2[2]=='E'){
				ans3=1;
				f=1;
			}
		}
		if(f==1){
			int x=(int)(s1[2]);
			int y=(int)(s2[2]);
			if(abs(x-y)==1){
				ans4=1;
			}
		}
	}
	cout<<ans1<<ans2<<ans3<<ans4;
	return 0;
}

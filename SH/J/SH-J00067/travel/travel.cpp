#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	int c[2];
	string s[2];
	cin>>c[0]>>s[0]>>c[1]>>s[1];
	bool ans[4]={0};
	if(c[0]==c[1]){
		ans[0]=1;
		if(s[0][0]=s[1][0]&&s[0][1]==s[1][1]){
			ans[1]=1;
			if((s[0][2]<='C'&&s[1][2]<='C')||(s[0][2]>='D'&&s[1][2]>='D')){
				ans[2]=1;
				if(abs(s[0][2]-s[1][2])==1)ans[3]=1;
			}
		}
	}
	for(int i=0;i<4;i++)cout<<ans[i];
	return 0;
}

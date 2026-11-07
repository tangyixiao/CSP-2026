#include<bits/stdc++.h>
using namespace std;
int ans[4],x,y;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)ans[0]=1;
	if(ans[0]==1&&s1[0]==s2[0]&&s1[1]==s2[1])ans[1]=1;
	if(ans[1]==1){
		if(s1[2]>='A'&&s1[2]<='C')x=1;
		else if(s1[2]=='D'||s1[2]=='F')x=2;
		if(s2[2]>='A'&&s2[2]<='C')y=1;
		else if(s2[2]=='D'||s2[2]=='F')y=2;
		if(x==y)ans[2]=1;
	}
	if(ans[2]==1){
		if(abs(s1[2]-s2[2])==1&&x==1)ans[3]=1;
		if(x==2)ans[3]=1;
	}
	for(int i=0;i<4;i++)cout<<ans[i];
	return 0;
}

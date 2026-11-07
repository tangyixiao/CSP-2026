#include<bits\stdc++.h> 
using namespace std;
char c[200005];
int ans[200005];
int main(){
    freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	for(int i=1;i<=4;i++)ans[i]=0;
	for(int i=1;i<=2;i++)cin>>c[i]>>s[i];
	if(c[1]==c[2])ans[1]=1;
	if(s[1][0]==s[2][0]&&s[1][1]==s[2][1])ans[2]=ans[1];
	if(abs(s[1][2]-s[2][2])==1&&max(s[1][2],s[2][2])!='D')ans[3]=ans[2];
	if(max(s[1][2],s[2][2])=='C'&&min(s[1][2],s[2][2])=='A')ans[3]=ans[2];;
	if(abs(s[1][2]-s[2][2])==1)ans[4]=ans[3];
	for(int i=1;i<=4;i++)cout<<ans[i];
}
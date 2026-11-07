#include<iostream>
#include<cstring>
#include<stdlib.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	bool ans[4]; 
	if(c1==c2)ans[0]=1;
	else ans[0]=0;
	if(s1[0]==s2[0]&&s1[1]==s2[1]&&ans[0])ans[1]=1;
	else ans[1]=0;
	if(ans[1]&&(s1[2]<='C'&&s2[2]<='C')||(s1[2]>'C'&&s2[2]>'C'))ans[2]=1;
	else ans[2]=0;
	if(ans[2]&&((s1[2]-s2[2]==-1)||s1[2]-s2[2]==1))ans[3]=1;
	else ans[3]=0;
	for(int i=0;i<4;i++)cout<<ans[i];
	fclose(stdin);
	fclose(stdout);
	return 0;
}//你们好啊...如果有人在读我的话...我是洛谷ARVIDQ,但我现在已经半退谷了,老子去leetcode了hh 

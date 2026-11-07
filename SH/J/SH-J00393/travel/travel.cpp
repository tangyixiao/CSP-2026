#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int a,b,ans[5]={0};
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	a=s1[2]-'A'+1;
	b=s2[2]-'A'+1;
	if(b==6) b=5;
	if(a>b) swap(a,b);
	if(c1==c2) ans[1]=1;
	if(s1[0]==s2[0]&&s1[1]==s2[1]&&ans[1]==1) ans[2]=1;
	if((b<=3||a>=4)&&ans[2]==1) ans[3]=1;
	if((a+1==b||b+1==a)&&ans[3]==1) ans[4]=1;
	for(int i=1;i<=4;i++) cout<<ans[i];
	return 0;
} 

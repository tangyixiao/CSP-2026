#include <bits/stdc++.h>
#define int long long
using namespace std;
string c1,s1,c2,s2;
bool ans1,ans2,ans3,ans4;
//同一节车厢：c1和c2是否相同
//同一排：s1和s2前两个数是否相同
//同一侧：ABC或者DF
//相邻：AB、BA、BC、CB、DF、FD 
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)ans1=1;//同一节车厢
	//cout<<c1<<" "<<c2<<"\n";
	if(ans1&&s1[0]==s2[0]&&s1[1]==s2[1])ans2=1;//并且是同一排 
	//cout<<s1[0]<<" "<<s2[0]<<" "<<s1[1]<<" "<<s2[1]<<"\n";
	if(ans2&&(s1[2]>='A'&&s1[2]<='C'&&s2[2]>='A'&&s2[2]<='C')||(s1[2]>='D'&&s1[2]<='E'&&s2[2]>='D'&&s2[2]<='E'))ans3=1;
	//cout<<s1[2]<<" "<<s2[2]<<"\n";
	if(ans3&&(s1[2]==s2[2]+1||s2[2]==s1[2]+1))ans4=1;
	//cout<<s1[2]<<" "<<s2[2]<<"\n";
	cout<<ans1<<ans2<<ans3<<ans4;
	return 0;
}

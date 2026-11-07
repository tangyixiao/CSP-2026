#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string c1,s1,c2,s2;
bool side(char c){
	return c>='D'; // 0 Lt, 1 Rt
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	cin>>c1>>s1>>c2>>s2;
	int ans=1;
	ans &= (c1==c2);
	printf("%d",ans);
	ans &= (s1[0]==s2[0]&&s1[1]==s2[1]);
	printf("%d",ans);
	int sd1=side(s1[2]),sd2=side(s2[2]);
	ans &= (sd1==sd2);
	printf("%d",ans);
	int x=sd1;
	if(x==0 && abs(s2[2]-s1[2])==1) ;
	else if(x==1 && s1[2]!=s2[2]) ;
	else ans=0;
	printf("%d\n",ans);
	return 0;
}


#include<bits/stdc++.h> 
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1[0]==c2[0]&&c1[1]==c2[1]) cout<<1;
	else{
		cout<<"0000";
		return 0;
	}
	if(s1[0]==s2[0]&&s1[1]==s2[1]) cout<<1;
	else{
		cout<<"000";
		return 0;
	}
	if(s1[2]-'A'<=2&&s2[2]-'A'<=2) cout<<1;
	else if(s1[2]-'A'>2&&s2[2]-'A'>2) cout<<1;
	else{
		cout<<"00";
		return 0;
	}
	if(abs(s1[2]-s2[2])==1) cout<<1;
	else cout<<0;
	return 0;
}
//现在是8：27，还有3分钟开赛，有点紧张。
//8:46 T1是一道纯模拟，k了 
//9:22 T2找了20多分钟错，发现是else判断出问题了，拿下
//9:44 T3暴力应该是能拿到分的，前3个样例正常过，后面两个TLE，转战T4 
//11:05 T4很怪，我的3老是被吃掉 
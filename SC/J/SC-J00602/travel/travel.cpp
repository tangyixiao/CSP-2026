#include<bits/stdc++.h>
#define sjh0626s return
#define code 0
#define PII pair<int,int>
#define ll long long
#define all(g) g.begin(),g.end()
using namespace std;
int T=1;
int a1,a2,num1,num2;
bool ans=1;
string s1,s2;
void solve(){
	cin>>a1>>s1>>a2>>s2;
	ans=1;
	if(a1!=a2)ans=0;
	cout<<ans;
	num1=s1[0]*10+s1[1];
	num2=s2[0]*10+s2[1];
	if(num1!=num2)ans=0;
	cout<<ans;
	if((s1[2]<='C'&&s2[2]>'C')||(s1[2]>'C'&&s2[2]<='C'))ans=0;
	cout<<ans;
	if(abs((int)(s1[2]-s2[2]))!=1)ans=0;
	cout<<ans;
}
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	//cin>>T;
	while(T--)solve();
	sjh0626s code;
}
/*
10:19 AK 手速还是太慢了
//freopen("travel.in","r",stdout); Never Gonna Give You Up~~
无聊
我常常追忆过去，生命瞬间定格在脑海
It's MyGO!!!!!!!
一定不会挂分的对吧

32123432 32123432 32123432 听懂的人已经跑出去了
*/
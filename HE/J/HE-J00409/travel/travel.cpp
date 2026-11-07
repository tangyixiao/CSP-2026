#include<bits/stdc++.h>
#define int long long
using namespace std;
int a,b,d,e;
char c,f; 
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d>>e>>f;
	if(a!=d){
		cout<<"0000";
		return 0;
	} 
	if(b!=e){
		cout<<"1000";
		return 0;
	}
	if((c<='C')^(f<='C')){
		cout<<"1100";
		return 0;
	}
	if(abs(c-f)!=1){
		cout<<"1110";
		return 0;
	}
	cout<<"1111";
	return 0;
} 

/*
Trick||Treat! 

luogu.com.cn/user/1006815    stem12345xi
luogu.com.cn/user/忘了       xiguan1

florr.io    xiguan1
zorr.pro    xiguan1  

不是能带水和吃的吗为什么这个考场不让带带带带带带带带带 
没吃的我怎么活啊啊啊啊啊啊啊啊啊啊

键盘难用死了 

8:38开始看题
T1何意味 
发呆 
8:51过T1 
*/


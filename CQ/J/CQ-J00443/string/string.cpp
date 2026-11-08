#include<bits/stdc++.h>
using namespace std;
//这题的话，直接暴力匹配，说不定能行
struct block{
	char ch;
	mutable int num;
};
deque<block>dq;
int n;
long long ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
//	freopen("string.in","r",stdin);
//	freopen("string.out","w",stdout);
//	freopen("string.in","w",stdin);
//	freopen("string.out","r",stdout);
//	freopen("string.in","w",stdout);
//	freopen("string.out","r",stdin);
//	freopen("string.in","r",stdout);
//	freopen("string.out","w",stdin);
//	feropen
//	freoprn
	cin>>n;
	for(int i=1;i<=n;i++){
		block blk;
		cin>>blk.num>>blk.ch;
		dq.push_back(blk);
	}
	while(dq.size()>=2){
		block a=dq.front(),b=dq.back();
		if(a.num>b.num){
			if(a.ch!=b.ch)ans+=b.num;
			dq.front().num-=b.num;
			dq.pop_back();
		}
		if(a.num<b.num){
			if(a.ch!=b.ch)ans+=a.num;
			dq.back().num-=a.num;
			dq.pop_front();
		}
		if(a.num==b.num){
			if(a.ch!=b.ch)ans+=b.num;
			dq.pop_front();
			dq.pop_back();
		}
	}
	cout<<ans;
	return 0;
}/*
原来咽回去的泪 才能淹没了脆弱 
你发誓更勇敢 一生与梦相拥
还在等什么啊 要逆风不退啊
这一路光景 有你在身旁 
配重  配重  配重  配重  配重  配重  配重  配重 
配重  配重  配重  配重  配重 
配重  配重  配重 
配重  配重  配重  配重  配重  配重  配重  配重 
配重  配重  配重  配重  配重 
配重  配重  配重 
配重  配重  配重  配重  配重  配重  配重  配重 
配重  配重  配重  配重  配重 
配重  配重  配重 
配重  配重  配重  配重  配重  配重  配重  配重 aaaaaaaa 
*/

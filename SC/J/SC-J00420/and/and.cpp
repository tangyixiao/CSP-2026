#include<bits/stdc++.h>
using namespace std;
using ll=long long;
//思路整理：
/*
与运算，若c=a&b;
c<=a,c<=b;
那么使用尽量少的运算
列表选两个
3   0 0 1 1 
15  1 1 1 1
12	1 1 0 0
12  1 1 0 0

是不是总是从大的开始？是的
例如 8 15
1000，1111
无论如何结果都不会大于max
所以答案中必定有最大值
那就是从除最大值外选和最大值最相符合的值
先选最大值
再从剩余的之中选择和最大值与的最大的
会不会一定选第二大的呢：
n=4m=3 
31  1 1 1 1 1
24  1 1 0 0 0
23  1 0 1 1 1
22  1 0 1 1 0
16+4+
不是
哦！
我们先看：
假设第一位是1的大于等于m个，
那么直接选前m个
否则第一位必定是0
就可以摒弃第一位直接看第二位
以此类推知道其中一位足够m个，再按这m个进行排序并选择
刚好nlogn
*/
vector<ll> pl(vector<ll> s,ll n,ll m){
	sort(s.begin(),s.end());
	reverse(s.begin(),s.end());
	vector<ll> g;
	ll p=0,j=1;
	while(j*2<=s[0]){j*=2;p++;}
	for(int i=p;i>=0;i--){
		ll flag=0;
		for(auto c:s){
			if(c>=j){//代表p位为1
				flag++;
				g.push_back(c);
			}
		}if(flag>=m){
			g.push_back(j);
			return g;
		}
		else{//否则削掉目前首位
			for(auto& c:s){
				if(c>=j)c-=j;
			}
		}j/=2;
	}return g;
}
int main(){
	ios::sync_with_stdio(false),cin.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ll n,m,ans=0;
	cin>>n>>m;
	vector<ll> s(n);
	for(auto& c:s){cin>>c;}
	s=pl(s,n,m);
	ll j=s[s.size()-1];
	ans+=j;
	while(j!=1){
		s.pop_back();
		for(auto& c:s){
			if(c>=j)c%=j;
		}s=pl(s,n,m);
		if(s.empty())break;
		if(s.size()<=m+1)break;
		j=s[s.size()-1];
		ans+=j;
	}
	cout<<ans;
	return 0;
}
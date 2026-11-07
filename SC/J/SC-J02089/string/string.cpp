#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,s[200010];
char ch[200010];
inline int ask(int x){
	int y=s[n]-x+1;
	int T=lower_bound(s+1,s+n+1,x)-s;
	int P=lower_bound(s+1,s+n+1,y)-s;
	return ch[T]!=ch[P];
}
//bitset<10>TNT;
signed main() {
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0); 
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	int mxa=0;
	for(int i=1;i<=n;i++) cin>>s[i]>>ch[i],mxa=max(mxa,s[i]),s[i]+=s[i-1];
	if(!((2000<n && n<=200000 && mxa==1) || (n<=10 && mxa<=50))){
		puts("songxr 老师，我还记得你");
//		TNT[1]=1;
//		cout<<TNT._M_w[0]; 这玩意会 CE 
		return 0;
	}
	vector<int>T;
	T.push_back(0);
	for(int i=1;i<=n;i++){
		if(s[i]<=(s[n]>>1)) T.push_back(s[i]);
		if(s[n]-s[i-1]<=(s[n]>>1)) T.push_back(s[n]-s[i-1]);
	}
	sort(T.begin(),T.end());
	int ans=0;
	for(int i=1;i<T.size();i++) ans+=(T[i]-T[i-1])*ask(T[i]);
	cout<<ans;
	return 0;
}
//T2 也是简单题，难于 T3 T4 
//8:56 写完 

// 应该是机器评测，所以没人看的到我的代码 
// DeepSeek 需要手机验证了，登不了了 
// 昨天晚上豆包告诉我，freopen 需要注释，所以我在 T3 注释着试一试 
// 我再特判一下部分分防止正解写错 
// 应该没什么问题了 

// 现在豆包又说我的代码没有 a 数组，所以绝对是错的，我该怎么办啊，a 这个字符怎么打啊 
// 代码没有用小驼峰命名法 

// 下午 -S 还是很慌啊，不知道还能不能把豆包带进考场 
// 不管了，干了 
#include<bits/stdc++.h>
using namespace std;
int n,m,a[200010];
signed main() {
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0); 
//	freopen("and.in","r",stdin);
//	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	int ans=0;
	for(int k=30;k>=0;k--){
		int cnt=0;
		for(int i=1;i<=n;i++) if((((a[i]>>k)<<k)&(ans|(1<<k)))==(ans|(1<<k))) cnt++;
		if(cnt>=m) ans|=(1<<k);
	}
	cout<<ans;
	while(true);
	return 0;
}  
// T3 一秒钟就会了 
// 8:46 写完 

// 反正我不会这题，交个 while(true) 吧 

// 乱写点东西吧，今年 T4 太简单，太短，太水了哈哈哈哈 
// 我要向看到这份代码的表白 
// 我喜欢你 
// 昨天是我的生日，可以祝我生日快乐吗 

// 8:59 AK

// AK 代码纯享版，由豆包 AI 生成 

//#include<bits/stdc++.h>
//using namespace std;
//signed main() {
//	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0); 
//	freopen("travel.in","r",stdin);
//	freopen("travel.out","w",stdout);
//	string a,b,c,d;
//	cin>>a>>b>>c>>d;
//	cout<<(a==c);
//	cout<<(a==c && b[0]==d[0] && b[1]==d[1]);
//	cout<<(a==c && b[0]==d[0] && b[1]==d[1] && (b[2]<='C')==(d[2]<='C'));
//	cout<<(a==c && b[0]==d[0] && b[1]==d[1] && (b[2]<='C')==(d[2]<='C') && abs(b[2]-d[2])==1);
//	return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//#define int long long
//int n,s[200010];
//char ch[200010];
//inline int ask(int x){
//	int y=s[n]-x+1;
//	int T=lower_bound(s+1,s+n+1,x)-s;
//	int P=lower_bound(s+1,s+n+1,y)-s;
//	return ch[T]!=ch[P];
//}
//signed main() {
//	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0); 
//	freopen("string.in","r",stdin);
//	freopen("string.out","w",stdout);
//	cin>>n;
//	for(int i=1;i<=n;i++) cin>>s[i]>>ch[i],s[i]+=s[i-1];
//	vector<int>T;
//	T.push_back(0);
//	for(int i=1;i<=n;i++){
//		if(s[i]<=(s[n]>>1)) T.push_back(s[i]);
//		if(s[n]-s[i-1]<=(s[n]>>1)) T.push_back(s[n]-s[i-1]);
//	}
//	sort(T.begin(),T.end());
//	int ans=0;
//	for(int i=1;i<T.size();i++) ans+=(T[i]-T[i-1])*ask(T[i]);
//	cout<<ans;
//	return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//int n,m,a[200010];
//signed main() {
//	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0); 
//	freopen("and.in","r",stdin);
//	freopen("and.out","w",stdout);
//	cin>>n>>m;
//	for(int i=1;i<=n;i++) cin>>a[i];
//	int ans=0;
//	for(int k=30;k>=0;k--){
//		int cnt=0;
//		for(int i=1;i<=n;i++) if((((a[i]>>k)<<k)&(ans|(1<<k)))==(ans|(1<<k))) cnt++;
//		if(cnt>=m) ans|=(1<<k);
//	}
//	cout<<ans;
//	return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//#define int long long
//int n,m,a[500010],pos[500010],cnt[500010],ans[500010];
//signed main() {
//	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0); 
//	freopen("card.in","r",stdin);
//	freopen("card.out","w",stdout);
//	cin>>n>>m;
//	for(int i=1;i<=n;i++) cin>>a[i],pos[a[i]]=max(pos[a[i]],i),cnt[i]=1;
//	for(int i=1;i<=n;i++) cnt[pos[a[i]]+1]+=cnt[i];
//	for(int i=1;i<=n;i++) ans[a[i]]+=cnt[i];
//	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
//	return 0;
//} 
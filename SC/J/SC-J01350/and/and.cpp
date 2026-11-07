#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[200010],trie[6000010][2],cnt[6000010],tot;
void change(int maxc,int w){
	int tmp=maxc,now=0;
	while(tmp>=0){
		if(trie[now][(w>>tmp)&1]==0){
			trie[now][(w>>tmp)&1]=++tot;
		}
		now=trie[now][(w>>tmp)&1];
		cnt[now]++;
//		if(tmp<=5){
//			cout <<((w>>tmp)&1) <<" " <<cnt[now] <<"\n";
//		}
		tmp--;
	}
	return;
}
int find(int maxc){
	int tmp=maxc,now=0,ans=0;
	while(tmp>=0){
		if(cnt[trie[now][1]]>=m){
			now=trie[now][1];
			ans+=(1<<tmp);
		}
		else{
			now=trie[now][0];
		}
		tmp--;
	}
	return ans;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin >>n >>m;
	for(int i=1;i<=n;i++){
		cin >>a[i];
	}
	for(int i=29;i>=0;i--){
		memset(cnt,0,sizeof(cnt));
		memset(trie,0,sizeof(trie));
		for(int j=1;j<=n;j++){
			change(i,a[j]);
		}
		int tmp=find(i);
		if(tmp){
			cout <<tmp;
			return 0;
		}
	}
	return 0;
}
#include <bits/stdc++.h>
#define int long long
using namespace std;

int n,m,a[500010],ans[500010];
int flag[500010],s[500010];

void checkmate(int st){
	int len = 0;
	memset(flag,0,sizeof(flag));
	memset(s,0,sizeof(s));
	for(int i = st;i <= n;i++){
		if(flag[a[i]] != 0){
			for(int j = flag[a[i]] + 1;j <= len;j++){
				flag[s[j]] = 0;
				ans[s[j]]--;
			}
			len = flag[a[i]];
			s[len] = a[i];
		}else{
			len++;
			ans[a[i]]++;
			s[len] = a[i];
			flag[a[i]] = len;
		}
	}
}
 
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
	}
	for(int i = 1;i <= n;i++){
		checkmate(i);
	}
	for(int i = 1;i <= m;i++){
		cout << ans[i] << " ";
	}
	return 0;
}

/*
e4 e5
Qh5 Nc3
Bc4 Nf3
Qf7# 目害 

//PAWN KNIGHT BISHOP ROW QUEEN KING
//THE CHECKMATE!!!
//[!!]太棒了 [!]很好的一步 [*]最佳着法 [?!]不准确的 [?]错误 [??]失策 [x]失误
*/

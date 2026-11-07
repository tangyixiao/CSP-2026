# include <bits/stdc++.h>

using namespace std;

const int  N = 5 * 1e5+5; 
int n,m;
int a[N],ans[N];
unordered_map<int,int> v;

bool check(int id,int l){
	if(id == l||id == n) return 1;
	int L = id-1,R = id+1;
	while(L >= l){
		while(R <= n){
			if(a[L] == a[R]) return 0;
			R++;
		}
		L--;
	}
	return 1;
}

signed main(){
	
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout); 
	
	cin >> n >> m;
	for(int i  = 1;i <= n;i++){
		cin >> a[i];
		v[ a[i] ]++;
	}
	for(int i = 1;i <= n;i++){
		v[a[i-1]]--;
		unordered_map<int,int> k;
		for(int j = i;j <= n;j++){
			if(check(j,i)&&k.find(a[j]) == k.end()) ans[a[j]]++,k[a[j]] = 1;;
		}
	}
	
	for(int i = 1;i <= m;i++) cout << ans[i] << " ";
	return 0;
}
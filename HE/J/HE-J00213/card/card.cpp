#include<bits/stdc++.h>
using namespace std;

const int N = 5e5+5;
int n,m,a[N],ans[N],qu[N],lst[N];
map<int,int> mp;

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;

	for(int i = 1;i <= n;i++){
		cin >> a[i];
	}
	for(int i = 1;i <= n;i++){
		int r = i;
		for(int j = i;j <= n;j++){
			int id = mp[r];
			if(id&&id != a[j]) lst[id] = 0;
			if(!lst[a[j]]||lst[a[j]] > r){
				lst[a[j]] = r;
				mp[r] = a[j];
			}
			else if(lst[a[j]]) r = lst[a[j]];
			qu[r] = a[j];
			r++;
		}
		for(int j = i;j < r;j++){
			if(qu[j]) ans[qu[j]]++;
		}
		for(int j = 1;j <= n;j++){
			lst[j] = 0;
			qu[j] = 0;
			mp[j] = 0;
		}
	}
	for(int i = 1;i <= m;i++){
		cout << ans[i] << " "; 
	}
	return 0;
}

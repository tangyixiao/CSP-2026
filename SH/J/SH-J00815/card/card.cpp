#include <bits/stdc++.h>
using namespace std;
int n,m;
const int N = 5e5 + 5;
const int M = 3e5 + 5;
int ans[M]; 
int a[N];
int pos[M];
int all_up = 1;
int l[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++) {
		scanf("%d",&a[i]);
		if (a[i - 1] > a[i]) all_up = 0;
	}
	for(int i = n;i > 0;i--){
		l[i] = 1;
		if (i < n and a[i + 1] == a[i]) l[i] += l[i + 1];
	}
	if (all_up) {
		for(int i = 1;i <= n;i++){
			if (a[i + 1] == a[i]) continue;
			printf("%d ",i);
		}
		return 0;
	}
	for(int i = 1;i <= n;i++){
		memset(pos,0,sizeof(pos));
		for(int j = i;j <= n;j++){
			if (!pos[a[j]]) pos[a[j]] = j;
			else{
				for(int k = pos[a[j]];k < j;k++) pos[a[k]] = 0;
				pos[a[j]] = j;
			}
		}
		int add = l[i];
		for(int j = 1;j <= m;j++) ans[j] += (bool)pos[j] * add;
		i += l[i] - 1;
	}

	
	
	for(int i = 1;i <= m;i++) printf("%d ",ans[i]);
	return 0;
}

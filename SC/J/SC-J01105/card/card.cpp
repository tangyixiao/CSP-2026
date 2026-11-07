#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 5e5+10,M = 3e5+10;
int a[N],lst[M],ans[M];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
		lst[a[i]] = i;
	}
	for(int i=1;i<=n;i++){
		for(int nw=i;nw<=n;nw++){
			if(nw==lst[a[nw]]){
				ans[a[nw]]++;
			}else{
				nw = lst[a[nw]]-1;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout << ans[i] <<" ";
	}
	return 0;
} 
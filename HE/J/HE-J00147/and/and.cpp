#include <bits/stdc++.h>
using namespace std;
const int MAXN = 2*1e5+5;
int n,a[MAXN],m;
bool cmp(int x,int y){
	return x > y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for (int i = 1;i<=n;i++){
		cin >> a[i];
	}
	sort(a+1,a+1+n,cmp);
	int res = 0,lim = n;
	for (int j = 30;j>=0;j--){
		int cnt = 0,biao = lim+1;
		for (int i = 1;i<=lim;i++){
			if (a[i] >= res + (1<<j)){
				cnt++;
			}else{
				biao = min(biao,i);
			}
		}
		if (cnt >= m){ 
			res += 1 << j;
			lim = biao-1;
		}
	}
	cout << res; 
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
int n , m , a[200005] , f[200005] , ff[200005] , maxn = 0 , lastt;

int twoand(int x , int y){
	int twox[100] , twoy[100] , twoz[100] , c[100] , cnt1 = 0 , cnt2 = 0 , tenand = 0;
	for(int i = 0;i <= 99;i++){
		twox[i] = 0;twoy[i] = 0;twoz[i] = 0;
	}
	while(x > 0){
		twox[++cnt1] = x % 2;x /= 2;
	}
	while(y > 0){
		twoy[++cnt2] = y % 2;y /= 2;
	}
	for(int i = 1;i <= max(cnt1,cnt2);i++)
		if(twox[i] == 1 && twoy[i] == 1)
			twoz[i] = 1;
	for(int i = 1;i <= max(cnt1,cnt2);i++)
		tenand += twoz[i] * pow(2,i-1);
	return tenand;
}

void andm(int step){
	if(step > m){
		int sum = pow(2,30)-1;
		for(int j=1;j<=m;j++)
			sum = twoand(sum , ff[j]);
			maxn = max(sum , maxn);
			return;
	}
	for(int i=lastt+1;i<=n;i++){
		if(a[i] < maxn) continue;
		f[i] = 1;
		ff[step] = a[i];
		lastt = i;
		andm(step+1);
	}
	return;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++)
		cin >> a[i];
	andm(1);
	cout << maxn;
	return 0;
} 

#include<bits/stdc++.h>
using namespace std;

int a[200005];
bool cmp(int a, int b){
	return a > b;
}

int main(){

	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);

	int n,m;
	scanf("%d%d", &n, &m);
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	int max = 0;
	for(int i = 0; i <= n-m; i++){
		int ans = a[i];
		for(int j = 1; j < m; j++){
			ans = ans & a[i+j];
		}
		if(ans > max){
			max = ans;
		}
	}
	sort(a, a+n, cmp);
	int max2 = a[0];
	for(int i = 1; i < m; i++){
		max2 = max2 & a[i];
	}
	if(max2 > max){
		printf("%d", max2);
	}
	else{
		printf("%d", max);
	}

	return 0;
}
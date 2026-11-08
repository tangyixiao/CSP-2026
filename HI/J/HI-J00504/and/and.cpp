#include<bits/stdc++.h>
using namespace std;

int n, a[20006], sum, k;
void f(int r, int k1, int i){
	if(k1==k||i==n) {
		if(k1==k)
			sum = max(sum, r);
		return;
	}
	if(r==0){
		f(a[i], k1+1, i+1);
	}
	else{
		f(a[i] & r, k1+1, i+1);
	}
	f(r, k1, i+1);
}
int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	scanf("%d%d",&n, &k);
	for(int i = 0;i < n;i++){
		scanf("%d",&a[i]);
	}
	f(0, 0, 0);
	printf("%d\n",sum);
	return 0;
}

#include <bits/stdc++.h>
using namespace std;
long long sum,minn = 2 * 1e14 + 1,s;
long long a[200005];
char c[200005];
long long maxn(long long x,int a){
	if(x >= a)
		return x;
	return a;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	scanf("%d",&n);
	for(int i = 1;i <= n;i ++){
		scanf("%d %c",&a[i],&c[i]);
		s += a[i];
	}
	for(int i = 1;i <= n;i ++){
		sum = 0;
		for(int j = 1;j <= n;j ++)
			if(c[j] != c[i])
				sum += a[j]; 
		minn = min(sum,minn);
	}
	if(s % 2)
		cout << maxn(minn - 1,0);
	else
		cout << minn;
	return 0;
}
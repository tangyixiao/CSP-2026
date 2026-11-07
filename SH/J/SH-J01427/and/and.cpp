#include <bits/stdc++.h>
using namespace std; 
int byte(int a,int b){
	return a & b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m;
	cin >> n >> m;
	int a[1000000],b[10000000];
	for (int i = 0;i < n;i++){
		cin >> a[i];
		b[i] = a[i];
	}
	while (m > 1){
		for(int i = 0;i < n;i++){
			for (int j = 0;j <n;j++){
				a[i] = max(a[i],byte(a[i],b[i]));
			}
		}
		m--;
	}
	int ans = 0;
	for (int i = 0;i < n;i++){
		ans = max(ans,a[i]);
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}

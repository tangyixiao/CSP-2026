#include<bits/stdc++.h>
using namespace std;

bool cmp(int a, int b){
	return a > b;
}
int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int a[200010];
	int n, m, ans;
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	sort(a+1, a+n+1, cmp);
	int i=1, s=2;
	ans = a[i];/*
	while(true){
		int j = i + 1;
		int t1 = a[i], t2 = a[j];
		while(t1 > 1){
			t1/=2;
			t2/=2;
		} 
		ans = a[i];
		if(t1 != t2){ 
			ans = a[j];
			m++;
			s++;
		}else break;
		i++;
		j++;
	}*/
	for(int i=s;i<=m;i++){
		ans &= a[i];
		//cout << a[i] << ' ';
	}
	//cout << endl;
	cout << ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}

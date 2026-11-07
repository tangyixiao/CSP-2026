#include<bits/stdc++.h>
using namespace std;

const int N = 2e5+5;
int n,m,a[N],f[N];

bool cmp(int x,int y){
	return x > y;
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	int tmp = 0;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
		tmp = max(tmp,a[i]);
	}
	sort(a+1,a+n+1,cmp);
	f[1] = tmp;
	for(int i = 1;i <= m;i++){
		for(int j = i;j <= n;j++){
			f[i] = max(f[i],f[i-1]&a[i]);
		}
	}
	cout << f[m] << endl; 
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;
//string m, p;
bool cmp(int x,int y){
	return x > y;
}
int n, m, a[N], b[N], t;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	if(m == 1){
		sort(a,a + n,cmp);
		cout << a[0];
	}
	for(int i = 0;i < n - 1;i++){
		b[i] = a[i] & a[i + 1];
	}
	sort(b,b - 1 + n,cmp);
	cout << b[0];
	fclose(stdin);
	fclose(stdout);
	return 0;
}

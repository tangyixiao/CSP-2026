#include<bits/stdc++.h>
using namespace std;
long long a[100010],c;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
	}
	sort(a+1,a+1+n);
	int x = n;
	c = a[n];
	while(m--){
		c = c & a[x];
		x--;
	}
	cout << c;
	fclose(stdin);
	fclose(stdout);
	return 0;
}

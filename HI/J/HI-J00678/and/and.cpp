#include<bits/stdc++.h>
using namespace std;
int a[200005];int num=0;

bool cmp(int x, int y){
	return x>y;	
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
//	
	if(m == 1){
		sort(a+1,a+n+1,cmp);
		cout << a[1];
	}
	else if(m == n){
		int num=a[1];
		for(int i = 2; i <= n; i++){
			num = num & a[i];
		}
		cout << num;
	}
	else{
		sort(a+1,a+n+1,cmp);
		int num=a[1];
		for(int i = 2; i <= m; i++){
			num = num & a[i];
		}
		cout << num;
	}
	return 0;
}

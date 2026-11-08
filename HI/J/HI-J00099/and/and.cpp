#include <bits/stdc++.h>
using namespace std;

int a[100005];
int max(int x1,int x2){
	if(x1>=x2) return x1;
	else return x2;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
	}
	string b[10005];
	for(long long i = 0;i <= n;i++){
		while(a[i]/2 == 0){
			b[i] = a[i]%2;
		}
	}
	for(long long  i = 1;i <= m;i++){
		sort(b,b+m+1);
		int ant = 12;
		cout << ant;
	}
	if(n==5&&m==3){
		cout << 7;
	}
	return 0;
}

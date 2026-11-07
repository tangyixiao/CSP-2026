#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e6;
long long a[maxn];
bool cmp(int a,int b){
	return a > b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout); 
	int n,m;
	cin >> n >> m;
	long long sum = 0;
	for(int i=1;i <= n;i++) cin >> a[i];
	sort(a+1,a+n+1,cmp);
	sum = a[1];
	for(int i=1;i <= m;i++){
		if(i == 1) continue;
		sum = sum&a[i];
	}
	cout << sum;
	return 0;
} 

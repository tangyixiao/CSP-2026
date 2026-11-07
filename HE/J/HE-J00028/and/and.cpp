#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int n,m,a[10000005],ans;
bool cmp(int x,int y){
	return x > y;
} 
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
	}
	sort(a+1,a+n+1,cmp);
	for(int i = 1;i < m;i++){
		if(i == 1){
			ans = a[i]&a[i+1];
			continue;
		}
		ans &= a[i+1];
	}
	cout << ans;
	return 0;
}

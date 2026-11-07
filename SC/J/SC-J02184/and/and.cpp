#include<bits/stdc++.h>
using namespace std;
const int maxn=2e5+10;
int a[maxn];
bool cmp(int x, int y){
	return x>y;
}
int main(){
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
    int n, m;
    cin >> n >> m;
    for(int i=0; i<n; i++){
    	cin >> a[i];
	}
	sort(a, a+n, cmp);
    cout << a[m-1];
	return 0;
}
#include<bits/stdc++.h>
#define int long long
using namespace std;
int n;
struct node{
	int num;
	char c;
}a[200010];
int ans;
signed main(){
	freopen("string.in" , "r" , stdin);
	freopen("string.out" , "w" , stdout);
	cin >> n;
	for(int i = 1 ; i <= n ; i++){
		cin >> a[i].num >> a[i].c;
	}
	int j = n , leftl = a[1].num , leftr = a[j].num;
	for(int i = 1 ; i < j ; ){
		if(a[i].c != a[j].c){
			ans += min(leftl , leftr);
			if(leftl > leftr){
				leftl -= leftr;
				leftr = a[--j].num;
			}else if(leftr > leftl){
				leftr -= leftl;
				leftl = a[++i].num;
			}else {
				leftr = a[--j].num;
				leftl = a[++i].num;
			}
		}else{
			if(leftl > leftr){
				leftl -= leftr;
				leftr = a[--j].num;
			}else if(leftr > leftl){
				leftr -= leftl;
				leftl = a[++i].num;
			}else {
				leftr = a[--j].num;
				leftl = a[++i].num;
			}
		}
	}
	cout << ans;
	return 0;
}

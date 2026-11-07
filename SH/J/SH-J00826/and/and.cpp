#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
	return a > b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin >> n >> m;
	long long nums[200005];
	for(int i = 1; i <= n; i++){
		cin >> nums[i];
	}
	sort(nums + 1, nums + n + 1, cmp);
	long long a = nums[1]; 
	for(int i = 2; i <= m; i++){
		a &= nums[i];
	}
	cout << a;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 

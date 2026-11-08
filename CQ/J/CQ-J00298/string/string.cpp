#include<bits/stdc++.h>
using namespace std;
const int N = 2e5+5;
long long n,ans;
struct node{
	long long cnt;
	char c;
}a[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].cnt>>a[i].c;
	}
	int i = 1, j = n;
	while(i < j){
		long long tmp = min(a[i].cnt,a[j].cnt);
		if(a[i].c != a[j].c) ans += tmp;
		a[i].cnt -= tmp;
		a[j].cnt -= tmp;
		if(a[i].cnt == 0) i++;
		if(a[j].cnt == 0) j--;
	}
	cout<<ans;
	return 0;
}
/*
100pts
O(n)
3728KB
*/

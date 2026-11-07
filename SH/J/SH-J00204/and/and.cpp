#include<bits/stdc++.h>
using namespace std;
const int N = 0;
int n,m;
int a[N];
bool b[20] = {1};
void solve1(){
	int ma = 0;
	for(int i = 0;i<n;i++){
		ma = max(ma,a[i]);
	}
	cout<<ma;
}
void solven(){
	int ans = a[0];
	for(int i  =1;i<n;i++){
		ans = ans&a[i];
	}
	cout<<ans;
}
void solve2(){
	int ans = 0;
	for(int i = 0;i<n-1;i++){
		for(int j = i+1;j<n;j++){
			ans = max(ans,a[i]&a[j]);
		}
	}
	cout<<ans;
}
void solveluck(){
	sort(a,a+n);
	int ans = a[n-1];
	for(int i=n-2;i>=n-m;i--) ans &= a[i];
	cout<<ans;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i = 0;i<n;i++){
		cin>>a[i];
	}
	if(m==1) solve1();
	else if(m==n) solven();
	else if(m==2) solve2();
	else solveluck();
	return 0;
}


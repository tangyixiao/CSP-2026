#include <bits/stdc++.h>
using namespace std;
long long a[200005];
bool sort1(long long a,long long b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n,sort1);
	int MAX=a[1];
	for(int i=2;i<=m;i++){
		MAX&=a[i];
	}
	cout<<MAX;
	return 0;
} 

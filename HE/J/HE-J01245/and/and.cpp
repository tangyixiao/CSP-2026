#include <bits/stdc++.h>
using namespace std;
long long a[200005],cnt=0;
long long ad(long long x,long long y){
	return x&y;
}
int main(){
	freopen("and3.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}sort(a,a+n);
	reverse(a,a+n);
	cnt=a[0];
	for(int i=1;i<m;i++){
		cnt=ad(cnt,a[i]);
	}int x=0;
	while(!(cnt)){
		cnt=ad(a[x],a[x+1]);
		x++;
	}cout<<cnt;
	return 0;
} 

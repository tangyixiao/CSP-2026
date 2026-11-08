#include <bits/stdc++.h>
using namespace std;
long long cnt[200005];
bool cmp(int x,int y){
	return x>y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,sum=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>cnt[i];
	}
	sort(cnt+1,cnt+1+n,cmp);
	for(int i=1;i<=m-1;i++){
		sum=cnt[i]&cnt[i+1];
	}
	sum=sum&cnt[m];
	cout<<sum;
return 0;
}

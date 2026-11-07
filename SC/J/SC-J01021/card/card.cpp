#include<bits/stdc++.h>
using namespace std;
struct d{
	long long end,c,s;
}b[300100];
bool cmp(d x,d y){
	if(x.end<y.end) return true;
	return false;
}
long long n,m,a[500100],ans[300100];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>m>>n;
	for(int i=1;i<=m;i++){
		cin>>a[i];
		b[a[i]].end=i;
		b[a[i]].c=b[a[i]].c+1;
		b[a[i]].s=a[i];
	}
	sort(b+1,b+1+n,cmp);
	for(int i=1;i<=n;i++){
		ans[b[i].s]+=b[i].c;
		ans[a[b[i].end+1]]+=ans[b[i].s];
	}
	for(int i=1;i<=n;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}

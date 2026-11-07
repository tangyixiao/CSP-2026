#include<bits/stdc++.h>
using namespace std;
struct node{
	long long id,last;
}ll[300010];
bool cmp(node x,node y){
	return x.last<y.last;
}
long long n,m,a[500010],ans[300010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		ll[a[i]]={a[i],i};
		ans[a[i]]++;
	}
	sort(ll+1,ll+m+1,cmp);
	for(int i=1;i<=m;i++){
		ans[a[ll[i].last+1]]+=ans[ll[i].id];
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
	fclose(stdin);
	fclose(stdout);
} 

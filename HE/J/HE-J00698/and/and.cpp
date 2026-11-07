#include<bits/stdc++.h>
using namespace std;
struct node{
	int idea;
	int sum;
}a[200001];
bool cmp(node x,node y){
	if(x.sum==y.sum){
		return x.idea>y.idea;
	}
	return x.sum>y.sum;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		long long x;
		cin>>x;
		a[i].idea=x;
		int ans=0;
		while(x){
			if(x%2==1)ans++;
			x/=2;
		}
		a[i].sum=ans;
	}
	sort(a+1,a+n+1,cmp);
	cout<<a[m].idea;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
//262142

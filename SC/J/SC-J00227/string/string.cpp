#include<bits/stdc++.h>
using namespace std;
int n;
int a[200005];
char k[200005];
long long ans;
int l=1,r;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n;
	r=n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		cin>>k[i];
	}
	int p=a[l],q=a[r];
	while(l<r){
		if(p>q){
			if(k[l]!=k[r])ans+=q;
			r--;
			p-=q;
			q=a[r];
		}
		else if(p<q){
			if(k[l]!=k[r])ans+=p;
			l++;
			q-=p;
			p=a[l];
		}
		else{
			if(k[l]!=k[r])ans+=q;
			l++;
			r--;
			p=a[l];
			q=a[r];
		}
	}
	cout<<ans;
	return 0;
}
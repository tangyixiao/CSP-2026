#include<bits/stdc++.h>
using namespace std;
pair<long long,char> a[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].first>>a[i].second;
	}
	long long l=1,r=n,suml=a[1].first,sumr=a[n].first,ans=0;
	while(l<r){
		if(suml>=sumr){
			if(a[l].second!=a[r].second){
				ans+=sumr;
			} 
			suml-=sumr;
			r--;
			sumr=a[r].first;
		}
		else{
			if(a[l].second!=a[r].second){
				ans+=suml;
			} 
			sumr-=suml;
			l++;
			suml=a[l].first;
		}
	}
	cout<<ans;
	return 0;
} 
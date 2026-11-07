#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=5e5+10;
ll a[maxn],b[maxn],ans[maxn];
int n,m;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
		b[a[i]]=i;
	}
	for(int i=0;i<n;i++){
		ans[a[i]]++;
		for(int j=i;j<n;){
			j=b[a[j]]+1;
			if(j!=i){
				ans[a[j]]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
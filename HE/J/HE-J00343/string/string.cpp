#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define PIC pair<int,char>
long long k=0,ans=0;
vector<PIC> a;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n; 
	cin>>n;
	for(int i=1;i<=n;i++){
		int m;
		char c;
		cin>>m>>c;
		k+=m;
		a.push_back({m,c});
	}
	k/=2;
	for(int i=0;i<n&&k>=0;i++){
		for(int j=n-1;j>i;j--){
			if(a[j].first==0) continue;
			if(a[i].second!=a[j].second){
				ans+=min(a[i].first,a[j].first);
			}
			if(a[i].first==a[j].first){
				k-=a[i].first;
				a[i] = {0,0};
				a[j] = {0,0};
				break;
			}else if(a[i].first>a[j].first){
				k-=a[j].first;
				a[i] = {a[i].first-a[j].first,a[i].second};
				a[j] = {0,0};
			}else{
				k-=a[i].first;
				a[j] = {a[j].first-a[i].first,a[j].second};
				a[i] = {0,0};
				break;
			}
		}
	}
	cout<<ans;
	return 0;
}

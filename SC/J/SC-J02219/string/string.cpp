#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
pair<ll,char> a[200040];
ll n,x,ans=0;
char c;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>x>>c;
		a[i].first=x;
		a[i].second=c;
	}
	int i=1,j=n;
	while(i<j){
		if (a[i].first<a[j].first){
			a[j].first-=a[i].first;
			if (a[i].second!=a[j].second){
				ans+=a[i].first;
			}
			i++;
		}
		else if (a[i].first>a[j].first){
			a[i].first-=a[j].first;
			if (a[i].second!=a[j].second){
				ans+=a[j].first;
			}
			j--;
		}
		else{
			if (a[i].second!=a[j].second){
				ans+=a[j].first;
			}
			i++;
			j--;
		}
	}
	cout<<ans;
	return 0;
}
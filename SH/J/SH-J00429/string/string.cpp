#include<bits/stdc++.h>
#define int long long
using namespace std;
pair<int,char>a[2*(int)1e5+10];
int n,ans;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;++i){
		cin>>a[i].first>>a[i].second;
	}
	int i=1,j=n;
	while(i<j){
		int x=a[i].first,w=a[j].first;
		char y=a[i].second,z=a[j].second;
		if(z==y){
			if(x>w){
				a[i].first-=w;
				j--;
			}
			if(x<w){
				a[j].first-=x;
				i++;
			}
			if(x==w){
				i++;
				j--;
			}
		}
		else {
			if(x>w){
				a[i].first-=w;
				ans+=w;
				j--;
			}
			if(x<w){
				a[j].first-=x;
				ans+=x;
				i++;
			}
			if(x==w){
				ans+=x;
				i++;j--;
			}
		}
	}
	cout<<ans;
	return 0;
}

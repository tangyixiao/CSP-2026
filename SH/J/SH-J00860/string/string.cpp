#include<bits/stdc++.h>
using namespace std;
#define int long long
struct bbb{
	int num;
	char alp;
};
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	vector<bbb> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i].num>>a[i].alp;
	}
	int l=0,r=n-1,ans=0;
	while(l<=r){
		if(a[l].num>a[r].num){
			if(a[l].alp!=a[r].alp){
				ans+=a[r].num;
			}
			a[l].num-=a[r].num;
			r--;
		}else if(a[l].num<a[r].num){
			if(a[l].alp!=a[r].alp){
				ans+=a[l].num;
			}
			a[r].num-=a[l].num;
			l++;
		}else{
			if(a[l].alp!=a[r].alp){
				ans+=a[r].num;
			}
			l++;
			r--;
		}
	}
	cout<<ans;
	return 0;
}

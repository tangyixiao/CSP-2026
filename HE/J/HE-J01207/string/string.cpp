#include<bits/stdc++.h>
using namespace std;
struct node{
	long long sum;
	char x;
}a[200005];
int n;
long long ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].sum>>a[i].x;
	}
	int l=1,r=n;
	while(l<=r){
		bool b=1;
		if(a[l].x!=a[r].x){
			if(a[l].sum!=a[r].sum){
				ans+=min(a[l].sum,a[r].sum);
				if(l!=r){
					if(a[l].sum>a[r].sum){
						a[l].sum-=a[r].sum;
						b=0;
						r--;
					}else{
						a[r].sum-=a[l].sum;
						b=0;
						l++;
					} 
				}
			}else{
				ans+=a[l].sum;
			}
		}else{
			if(a[l].sum!=a[r].sum){
				if(l!=r){
					if(a[l].sum>a[r].sum){
						a[l].sum-=a[r].sum;
						b=0;
						r--;
					}else{
						a[r].sum-=a[l].sum;
						b=0;
						l++;
					} 
				}
			}
		}
		if(b){
			l++;
			r--;
		}
	}
	cout<<ans;
	return 0;
}

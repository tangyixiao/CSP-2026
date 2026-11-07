#include<bits/stdc++.h>
using namespace std;
int n;
long long ans;
struct node{
	char x;
	long long c;
}a[200005];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].c>>a[i].x;
	}int l=1;
	int r=n;
	while(l<r){
		if(a[l].x==a[r].x){
			if(a[l].c==a[r].c){
				l++;
				r--;
			}else if(a[l].c>a[r].c){
				a[l].c-=a[r].c;
				r--;
			}else {
				a[r].c-=a[l].c;
				l++;
			}
		}else{
			if(a[l].c==a[r].c){
				ans+=a[l].c;
				l++;
				r--;
			}else if(a[l].c>a[r].c){
				ans+=a[r].c;
				a[l].c-=a[r].c;
				r--;
			}else {
				ans+=a[l].c;
				a[r].c-=a[l].c;
				l++;
			}
		}
	}cout<<ans;
	return 0;
}

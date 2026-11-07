#include <bits/stdc++.h>
using namespace std;
struct node{
	long long m;
	char x;
}a[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	int n;
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> a[i].m >> a[i].x;
	}
	long long ans=0;
	int r=n;
	for(int i=1;i<=n;i++){
		long long c=a[i].m;
		while(c>0){
			if(a[i].x==a[r].x){
				c-=a[r].m;
				if(c>=0){
					r--;
					if(r<=i){
						cout << ans;
						return 0;
					}
				}
				if(c<0){
					a[r].m-=(c+a[r].m);
				}
			}
			else{
				c-=a[r].m;
				if(c>=0){
					ans+=a[r].m;
					r--;
					if(r<=i){
						cout << ans;
						return 0;
					}
				}
				if(c<0){
					ans+=(c+a[r].m); 
					a[r].m-=(c+a[r].m);
				}
			}
		}
	}
	cout << ans;
	return 0;
}

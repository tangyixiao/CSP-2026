#include<bits/stdc++.h>
using namespace std;
int n;
struct node{
	int x;
	char c;
}a[200005];
void solve(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].x>>a[i].c;
	}
	int l=1,r=n;
	long long ans=0;
	while(l<r){
		if(a[l].c!=a[r].c){
			if(a[l].x<a[r].x){
				ans+=a[l].x;
				a[l].c=a[r].c;
			}else if(a[l].x>=a[r].x){
				ans+=a[r].x;
				a[r].c=a[l].c;
			}
		}
		if(a[l].x<a[r].x){
			a[r].x-=a[l].x;
			l++;
		}else if(a[l].x>a[r].x){
			a[l].x-=a[r].x;
			r--;
		}else{
			l++;
			r--;
		}
	}
	cout<<ans;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int t=1;
//	cin>>t;
	while(t--) solve();
	return 0;
}
/*
3
2 a
2 b
1 c
*/
/*
2
2 a
3 a
*/
/*
6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
*/

#include<bits/stdc++.h>
using namespace std;
struct s{
	int x;
	char y;
}a[400010];
long long sum,n,l,r;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;i+=1){
		cin>>a[i].x>>a[i].y;
	}
	r=n;
	while(l<r){
		if(a[l].x>a[r].x){
			if(a[l].y!=a[r].y){
				sum+=a[r].x;
			}
			a[l].x-=a[r].x;
			r-=1;
		}else if(a[l].x<a[r].x){
			if(a[l].y!=a[r].y){
				sum+=a[l].x;
			}
			a[r].x-=a[l].x;
			l+=1;
		}else{
			if(a[l].y!=a[r].y){
				sum+=a[l].x;
			}
			l+=1;
			r-=1;
		}
	}
	cout<<sum;
	return 0;
}

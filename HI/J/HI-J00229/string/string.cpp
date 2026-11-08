#include<bits/stdc++.h>
using namespace std;

long long n,last,cnt,mid;
struct aa{
	char id;
	long long r;
}a[200005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>a[i].r>>a[i].id;
	}
	int nr=n,nl=1;
	while(nr>=nl){
		if(a[nr].id!=a[nl].id){
			cnt+=min(a[nr].r,a[nl].r);
		}
		if(a[nr].r==a[nl].r){
			nr--;
			nl++;
		}else if(a[nr].r<a[nl].r){
			a[nl].r-=a[nr].r;
			nr--;
			
		}else {
			a[nr].r-=a[nl].r;
			nl++;
			
		}
	}
	cout<<cnt;
	return 0;
} 

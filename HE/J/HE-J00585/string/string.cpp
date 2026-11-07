#include<bits/stdc++.h>;
using namespace std;
const long long N=2e5;
struct wood{
	long long x;
	char s;
}a[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	long long ans=0;
	for(long long i=1;i<=n;i++){
		cin>>a[i].x>>a[i].s;
	}
	long long fi=1;
	long long le=n;
	for(long long i=1;i<=n;i++){
		if(fi==le){
			break;
		}
		else if(fi>le){
			break;
		}
		else if(a[fi].x==a[le].x){
			if(a[fi].s!=a[le].s){
				ans+=a[fi].x;
			}
			fi++;
			le--;
		}
		else if(a[fi].x>a[le].x){
			if(a[fi].s!=a[le].s){
				ans+=a[le].x;
			}
			a[fi].x-=a[le].x;
			le--;
		}
		else if(a[fi].x<a[le].x){
			if(a[fi].s!=a[le].s){
				ans+=a[fi].x;
			}
			a[le].x-=a[fi].x;
			fi++;
		}
	}
	cout<<ans;
	return 0;
} 

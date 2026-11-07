#include<bits/stdc++.h>
using namespace std;
long long n,num;
struct nade{
	long long k;
	char j;
}a[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i].k>>a[i].j;
	long long l=1,r=n;
	while(l<=r){
		if(a[l].k>a[r].k){
			a[l].k-=a[r].k;
			if(a[l].j!=a[r].j) num+=a[r].k;
			r--;
		}else if(a[l].k<a[r].k){
			a[r].k-=a[l].k;
			if(a[l].j!=a[r].j) num+=a[l].k;
			l++;
		}else if(a[l].k==a[r].k){
			if(a[l].j!=a[r].j) num+=a[l].k;
			l++,r--;
		}
	}
	cout<<num;
	return 0;
}
#include<bits/stdc++.h>
using namespace std;
struct app{long long sl;char x;}a[200005];
long long n,zhongz,zhongy,he=0,he2=0,r,sum=0,l;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=1;i<=n;i++)cin>>a[i].sl>>a[i].x,zhongz+=a[i].sl;
	if(zhongz%2==0)zhongy=zhongz/2+1;
	else zhongy=zhongz/2+2;
	zhongz/=2,r=n;
	for(l=1;he<=zhongz;l++){
		he+=a[l].sl;
		if(he>zhongz){
			he-=a[l].sl;
			break;
		}
		while(he>he2){
			if(a[r].x!=a[l].x){
				sum+=min(a[r].sl,he-he2);
			}
			long long ls=he2;
			he2+=min(a[r].sl,he-he2);
			a[r].sl-=min(a[r].sl,he-ls);
			if(he>he2)r--;
//			cout<<he2<<" "<<r<<" "<<l<<" "<<a[r].sl<<endl;
		}
	}
	he=zhongz;
//	cout<<r<<" "<<he<<" "<<he2<<" "<<sum<<endl;
	while(he>he2){
		if(a[r].x!=a[l].x){
			sum+=min(a[r].sl,he-he2);
		}
		he2+=min(a[r].sl,he-he2);
		a[r].sl-=min(a[r].sl,he-he2);
		if(he>he2)r--;
	}
	cout<<sum;
	return 0;
}
/*
4
1 a
2 b
2 b
1 a
*/

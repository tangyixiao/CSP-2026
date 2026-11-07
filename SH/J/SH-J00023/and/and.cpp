#include <bits/stdc++.h>
using namespace std;
int n,m,a[200005],b[200005],ans=0;
void merge(int l,int r){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout); 
	if (l==r) return;
	int mid=(l+r)/2;
	merge(l,mid);
	merge(mid+1,r);
	int i=l,j=mid+1;
	for (int k=l;k<=r;k++){
		if (j>r or  (i<=mid and a[i]>=a[j])){
			b[k]=a[i++];
		}
		else b[k]=a[j++];
	}
	for (int k=l;k<=r;k++){
		a[k]=b[k];
	}
}
int main(){
	cin>>n>>m;
	for (int i=1;i<=n;i++){
		cin>>a[i];
	}
	merge(1,n);

	for (int i=1;i<=n;i++){
		int sum=a[i];
		for (int j=i+1;j<=m+i-1;j++){
			sum&=a[j];
		}
		ans=max(sum,ans);
		if (ans>a[i+m]) break;
	}
	cout<<ans;
	return 0;
} 

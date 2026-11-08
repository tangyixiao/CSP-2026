#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,l,r,cnt,i,j;
int a[200005];
char b[200005];

signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>b[i];
		r+=a[i];
	}
	j=n-1;
	while(l<r){
		if(i==j||l==r)break;
		if(a[i]>a[j]){
			if(b[i]!=b[j])cnt+=a[j];
			l+=a[j];
			a[i]-=a[j];
			j--;
		}else if(a[i]<a[j]){
			if(b[i]!=b[j])cnt+=a[i];
			r-=a[i];
			a[j]-=a[i];
			i++;
		}else if(a[i]==a[j]){
			if(b[i]!=b[j])cnt+=a[i];
			r-=a[i];
			l+=a[j];
			j--;
			i++;
		}
	}cout<<cnt;
	return 0;
}


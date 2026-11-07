#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int a[200005];
	char c[200005];
	int l=0,n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		cin>>c[i];
	}
	long long cnt=0;
	while(l<n){
		if(a[l]>=a[n]){
			if(c[l]!=c[n])
				cnt+=a[n];
			a[l]-=a[n];
			n--;
		}
		else{
			if(c[l]!=c[n])
				cnt+=a[l];
			a[n]-=a[l];
			l++;
		}
	}
	printf("%lld\n",cnt);

	return 0;
}
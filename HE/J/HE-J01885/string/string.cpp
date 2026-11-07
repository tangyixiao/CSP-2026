#include<bits/stdc++.h>
using namespace std;

int n;

long long ans;
long long a[200100];

char c[200100];

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
		cin>>c[i];
	}
	int l=1,r=n;
	while(l<=r){
		if(c[l]==c[r]){
			if(a[l]<a[r])  a[r]-=a[l],l++;
			else if(a[r]<a[l])  a[l]-=a[r],r--;
			else if(a[l]==a[r])  l++,r--;
		}
		else{
			if(a[l]<a[r])  a[r]-=a[l],ans+=a[l],l++;
			else if(a[r]<a[l])  a[l]-=a[r],ans+=a[r],r--;
			else if(a[l]==a[r])  ans+=a[r],l++,r--;
		}
	}
	printf("%lld",ans);
	fclose(stdin);
	fclose(stdout);
	return 0;
}

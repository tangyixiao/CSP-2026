#include <bits/stdc++.h>
using namespace std;
long long a[100005];
char b[100005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,len;
	cin>>n;
	for (int i=0;i<n;i++){
		cin>>a[i]>>b[i];
		len+=a[i];
	}
	long long l=0,r=n-1,cnt=0;
	while (l<=r){
		if (a[l]==0){
			l++;
		}
		if (a[r]==0){
			r--;
		}
		if(b[l]==b[r]){
			a[l]-=min(a[l],a[r]);
			a[l]-=min(a[l],a[r]);
		}else{
			a[l]-=min(a[l],a[r]);
			a[l]-=min(a[l],a[r]);
			cnt+=min(a[l],a[r]);
		}
	}
	cout<<cnt;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
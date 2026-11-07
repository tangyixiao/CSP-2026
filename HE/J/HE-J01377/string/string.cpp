#include<bits/stdc++.h>
using namespace std;
long long a[200001];
char c[200001];
long long l,r,ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	long long l=1,r=n;
	while(l<=r){
		if(c[l]!=c[r]){
			ans+=min(a[l],a[r]);	
			if(a[l]<a[r]){
				a[r]=a[r]-a[l];
				a[l]=0;
				l++;
			}
			else if(a[l]>a[r]){
				a[l]=a[l]-a[r];
				a[r]=0;
				r--;
			}
			else if(a[l]==a[r]){
				a[l]=a[r]=0;
				l++,r--;
			}
		}
		else{
			if(a[l]<a[r]){
				a[r]=a[r]-a[l];
				a[l]=0;
				l++;
			}
			else if(a[l]>a[r]){
				a[l]=a[l]-a[r];
				a[r]=0;
				r--;
			}
			else if(a[l]==a[r]){
				a[l]=a[r]=0;
				l++,r--;
			}
		}
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
/*
6
1 a
1 b
1 c
1 a
1 b
1 c
*/

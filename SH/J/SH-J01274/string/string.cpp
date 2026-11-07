#include<bits/stdc++.h>
using namespace std;
long long a[1000010];
char b[1000010];
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0); 
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,l=0,r,s=0;
	cin>>n;
	r=n-1;
	for(long long i=0;i<n;i++){
		cin>>a[i]>>b[i];
	}
	while(l<r){
		if(b[l]!=b[r]){
			if(a[l]>=a[r]){
				a[l]-=a[r];
				s+=a[r];
				a[r]=0;
			}else{
				a[r]-=a[l];
				s+=a[l];
				a[l]=0;
			}
			if(a[l]==0) l++;
			if(a[r]==0) r--;
		}else{
			if(a[l]>=a[r]){
				a[l]-=a[r];
				a[r]=0;
			}else{
				a[r]-=a[l];
				a[l]=0;
			}
			if(a[l]==0) l++;
			if(a[r]==0) r--;
		}
	}
	cout<<s;
	return 0;
 } 
 /*
6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
 */

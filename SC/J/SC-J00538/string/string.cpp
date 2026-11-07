#include<bits/stdc++.h>
using namespace std;
long long a[200005];
char c[200005];
int main(){

	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);

	long long n,cnt=0;
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	long long l=1,r=n;
	while(l<=r){
		if(a[l]>=a[r]){
			if(c[l]!=c[r]){
				cnt=cnt+a[r]; 
			}
			a[l]-=a[r];
			r--;
		}else{
			if(c[l]!=c[r]){
				cnt=cnt+a[l]; 
			}
			a[r]-=a[l];
			l++;
		}
	}
	cout<<cnt;
	return 0;
}

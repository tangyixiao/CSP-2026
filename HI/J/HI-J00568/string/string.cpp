#include <bits/stdc++.h>
using namespace std;
int n,a[1000005];
char b[1000005];
long long cnt=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
	}
	int l=1,r=n;
	while(r!=l){
		if(a[l]>=a[r]){
			if(b[l]!=b[r]){
				cnt+=a[r];
				a[l]-=a[r];
				r--;
			}
			else{
				a[l]-=a[r];
				r--;
			}
		}
		else if(a[l]<=a[r]){
			if(b[l]!=b[r]){
				cnt+=a[l];
				a[r]-=a[l];
				l++;
			}else{
				a[r]-=a[l];
				l++;
			}
		}else{
			if(b[l]!=b[r]){
				cnt+=a[l];
				r--;
				l++;
			}else{
				r--;
				l++;
			}
		}
	}
	cout<<cnt;
	return 0;
}

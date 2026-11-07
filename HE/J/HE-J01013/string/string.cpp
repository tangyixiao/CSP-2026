#include<bits/stdc++.h>
using namespace std;
int n;
int a[200010];
char c[200010];
long long sum = 0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i = 1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	int l = 1,r = n;
	while(l<r){
		if(c[l]!=c[r]){
			sum+=min(a[l],a[r]);
			if(a[l]>a[r]){
				a[l]-=a[r];
				r--;
			}
			else if(a[l]==a[r]){
				l++;
				r--;
			}
			else{
				a[r]-=a[l];
				l++;
			}
		}
		else{
			if(a[l]>a[r]){
				a[l]-=a[r];
				r--;
			}
			else if(a[l]==a[r]){
				l++;
				r--;
			}
			else{
				a[r]-=a[l];
				l++;
			}
		}
	}
	cout<<sum;
	return 0;
}

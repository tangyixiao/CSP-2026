#include<bits/stdc++.h>
using namespace std;
long long n,a[200005],m=0;
char c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	int l=1,r=n;
	while(l<r){
		if(a[l]<a[r]){
			if(c[l]==c[r]){
				a[r]-=a[l];
				l++;
			}
			else{
				a[r]-=a[l];
				m+=a[l];
				l++;
			}
		}
		else if(a[l]==a[r]){
			if(c[l]==c[r]){
				l++,r--;
			}
			else{
				m+=a[l];
				l++,r--;
			}
		}
		else{
			if(c[l]==c[r]){
				a[l]-=a[r];
				r--;
			}
			else{
				a[l]-=a[r];
				m+=a[r];
				r--;
			}
		}
	}
	cout<<m;
	return 0;
}
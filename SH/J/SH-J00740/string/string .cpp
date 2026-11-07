#include <iostream>
#include <string>
using namespace std;
long long n;
long long a[1000000];
char c[1000000];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
		cin>>c[i];
	}
	long long l=1;
	long long r=n;
	long long ans=0;
	while(l<=r){
		if(c[l]==c[r]){
			if(a[l]<a[r]){
				l++;
				a[r]=a[r]-a[l];
			}
			else if(a[l]>a[r]){
				r--;
				a[l]=a[l]-a[r];
			}
			else{
				l++;
				r--;
			}
		}
		else{
			if(a[l]<a[r]){
				l++;
				a[r]=a[r]-a[l];
				ans+=a[l];
			}
			else if(a[l]>a[r]){
				r--;
				a[l]=a[l]-a[r];
				ans+=a[r];
			}
			else{
				l++;
				r--;
				ans+=a[l];
			}
		}
	}
	cout<<ans;
	return 0;
}

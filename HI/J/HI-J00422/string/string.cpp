#include <bits/stdc++.h>
using namespace std;

long long a[200005];
string c;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	long long n;
	cin >> n;
	if(n==1){
		cout << 0;
		return 0;
	}
	
	for(int i=0;i<n;i++){
		cin >> a[i];
		string p;
		cin >> p;
		c+=p;
	}
	long long sum=0;
	long long l=0,r=c.size()-1;
	while(l<=r){
		if(l==r){
			a[l]!=0;
			sum+=a[l]/2;
			break;
		}
		if(c[l]==c[r]){
			if(a[l]==a[r]){
				l++;
				r--;
			}
			else if(a[l]<a[r]){
				a[r]-=a[l];
				a[l]=0;
				l++;
			}
			else{
				a[l]-=a[r];
				a[r]=0;
				r--;
			}
		}
		else{
			if(a[l]==a[r]){
				sum+=a[l];
				l++;
				r--;
			}
			else if(a[l]<a[r]){
				sum+=a[l];
				a[r]-=a[l];
				a[l]=0;
				l++;
			}
			else{
				sum+=a[r];
				a[l]-=a[r];
				a[r]=0;
				r--;
			}
		}
		if(a[l]==0)l++;
		if(a[r]==0)r--;
	}
	cout << sum;
	return 0;
}

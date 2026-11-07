#include<bits/stdc++.h>
using namespace std;
long long n;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	long long a[n];
	char c[n];
	for(int i=0;i<n;i++){
		cin>>a[i]>>c[i];
	}
	long long l=0,r=n-1;
	long long count=0;
	while(l<r){
		if(c[l]!=c[r]){
			if(a[l]>a[r]){
				count+=a[r];
				a[l]-=a[r];
				a[r]=0;
				r--;
			}else if(c[l]<c[r]){
				count+=a[l];
				a[r]-=a[l];
				a[l]=0;
				l++;
			}else{
				count+=a[l];
				a[l]=0;
				a[r]=0;
				l++;
				r--;
			}
		}else{
			l++;
			r--;
		}
	}
	cout<<count;
	return 0;
}

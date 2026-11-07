#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,x=0,y=0;
	cin>>n;
	int a[n+5];
	char c[n+5];
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		x+=a[i];
	}
	int l=1,r=n;
	while(l<r){
		if(c[l]==c[r]){
			if(a[l]>a[r]){
				y+=a[r]*2;
				a[l]=a[l]-a[r];
				r--;
			}
			else if(a[l]<a[r]){
				y+=a[l]*2;
				a[r]=a[r]-a[l];
				l++;
			}
			else{
				y+=a[l]*2;
				l++;
				r--;
			}
		}
		else{
			l++;
			r--;
		}
	}
	cout<<(x-y)/2;
	return 0;
} 
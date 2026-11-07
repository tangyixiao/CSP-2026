#include<bits/stdc++.h>
using namespace std;
int a[200010],a1[200010];
char c[200010],c1[200010];

int main(){
	
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	int n;
	cin>>n;
	long long ant=0,cnt=0;
	for(int i=0;i<n;i++){
		cin>>a[i]>>c[i];
	}
	int r=0,l=n-1;
	while(r<l){
		int x=a[r],y=a[l];
		if(x>y){
			a[r]-=a[l];
			a[l]=0;
			if(c[r]!=c[l])cnt+=y;
		}
		if(x<=y){
			a[r]=0;
			a[l]-=x;
			if(c[r]!=c[l])cnt+=x;
		}
		if(a[l]==0)l--;
		if(a[r]==0)r++;
	}
	cout<<cnt;
	return 0;
}
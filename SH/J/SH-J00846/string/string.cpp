#include<iostream>
#include<cstring>
using namespace std;
const int N=2e5+5;
int n;
int a[N];
char c[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	
	long long cnt=0;
	int l=1,r=n;
	while(l<r){
		long long minn=min(a[l],a[r]);
		if(c[l]!=c[r]){
			cnt=cnt+minn;	
		}
		if(a[l]==a[r]){
			l++;
			r--;
		}else if(a[l]<a[r]){
			a[r]=a[r]-a[l];
			l++;
		}else{
			a[l]=a[l]-a[r];
			r--;
		}
	}
	cout<<cnt<<endl;
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
string c,b=" ";
char ch;
int n,m,x=0,a[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c;
		b+=c;
	}
	int l=1,r=n;
	long long ans=0;
	while(l<r){
		if(a[l]>=a[r]){
			if(b[l]!=b[r]) ans+=a[r];
			a[l]-=a[r];
			a[r]=0;
			r--;
		}else{
			if(b[l]!=b[r]) ans+=a[l];
			a[r]-=a[l];
			a[l]=0;
			l++;
		}
	}
	cout<<ans;
	return 0;
}
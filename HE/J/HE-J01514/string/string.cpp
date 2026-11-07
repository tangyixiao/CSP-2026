#include<bits/stdc++.h>
using namespace std;
struct node{
	long long cnt;
	char z;
}a[200010],b[200010];
long long n,bi=1,ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].cnt>>a[i].z;
		ans+=a[i].cnt;
	}
	b[bi].cnt=a[1].cnt;b[bi].z=a[1].z;
	for(int i=1;i<n;i++){
		if(b[bi].z==a[i+1].z){
			b[bi].cnt+=a[i+1].cnt;
		}else{
			b[bi++].cnt=a[i+1].cnt;b[bi].z=a[i+1].z;
		}
	}
	if(bi==1){
		cout<<0;
	}else{
		cout<<ans/2;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}


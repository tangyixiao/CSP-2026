#include<bits\stdc++.h> 
using namespace std;
char c[200005];
long long a[200005];
int main(){
    freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	long long sum=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	long long ans=0,la=a[1],lb=a[n],now=0;
	int l=1,r=n;
	char ca=c[1],cb=c[n];
	while(l<r){
		if(ca!=cb)ans+=min(la,lb)-now;
		if(la<lb)now=la,la+=a[++l];
		else now=lb,lb+=a[--r]; 
		ca=c[l];
		cb=c[r];
	}
	cout<<ans;
}
#include<bits/stdc++.h> 
using namespace std;
struct pp{
	long long x;
	char y;
}a[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
    long long n,len=0;
    cin>>n;
    for(long long i=1;i<=n;i++){
    	cin>>a[i].x>>a[i].y;
    	len+=a[i].x;
	}
	long long ans=0;
	for(long long i=1,j=n;i<=n/2;i++){
		long long p=a[i].x;
		while(p&&a[i].y!=a[j].y&&j>=n/2){
			if(p<a[j].x){
			    ans+=p;
			    a[j].x-=p;
				p=0;
			}
			if(p>=a[j].x){
				p-=a[j].x;
				ans+=a[j].x;
				a[j].x=0;
				j--;
			}
		}
	}
	cout<<ans<<endl;

	return 0;
}
#include<bits/stdc++.h>
using namespace std;
long long n,a[200005],c,l,r;
char b[200005],ll,rr;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout); 
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i]>>b[i];
	for(int i=1;i<=n;i++){
		l+=a[i],ll=b[i];
		while(l>=1){
			if(r==0){
				r+=a[n],rr=b[n],n--;
			}
			long long aa=l;
			if(ll==rr){
				l-=min(l,r),r-=min(aa,r);
			}else{
				c+=min(l,r),l-=min(l,r),r-=min(aa,r);
			}
			cout<<i<<" "<<n<<endl;
		}
	}
	cout<<c;
	return 0;
}

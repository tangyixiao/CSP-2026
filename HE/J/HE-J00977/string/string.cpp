#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
long long n,a[N],q=1;
char c[N];
long long cnt=0,sum=0,ans=0,f=0,x=0,j;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		if(i>=2&&c[i]!=c[i-1]){
			q=0;
		}
		sum+=a[i];
	}
	if(q==1){
		cout<<0;
		return 0;
	}
	sum=sum/2;
	for(int i=1;i<=n;i++){
		x+=a[i];
		if(x>sum){
			cout<<cnt+ans;
			return 0;
		}
		ans+=a[i];
		j=n;
		while(j!=0){
			if(ans-a[j]<0){
				break;
			}
			if(c[i]!=c[j]){
				cnt=cnt+min(a[i],a[j]);
				ans=ans-a[j];
			}
			j--;
		}
	}
	return 0;
}

#include<bits/stdc++.h>
using namespace std;

const int N=3e5+5;
long long n,k,ans;
long long a[N],l,r,i,j;
char c[N];

int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(i=1;i<=n;i++) cin>>a[i]>>c[i],k+=a[i];
	l=1,r=k;
	i=1,j=n;
	while(l<k/2&&r>k/2)
	{
		
		if(a[i]>a[j])
		{
			if(c[i]==c[j]) {
				l+=a[j];
				r-=a[j];
				a[i]-=a[j];
			}else{
				l+=a[j];
				r-=a[j];
				a[i]-=a[j];
				ans+=a[j];
			}
			j--;
		}
		if(a[i]<a[j])
		{
			if(c[i]==c[j]) {
				l+=a[i];
				r-=a[i];
				a[j]-=a[i];
			}else{
				l+=a[i];
				r-=a[i];
				a[j]-=a[i];
				ans+=a[i];
			}
			i++;
		}
		if(a[i]==a[j]){
			if(c[i]==c[j]){
				l+=a[i];
				r-=a[j];
			}else{
				l+=a[i];
				r-=a[j];
				ans+=a[i];
			}
			i++,j--;
		}
	}
	if(l<k/2){
		while(i<j){
			if(c[i]!=c[j]) {
				ans+=a[i];
			}
			i++;
		}
	}
	if(r>k/2){
		while(i<j){
			if(c[i]!=c[j]){
				ans+=a[j];
			}
			j--;
		}
	}
	cout<<ans;
	return 0;
}

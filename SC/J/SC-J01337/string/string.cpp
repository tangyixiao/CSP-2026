#include<bits/stdc++.h>
using namespace std;
long long n,a[200010],m,l,r,L,R,ans,q;
char c[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		m+=a[i];
	}
	long long cnt=0;
	for(long long i=1;i<=n;i++){
		cnt+=a[i];
		if(m/2<cnt&&cnt-a[i]<m/2){
			q=i;
			if(m%2==0){
				long long t=a[i];
				a[i]=m/2+a[i]-cnt;
				for(long long j=n;j>=i+1;j--){
					a[j+1]=a[j];
					c[j+1]=c[j];
				}
				a[i+1]=t-a[i];
				c[i+1]=c[i];
				n++;
				break;
			}
			else{
				long long t=a[i];
				a[i]=m/2-cnt+a[i];
				if(a[i]%2==1){
					a[i]--;
				}
				for(long long j=n;j>=i+1;j--){
					a[j+1]=a[j];
					c[j+1]=c[j];
				}
				a[i+1]=t-a[i];
				if(a[i+1]%2==1){
					a[i+1]--;
				}
				m--;
				n++;
				c[i+1]=c[i];
				break;
			}
		}
		if(m/2<cnt){
			break;
		}
	}
	l=0,r=0,L=1,R=n;
	while(L<=R){
		if(a[L]+l==r+a[R]){
			if(c[L]!=c[R]){
				ans+=a[R];
				l+=a[L++],r+=a[R--];
			}
			else{
				l+=a[L++],r+=a[R--];
			}
		}
		else{
			if(c[L]!=c[R]){
				if(a[L]+l<a[R]+r){
					l+=a[L];
					r+=a[L];
					a[R]-=a[L];
					ans+=a[L++];
				}
				else{
					r+=a[R];
					l+=a[R];
					a[L]-=a[R];
					ans+=a[R--];
				}
			}
			else{
				if(a[L]+l<a[R]+r){
					l+=a[L];
					r+=a[L];
					a[R]-=a[L++];
				}
				else{
					r+=a[R];
					l+=a[R];
					a[L]-=a[R--];
				}
			}
		}
	}
	cout<<ans;
	return 0;
}
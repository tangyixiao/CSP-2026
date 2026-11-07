#include<bits/stdc++.h>
using namespace std;
long long n,a[300010],ii,ans;
char c[300010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=1;i<=n;i++){
		long long x;
		char y;
		cin>>x>>y;
		if(y==c[ii]){
			a[ii]+=x;
		}else{
			c[++ii]=y;
			a[ii]=x;
		}
	}
	long long m=ii/2;
	if(ii%2==1)m++;
	for(long long i=1,j=ii;i<j;i++,j--){
		if(i+1==j){
			ans+=min(a[i],a[j]);
		}else{
			long long maxa,si;
			if(a[i]>a[j]){
				maxa=a[i];
				si=j;
			}else{
				maxa=a[j];
				si=i;
			}
			long long l=0;
			if(si==j){
				while(l<maxa&&i<j){
					if(l+a[j]>=maxa){
						a[j]-=(maxa-l);
						if(c[j]!=c[i]){
							ans+=(maxa-l);
						}
						break;
					}
					if(c[j]!=c[i]){
						ans+=a[j];
					}
					l+=a[j];
					j--;
				}
				j++;
			}else{
				while(l<maxa&&i<j){
					if(l+a[i]>=maxa){
						a[i]-=(maxa-l);
						if(c[j]!=c[i]){
							ans+=(maxa-l);
						}
						break;
					}
					if(c[j]!=c[i]){
						ans+=a[i];
					}
					l+=a[i];
					i++;
				}
				i--;
			}
		}
	}
	cout<<ans;
	return 0;
}
#include<bits/stdc++.h>
using namespace std;
long long n,m,a[500005],b[300005],q[500005];
int main(){
//	freopen("card.in","r",stdin);
//	freopen("card.out","w",stdout);
    cin>>n>>m;
    for(long long i=1;i<=n;i++){
    	cin>>a[i];
    	q[i]=a[i];
	}
	int c=0;
	for(long long i=1;i<=n;i++){
		for(long long t=1;t<=n;t++){
	    	q[t]=a[t];
		}
    	for(long long j=i;j<=n;j++){
	    	for(long long k=j+1;k<=n;k++){
		    	if(a[j]==a[k]){
		    		for(long long x=j;x<=k-1;x++){
						q[x]=0;
					}
				}
			}
		}
		for(long long x=1;x<=m;x++){
			for(long long h=i;h<=n;h++){
				if(q[h]==x){
					b[x]++;
					break;
				}
			}
		}
	}
	for(long long x=1;x<=m;x++){
		cout<<b[x]<<" ";
	}
	return 0;
}

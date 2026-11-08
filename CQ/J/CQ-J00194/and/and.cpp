#include<bits/stdc++.h>
using namespace std;
long long n,m,mx,ans;
long long ax[200005],c[200005],x[200005],b[20005];
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	int k=1,ds=1;
	for(int i=1;i<=n;i++){
		cin>>c[i];
		mx=max(mx,c[i]);
	}
	sort(c+1,c+n+1);
    if(m==1)cout<<mx;
    else if(m==n){
    	for(int i=1;i<=n;i++){
    		int y=1;
		    while(c[i]!=1){
			    if(c[i]%2==0){
			    	if(x[y]!=0){
			    		x[y]=0;
					}
				}
				y++;
				c[i]%=2;
		    }
		    if(mx==c[i]){
		    	while(c[i]!=1){
		    		ax[k]=c[i]%2;
		    		c[i]%=2;
		    		k++;
			    }
			}
	    }
	    for(int i=k;i>0;i--){
	    	if(x[i]!=0){
	    		b[ds]=1;
	    		ds++;
			}
		}
		for(int i=1;i<=ds;i++){
			ans+=b[i]*pow(2,ds-1);
		}
		cout<<ans;
	}
	return 0;
}

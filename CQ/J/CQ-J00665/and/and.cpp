#include<bits/stdc++.h>
using namespace std;
int n,m;
long long ans;
long long a;
int b[200005][32],c[200005],k[200005],s[32];
int main(){
	freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a;
		long long j=0;
		while(a!=0){
			b[i][j]=a%2;
			a/=2;
			//cout<<b[i][j];
			j++;
		}//cout<<"\n";
		c[i]=i;
	}
	int g=n;
	for(int i=30;i>=0;i--){
		int h=0;
		for(int j=0;j<g;j++){
		    if(b[c[j]][i]==1){
		    k[h]=c[j];
		    h++;
			}
	    }
	    if(h>=m){
			//cout<<h<<" "<<g<<"\n";
	    	for(int j=0;j<h;j++){
		    c[j]=k[j];
			}
	        g=h;
	        s[i]=1;
	    }
	}
	int nl=1;
	for(int i=0;i<=30;i++){
		ans+=nl*s[i];
		nl*=2;
	}
	cout<<ans;
	return 0;
}

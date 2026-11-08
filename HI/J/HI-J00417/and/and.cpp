#include <bits/stdc++.h> 
using namespace std;
int a[100005],s[10005],c[10005];
int t;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
    int n,m,q;
    cin>>n>>m>>q;
    int k=1;
    while(q>=1){
		    s[k]=q%2;
		    c[k]=s[k];
		    q/=2;
		    k++;
	    }
    for(int i=2;i<=n;i++){
    	cin>>a[i];
	    int k=1;
        while(a[i]>=1){
	        s[k]=a[i]%2;
	        if(c[k]==s[k]){
		        c[k]=1;
		    }
		    else
		        c[k]=0;
		a[i]/=2;
		k++;
    	}
    	t+=c[i]*(2^(i-1));
	}
	cout<<t;
	return 0;
}

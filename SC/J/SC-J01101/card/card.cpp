#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],b[500005],c,s[500005],ss[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
	    cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			s[j]=0;
		}
		c=0;
		for(int j=i;j<=n;j++){
			c=c+1;
			b[c]=a[j];
			s[a[j]]=s[a[j]]+1;
			if(s[a[j]]==2){
				s[a[j]]=s[a[j]]-1;
				c=c-1;
				while(b[c]!=a[j]){
					s[b[c]]=s[b[c]]-1;
					c=c-1;
		    	}
			}
		}
		for(int j=1;j<=c;j++){
			ss[b[j]]=ss[b[j]]+1;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ss[i]<<" ";
	}
	return 0;
} 
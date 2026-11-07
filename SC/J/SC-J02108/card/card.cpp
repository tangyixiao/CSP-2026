#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	vector<int>a(n),ans(m+1,0);
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++){
	    vector<int>b(n),c(m+1,-1);
        for(int j=i;j<n;j++){
       	    if(c[a[j]]==-1){
       	  	    c[a[j]]=j;
       	  	    b[j]=a[j];
			}
			else{
				for(int k=c[a[j]];k<j;k++){
					c[b[k]]=-1;
					b[k]=0;
				}
				c[a[j]]=j;
       	  	    b[j]=a[j];
			}	
	   }
	   for(int j=i;j<n;j++){
	   	  if(b[j]) ans[b[j]]++;
	   }
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	return 0;
} 
/*di yi ci can jia CSP
RP++
luogu:jyx0228
tian tian kai xin
hai you 10min
dai mai xie wan le,xie de yi tuo,bu gai le,neng pao jiu xing*/
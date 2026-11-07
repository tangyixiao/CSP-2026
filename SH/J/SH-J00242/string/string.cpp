#include<bits/stdc++.h>
using namespace std;

int n,a[200005];
char s[200005];

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>s[i];
	}
	int cnt=0;
	unsigned long long ans=0;
	while(cnt<n){
		int u=1,p=n;
		if(s[u]==s[p]){
			if(a[p]<a[u]){
				a[u]-=a[p];
				p--;
				cnt++;
			}
			else{
			    if(a[p]>a[u]){  
			 	   a[p]-=a[u];
				   u++;
				   cnt++;
			   }else{
			   	    if(a[p]==a[u]){
				        a[p]=0;
		                a[u]=0;
		                p--;u++; 
		                cnt+=2;
			         }
			   }
		    } 
		}else{
			if(a[p]<a[u]){
				ans+=a[p];
				a[u]-=a[p];
				p--;
				cnt++; 
			}
			else{
			    if(a[p]>a[u]){
				  a[p]-=a[u];
				  ans+=a[u];
				  u++;
				  cnt++;
			    }else{
			        if(a[p]==a[u]){
		    	        ans+=a[p];
		                p--;u++; 
		                cnt+=2;
			        }
		        }
		    }
	    }
	}
	cout<<ans; 
	return 0;
}

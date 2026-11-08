#include<bits/stdc++.h>
using namespace std;

int n,m,v,z;
int a[1000005];
int t[1000005];

int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n;
	cin>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
		    if(j!=i){
		    	if(i<=2){
		    	    if(a[j]!=t[i-1]){
			        	t[i]=max(t[i],a[j]);
				    } 
				}
				else if(i==3){
					if(a[j]!=t[i-1] && a[j]!=t[i-2]){
			        	t[i]=max(t[i],a[j]);
			        }
				}
				else if(i==4){
					if(a[j]!=t[i-1] && a[j]!=t[i-2] && a[j]!=t[i-3]){
			        	t[i]=max(t[i],a[j]);
			        }
				}
				else if(i==5){
					if(a[j]!=t[i-1] && a[j]!=t[i-2] && a[j]!=t[i-3] && a[j]!=t[i-4]){
			        	t[i]=max(t[i],a[j]);
			        }
				}
	    	}
		}
	}
	v=t[m];
	cout<<v;
	return 0;
}

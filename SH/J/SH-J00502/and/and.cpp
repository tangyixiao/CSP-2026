#include<bits/stdc++.h>
using namespace std;
const int N=10000009;
int a[N],t[N],temp[N],position=0;
int main(){
//	freopen("and.in","r",stdin);
//	freopen("and.out","w",stdout);
	int n,m,ans=(1<<31)-1;
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1; i<=n;i++){
		int b=a[i];
		while(b>0){
			int logb=log(b)/log(2);
	   		 t[logb]++;
	   		 b-=(1<<logb);
    	}
	}
	for(int i=n;i>=1;i--){
		if(t[i]>=m){
			for(int j=1;j<=n;j++){
				int b=a[j];
				while(b>0){
					int logb=log(b)/log(2);
					if(logb==t[i])b=0;
					else{
					b-=(1<<logb);
					if(b=0)a[j]=0;
		    		}
				}
			}
			for(int j=1;j<=n;j++){
	    		int b=a[j];
				while(b>0){
				int logb=log(b)/log(2);
	  			  t[logb]++;
	  			  b-=(1<<logb);
    			}
 		   	}
		}
}
	for(int i=1;i<=n;i++)
	  if(a[i]!=0)ans&=a[i];
	cout<<ans;
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
int a[200006];
char c[200006];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
    int n,m;
    long long an=0;
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i]>>c[i];
    for(int i=0;i<n/2;i++){
    	if(a[i]>a[n-i-1]){
			if(c[i]!=c[n-i-1])an+=a[n-1-i];
    		if(c[i]==c[n-2-i]){
    			a[n-2-i]=a[n-2-i]-(a[i]-a[n-i-1]);
    			a[n-1-i]=a[i];
			}
			else {
				an+=a[i]-a[n-i-1];
				a[n-2-i]=a[n-2-i]-(a[i]-a[n-i-1]);
    			a[n-1-i]=a[i];
			}
		}
		else{
			if(c[n-i-1]!=c[i])an+=a[i];
    		if(c[n-i-1]==c[i+1]){
    			a[i+1]=a[i+1]-(a[n-i-1]-a[i]);
    			a[i]=a[n-i-1];
			}
			else {
				an+=a[n-i-1]-a[i];
				a[i+1]=a[i+1]-(a[n-i-1]-a[i]);
    			a[i]=a[n-i-1];
			}
		}
	}
	cout<<an;
} 
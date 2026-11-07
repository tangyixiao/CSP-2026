#include<bits/stdc++.h>
using namespace std;
long long n,a[100010],x,y,ans=0;
char c[100010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	for(long long i=1,j=n;i<=n&&j>i;){
	    long long s=min(a[i]-x,a[j]-y);
		if(c[i]==c[j]){
			x+=s;
			y+=s;
		}
		else {
			ans+=s;
			x+=s;
			y+=s;
		}
		if(x==a[i]){
				i++;
				x=0;
			}
		if(y==a[j]){
			    j--;
		    	y=0;	
			}
	}
	cout<<ans;
	return 0;
}

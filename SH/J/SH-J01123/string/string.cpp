#include <bits/stdc++.h>
using namespace std;
int n,sum,c,ans,x,y; 
int main(){
    freopen ("string.in","r",stdin);
    freopen ("string.out","w",stdout);
    cin>>n;
    int num[n+1]={},b[n+1]={};
    char a[n+1];
    for(int i=1;i<=n;i++){
    	cin>>num[i]>>a[i];
    	sum+=num[i];
    	b[i]=b[i-1]+num[i];
	}
	for(int i=1;i<=sum/2;i++){
		for(int j=1;j<=n;j++){
			if(i>b[j-1]&&i<=b[j]){
				x=j;
				break;
			}
		}
		for(int j=n;j>=1;j--){
			if((sum-i+1)>b[j-1]&&(sum-i+1)<=b[j]){
				y=j;
				break;
			}
		}
		if(a[x]!=a[y]){
			ans++;
		}
	}
	cout<<ans;
}

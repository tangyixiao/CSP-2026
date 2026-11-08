#include<bits/stdc++.h>
using namespace std;
long long n,a,ans,k,p=1,sum;
char c[100000000],h;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>k>>h;
		ans=k+ans;
		for(int j=p;j<=ans;j++){
			c[j]=h;
		}
		p=ans+1;
	}
	int l=1,r=ans;
	if(ans%2==1){
		while(r!=l){
			if(c[r]!=c[l]){
				sum++;
			}
			r=r-1;
			l=l+1;
		}
	}else{
		while(l<r){
			if(c[r]!=c[l]){
				sum++;
			}
			r=r-1;
			l=l+1;
		}
	}	
	
	cout<<sum;
	return 0;	
}

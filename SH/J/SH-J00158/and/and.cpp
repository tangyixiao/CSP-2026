#include<bits/stdc++.h> 
using namespace std;
const int N=1e5+10;
int a[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
    int n,m,max=0,sum=0;
	cin>>n,m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		for(int i=1;i<=n;i++){
			if(a[i]>max){
				max=a[i];
			}
		}
		cout<<max;
		return 0;
	} 
	if(m==n){
		for(int i=1;i<=n;i++){
			if(sum==0){
				sum=(a[i] & a[i+1]); 
			}else{
				sum=(sum & a[i]); 
			}
		}
		cout<<sum;
		return 0;
	}
	if(m=n-1){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				if(sum==0){
				sum=(a[j] & a[j+1]); 
			}else{
				sum=(sum & a[j]); 
		}
	}
}
		cout<<sum;
		return 0;
	}	
}
	


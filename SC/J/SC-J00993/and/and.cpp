#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[10000];
int b[1000]={2,4,8,16,32,64,128,256,512,1024,2048,4096};
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}sort(a+1,a+n+1);
	if(m==1){
		for(int i=n;i>=1;i--){
			for(int j=n;j>=1;j--){
				if(a[i]==b[j]-1){
					cout<<a[i];
				} 
			}
		}
	}else{
		for(int i=n;i>=1;i--){
			for(int j=n;j>=1;j--){
				if(a[i]==b[j]){
					cout<<a[i];
				} 
			}
		}
	}
	return 0;
}
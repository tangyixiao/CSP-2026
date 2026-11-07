#include<bits/stdc++.h>
using namespace std;
int n;
long long len;
long long ans;
int a[300000];
char b[300000];
int i,j;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
		len+=a[i];
	}
	i=1;
	j=n;
	for( i=1;i<=j;){
		for( j=n;j>=i;){
			
			if(b[j]==b[i]){
				
				if(a[i]>a[j]){
					a[i]-=a[j];
					a[j]=0;
					j--;
				}
				else if(a[i]==a[j]){
					a[i]=0;
					a[j]=0;
					i++;
					j--;
				}
				else{
					a[j]-=a[i];
					a[i]==0;
					i++;
				}
			}
			if(!(b[j]==b[i])){
				
				if(a[i]>a[j]){
					ans+=a[j];
					a[i]-=a[j];
					a[j]=0;
					j--;
					
				}
				else if(a[i]==a[j]){
					ans+=a[j];
					a[i]=0;
					a[j]=0;
					i++;
					j--;
					
					
				}
				else{
					ans+=a[i];
					a[j]-=a[i];
					a[i]==0;
					i++;
					
				}
			}
			
		}
		
	}
	cout<<ans;
	return 0;
}

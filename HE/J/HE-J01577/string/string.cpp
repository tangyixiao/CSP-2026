#include <bits/stdc++.h>
using namespace std;
int n,a,p=0,t,cnt=0;
string h,f[100005],k[100005]; 
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<=n-1;i++){
		cin>>a>>h;

		for(int j=0;j<=a-1;j++){
		f[p]=h;
	
			
		}
		p+=a;
		
		
		
	}
	cout<<f[0]<<f[1]<<f[2]<<f[3];
	
		t=p/=2;
		if(p%2==1){
		
		for(int i=0;i<=t-1;i++){
			if(f[i+t+1]!=f[i]){
				cnt++;
			}
			
		}
	}
		else{
		
		for(int i=0;i<=t-1;i++){
			if(f[i+t]!=f[i]){
				cnt++;
			}
			
		}}
		

	cout<<cnt;
	
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen(string.in,'r',stdin)
	freopen(string.out,'w',stdout)
	int n;
	int m=0,ans=0;
	long long a[20005];
	char c[20005];
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		cin>>c[i];	
	}
	for(int i=n;i>1;i--){
		if(c[i]==c[i-1]){
			m=1; 
		}else{
			m=0;
			
		}
	}
	for(int i=1;i<=n;i++){
		if(c[1]!=c[i]){
			ans+=a[i];
		}
	}
	if(m==1){
		cout<<0;
	}else{
		cout<<ans;
	}
	
	return 0;
}

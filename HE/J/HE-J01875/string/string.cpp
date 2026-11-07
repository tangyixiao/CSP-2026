#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	string S;
	string S1;
	long long a;
	string c;
	long long ans=0;
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>a>>c;
		for (long long j=1;j<=a;j++){
			S+=c;
		}
		
	}
	for(long long i=n+1;i>-1;i--){
		S1+=S[i];
	}
	if(S1==S)cout<<0;
	else{
		for (long long i=0;i<n;i++){
		if(S1[i]!=S[i]){
			S1[i]=S[i];
			ans++;
			
		}
	}
		cout<<ans<<endl;
		
	}
	
	
return 0;	
}
 


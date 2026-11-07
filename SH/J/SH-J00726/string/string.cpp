#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	long long m;
	char x;
	string a={};
	long long ans=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>m>>x;
		for(long long j=1;j<=m;j++){
			a+=x;
		}
	}
    for(int i=0;i<=a.length()/2;i++){
    	if(a[i]!=a[a.length()-i+1]){
    		ans++;
		}
	}
	cout<<ans;
    
	return 0; 
}

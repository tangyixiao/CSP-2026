#include<bits/stdc++.h>
using namespace std;
char a[100000005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	long long ans=0;
	for(int i=1;i<=n;i++){
		int x;
		char y;
		cin>>x;
		cin>>y;
		for(int i=1;i<=x;i++){
		    ans++;
			a[ans]=y;
			
		} 
	}
	long long k=0;
	for(int i=1;i<=(ans+1)/2;i++){
		if(a[i]!=a[ans+1-i]){
			k++;
		}
	}
	cout<<k;
	return 0;
}

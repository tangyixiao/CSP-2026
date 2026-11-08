#include<bits/stdc++.h>
using namespace std;
long long x[1000005];
string a;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,cnt=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x[i]>>a[i];
	}
	for(int i=1;i<=n;i++){
		if(a[i]==a[i+1]){
			cnt++;
		}
	}
	if(cnt+1==n){
		cout<<0;
	}
	
	
	
	return 0;
}

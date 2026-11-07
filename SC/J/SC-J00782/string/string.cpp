#include<bits/stdc++.h>
using namespace std;
long long a[2000005],n;
char c[100005],hiu[100005],zhen[100005];
long long ans=0,shu=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	for(int i=1;i<=n;i++){
		if(c[i]==c[i-1]){
			cout<<0;
			return 0;
		}
	}
	
	return 0;
} 
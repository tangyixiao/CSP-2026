#include<bits/stdc++.h>
using namespace std;
long long a[10000005],b[1000005],ap[1000005];
int main(){
	freopen("card.in","r",stdin);
freopen("card.out","w",stdout);
	long long n,m,ca;
	cin>>n>>m;
	for(int i=0;i<n;i++){
	cin>>a[i];
	}
	for(int ca=1;ca<=n;ca++){
	for(int i=ca-1;i<n;i++){
		b[i]=a[i];
		for(int j=0;j<i;j++){
			if(b[i]==b[j]){
				for(int p=j;p<i;p++)b[p]=0;
			}
		}
	}
	for(int i=0;i<n;i++){ap[b[i]]++;
	b[i]=0;
	}
}
for(int i=1;i<=m;i++)cout<<ap[i]<<" ";
}

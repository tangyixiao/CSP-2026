#include<bits/stdc++.h>
using namespace std;
bool a[200005][32];
bool b[200005];

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		int t,k=0;
		b[i]=1;
		cin>>t;
		while(t){
			a[i][k++]=t&1;
			t/=2;
		}
	}
	int ans=0;
	for(int i=30;i>=0;i--){
		int s=0;
		for(int j=1;j<=n;j++){
			s+=a[j][i]*b[j];
		}
		if(s>=m){
			ans+=1<<i;
			for(int j=1;j<=n;j++){
				b[j]=a[j][i]*b[j];
			}
		}
	}
	cout<<ans;
	return 0;
}
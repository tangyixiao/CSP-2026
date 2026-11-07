#include<bits/stdc++.h>
using namespace std;
int a[10101010];bool b[10101010]={0};
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;cin>>n>>m;
	
	int t;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}int ans=0b11111111111111111111;
	int tmp=0;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(ans&a[j]>tmp&&(!b[j])){
				//cout<<(ans&a[j])<<endl;
				tmp=(ans&a[j]);
				t=j;
			}
		}
		b[t]=1;
		ans=tmp;
		tmp=0;
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}

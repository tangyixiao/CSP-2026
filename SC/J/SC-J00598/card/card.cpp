#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	int a[200005],cnt[200005];
	cin>>n>>m;
	if(m==1){
		cout<<n;
		return 0;
	}else if(m==2){
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		int a1=a[n];
		int a2;
		for(int i=1;i<=n;i++){
			if(a[i]!=a[n]){
				int a[i];
			}
		}	
		if(n%2==0){
			cout<<n/2<<" "<<n;
		}else{
			if(a1>a2){
				cout<<n/2+1<<" "<<n;
			}else{
				cout<<n<<" "<<n/2;
			}
		}
		return 0;
	}else{
		for(int i=1;i<=n;i++){
			cin>>a[i];
			for(int j=1;j<=m;j++){
				if(a[i]==j)cnt[j]++;
			}
		}
		for(int i=1;i<=m;i++){
			cout<<cnt[i]<<" ";
			cnt[i+1]+=cnt[i];
		}
	}
	return 0;
}
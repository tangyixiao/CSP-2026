#include<iostream>
using namespace std;
long long a[200005],maxx[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,k,ans;
	cin>>n>>m;
	for(int i = 1;i <= n;i++)cin>>a[i];
	for(int i = 1;i <= m;i++){
		for(int j = 1;j <= n;j++){
			if(maxx[i]<a[j]){
				maxx[i]=a[j];
				k=j;
			}	
		}
		a[k]=-1;
	}
	ans=maxx[1];
	for(int i = 2;i <= m;i++)ans&=maxx[i];
	cout<<ans;
	return 0;
}
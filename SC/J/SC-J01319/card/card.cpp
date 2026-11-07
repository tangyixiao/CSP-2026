#include<bits/stdc++.h>
using namespace std;
int a[200010],b[300010],ans[300010];
bool cnt[300010];
int d[15000][13000];

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
		b[a[i]]++;
	}
	
	d[a[n-1]][0]=1;
	d[a[n-1]][1]=a[n-1];
	ans[d[a[n-1]][1]]+=b[a[n-1]];
	cnt[a[n-1]]=1;
	for(int i=n-2;i>=0;i--){
		if(cnt[a[i]]==0){
			cnt[a[i]]=1;
			
			int l=d[a[i+1]][0];
			d[a[i]][0]=l+1;
			
//			cout<<a[i]<<endl;
			
			for(int j=1;j<=l;j++){
				ans[d[a[i+1]][j]]+=b[a[i]];
//				cout<<"	"<<d[a[i+1]][j]<<"->"<<b[a[i]]<<endl;
				d[a[i]][j+1]=d[a[i+1]][j];
			}
			d[a[i]][1]=a[i];
			ans[d[a[i]][1]]+=b[a[i]];
		}
	}
	

	
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	
	return 0;
}
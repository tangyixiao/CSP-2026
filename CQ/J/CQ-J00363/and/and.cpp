#include<bits/stdc++.h>
using namespace std;
int n,m;
const int N=2e5+5;
int a[N];
bool b[N][35];
int pw[35];
int num[35];
bool vis[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	pw[0]=1;
	for(int i=1;i<=30;i++){
		pw[i]=pw[i-1]*2;
	}
	for(int i=1;i<=n;i++){
		cin>>a[i]; 
		for(int j=30;j>=0;j--){
			if(a[i]>=pw[j]){
				b[i][j]=true;
				num[j]++;
				a[i]-=pw[j];
			}
		}
	}
	int last=-1;
	for(int i=30;i>=0;i--){
		if(num[i]>=m){
			last=i;
			break;
		}
	}
	int ans=0;
	if(last==-1){
		cout<<0;
		return 0;
	}
	ans+=pw[last];
	for(int i=1;i<=n;i++) vis[i]=true; 
	for(int i=1;i<=n;i++){
		if(b[i][last]!=true){
			vis[i]=false;
		}
	}
	for(int i=last-1;i>=0;i--){
//		cout<<i<<endl;
//		for(int j=1;j<=n;j++){
//			cout<<vis[j]<<" ";
//		}
//		cout<<endl;
		int sum=0;
		for(int j=1;j<=n;j++){
			if(b[j][i]==true&&vis[j]==true) {
				sum++;
			}
		}
//		cout<<sum<<endl;
		if(sum>=m){
			for(int j=1;j<=n;j++){
				if(b[j][i]!=true&&vis[j]!=false){
					vis[j]=false;
				}
			}
			ans+=pw[i];
		}
	}
	cout<<ans;
	return 0;
}
/*5 3
31 3 1 15 7*/

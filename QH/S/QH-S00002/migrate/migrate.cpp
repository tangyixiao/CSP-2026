#include<iostream>
using namespace std;
#define int long long
const int N=2e6+10;
int a[N];
int n,d;
int flag;
int mx;
void solve(int s,int t,int k){
//	cout<<s<<' '<<t<<' '<<k<<' '<<mx<<' '<<flag<<endl;
	if(s==t){
		if(k<mx){
			mx=k;
			flag=1;
		}
		else if(k==mx){
			flag++;
		}
		
		return;
	}
	if(k>=mx) return;
	for(int i=s+1;i<=t;i++){
		if(a[i]-a[s]<=d){
			solve(i,t,k+1);
		}
		else break;
	}
}
signed main(){
	freopen("migrate.in", "r", stdin);
	freopen("migrate.out", "w", stdout);
	int c,t;
	cin>>c>>t;
	while(t--){
		cin>>n>>d;
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		
		int cnt=0;
		for(int i=1;i<=n;i++){
			for(int j=i+3;j<=n;j++){
				flag=0;
				mx=INT_MAX;
				solve(i,j,0);
				if(flag==2){
//					cout<<i<<' '<<j<<endl;
					cnt++;
				}
			}
		}
		cout<<cnt<<endl;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}

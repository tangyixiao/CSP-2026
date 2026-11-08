#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+10;
const int M=32; 
int a[N][M+1];
int b[N];
int sum[M+1];
int n,m,ans;
int er[35]={1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,65536,131072,262144,524288,1048576,2097152,4194304,8388608,16777216,33554432,67108864,134217728,268435456,536870912,1073741824,2147483648,4294967296};
vector<int> t;
void cale(){
	for(int j=0;j<M;j++){
		sum[j]=0;
	}
	for(int i=0;i<t.size();i++){
		for(int j=0;j<M;j++){
			sum[j]+=a[t[i]][j];
		}
	}
	return;
}
void out(){
	for(int i=0;i<M;i++){
		cout<<sum[i];
	}
	cout<<"\n";
}
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		int tmp=0;
		b[i]=x;
		while(x){
			a[i][tmp]=x&1;
			sum[tmp]+=x&1;
			tmp++;
			x=x>>1;
		}
	}
//	for(int i=1;i<=n;i++){
//		for(int j=0;j<=M;j++){
//			cout<<a[i][j];
//		}
//		cout<<"\n";
//	}
	int tmp=33;
	for(int i=M-1;i>=0;i--){
		if(sum[i]>=m){
			for(int j=1;j<=n;j++){
				if(a[j][i]==1){
					t.push_back(j);
				}
			}
			tmp=i;
			cale();
			ans+=er[i];
			break;
		}
	}
	if(tmp==33){
		cout<<0;return 0;
	}
	for(int i=tmp-1;i>=0;i--){
		if(sum[i]>=m){
			for(int j=0;j<t.size();j++){
				if(a[t[j]][i]==0){
					t.erase(t.begin()+j);
//					for(int k=0;k<t.size();k++){
//						cout<<t[k]<<" ";
//					}
//					cout<<"\n";
					j--;
				}
			}
			cale();
			ans+=er[i];
		}
	}
	cout<<ans;
	return 0;
}
/*
4 2
3 15 12 12

*/

#include<bits/stdc++.h>
#define int long long
using namespace std;
int pow_2[31]={1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,65536,131072,262144,524288,1048576,
			2097152,4194304,8388608,16777216,33554432,67108864,134217728,268435456,536870912,1073741824};
int n,m;
bool aflag=true,bflag=true;
bool check(int x){
	for(int i=0;i<=30;i++){
		if(x==pow_2[i])
			return true;
	}
	return true;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>n>>m;
	vector<vector<bool>> And(n+5,vector<bool>(35,false));
	vector<int> a(n);
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a.begin(),a.end(),[](const int &x,const int &y){
		return x>y;
	});
	for(int i=0;i<n;i++){
		if(a[i+1]-a[i]!=1){
			cout<<i+1<<' '<<i;
			cout<<a[i+1]<<" "<<a[i];
			bflag=false;
			break;
		}
	}
	if(!check(n)) bflag=false;
	int A=a[2],B=a[1];
	for(int i=0;i<n;i++){
		for(int j=1;a[i];j++){
			int t=a[i]%2;
			if(t) aflag=false;
			And[i][j]=t;
			a[i]/=2;
		}
	}
	if(n==1){
		cout<<0<<'\n';
		return 0;
	}
	if(aflag){//特殊性质A;
		cout<<A<<'\n';
		return 0;
	}
	if(bflag){//特殊性质B;
		cout<<B<<'\n';
		return 0;
	}
	while(1){
		//TODO
	}
	return 0;
}
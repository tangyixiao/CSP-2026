#include<bits/stdc++.h>
using namespace std;
long long t=1,m,n,a[200005],ans,b[50]={0,1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,65536,131072,262144,524288,1048576,2097152,4194304,8388608,16777216,33554432,67108864,134217728,268435456,536870912,1073741824};
bool c[200005];
bool cmp(int a,int b){
	return a>b;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n,cmp);
	if(m==1){
		cout<<a[1];
		return 0;
	}
	while(a[1]>=b[t]){
		t++;
	}
	t--;
	while(t>0){
		int m1=0;
		for(int i=1;i<=n;i++){
			if((a[i]/b[t])%2==1&&c[i]==0)m1++;
		}
		if(m1>=m){
			ans+=b[t];
			for(int i=1;i<=n;i++){
				if((a[i]/b[t])%2==0)c[i]=1;
			}
		}
		t--;
	}
	cout<<ans;
	return 0;
}
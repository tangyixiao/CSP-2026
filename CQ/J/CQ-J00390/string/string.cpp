#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=1e6+5;
int n,a[N],cnt,idxl,idxr;
char c[N],cl,cr;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	int l=1,r=n;
	for(;l<=n||r>=1;){
		if(idxl==0){
			cl=c[l];
			idxl=a[l];
			l++;
		}
		if(idxr==0){
			cr=c[r];
			idxr=a[r];
			r--;
		}
		if(idxl<=idxr){
			if(cr!=cl)cnt+=idxl;
			idxr-=idxl,idxl=0;
		}
		else{
			if(cr!=cl)cnt+=idxr;
			idxl-=idxr,idxr=0;
		}
	}
	cout<<cnt/2;
	return 0;
}


#include<bits/stdc++.h>
#define int long long
using namespace std;
int n;
bool f;
int sum;
int cnt;
int jl;
int mm,nn;
char aa[10000000];
struct mp{
	int e;
	char s;
}a[200010];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].e>>a[i].s;
		if(i>1){
			if(a[i].s!=a[i-1].s){
				f=true;jl++;
			}
		}
	}
		if(f==false){
		cout<<0;
		return 0;
	}
	if(jl==1) {
		mm+=a[1].e;
		int i=2;
		while(a[i-1].s==a[i].s&&i<=n){
			mm+=a[i].e;++i;
				
		}
		for(int j=i;j<=n;j++){
			nn+=a[j].e;
		}
		cout<<min(mm,nn);
		return 0;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=a[i].e;j++){
			aa[++cnt]=a[i].s;
		}
	}
	int l=1;
	int r=cnt;
	while(l<=r){
			if(aa[l]!=aa[r]){
				sum++;
			}
		l++;
		r--;
	}
    cout<<sum;
	return 0;
}

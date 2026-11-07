#include<bits/stdc++.h>
using namespace std;
int n,m,cnt=0;
long long a[200010],f[35],ans=0;;
bool b[200010][35],tp[200010];
void mi(){
	long long p=1;
	for(int i=0;i<31;++i){
		f[i]=p;
		p*=2;
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	mi();
	cin >> n >> m;
	for(int i=0;i<n;++i){
		cin >> a[i];
		int j=0;
		long long l=a[i];
		while(f[j+1]<=l)j++;
		cnt=max(cnt,j);
		while(j>=0){
			long long k=f[j];
			if(l>=k){
				b[i][j]=1;
				l-=k;
			}
			j--;
		}
	}
	int sum;
	for(int i=cnt;i>=0;--i){
		sum=0;
		for(int j=0;j<n;++j){
			if(!tp[j] && b[j][i]){
				sum++;
			}
		}
		if(sum>=m){
			for(int j=0;j<n;++j){
				if(!tp[j] && !b[j][i]){
					tp[j]=1;
				}
			}
		}
	}
	for(int i=0;i<n;++i){
		if(!tp[i]){
			if(ans==0)ans=a[i];
			else ans=ans&a[i];
		}
	}
	cout << ans;
	return 0;
}
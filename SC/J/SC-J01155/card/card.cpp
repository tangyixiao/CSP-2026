#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10,M=3e5+10;
long long n,m,a[N],s[M],mx;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		mx=max(mx,a[i]);
	}
	for(int i=1;i<=n;i++){
		int t=i;
		for(int j=t;j<=n;j++){
			for(int k=t;k<j;k++){
				if(a[k]==a[j]){
					t+=n-k-1;
				}
			}
		}for(int k=t;k<=n;k++){
			//cout<<a[k]<<" ";
			s[a[k]]++;
		}	
		//cout<<"\n";
	}
	for(int i=1;i<=mx;i++){
		cout<<s[i]<<" ";
	}
	return 0;
}

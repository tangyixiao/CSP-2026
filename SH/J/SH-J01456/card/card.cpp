#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=500009; 
int n,m,a[N],b[N],x[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int cnt=1;cnt<=n;cnt++){
		for(int i=cnt;i<=n;i++){
			b[i]=a[i];
		}
		for(int i=cnt;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(b[i]==b[j]&&b[i]!=-1){
					for(int k=i+1;k<=j;k++){
						b[k]=-1;
					}
				}
			}
		}
		for(int i=cnt;i<=n;i++){
			if(b[i]!=-1){
				x[b[i]]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<x[i]<<" ";
	}
	return 0;
}

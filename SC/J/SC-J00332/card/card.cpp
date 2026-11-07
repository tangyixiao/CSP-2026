#include<bits/stdc++.h>
using namespace std;
int a[500005],b[500005],c[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	for(int i=1;i<=n;i++){
		int ans = 0,sum = 0;
		for(int j = i;j<=n;j++){
			b[j-i+1-ans] = a[j];
			for(int k = 1;k<=j-i-ans;k++){
				if(b[j-i+1-ans] == b[k]){
					for(int v = k;v<=j-i-ans;v++){
						b[v] = 0;
						sum++;	
					}
					b[k] = b[j-i-ans+1];
					b[j-i-ans+1] = 0;
					ans += sum;
					sum = 0;
				}
			}
		}
		for(int j=1;j<=m;j++){
			for(int k = 1;k <= n;k++){
				if(b[k] == j){
					c[j]+=1;
				}
			}
		}
		for(int j = 1;j<=n;j++){
			b[j] = 0;
		}
	}
	for(int i=1;i<=m;i++){
		cout << c[i] <<" ";
	}
	return 0;
}
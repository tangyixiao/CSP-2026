#include <bits/stdc++.h>
using namespace std;
int a[500005],mum[500005],mather[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin >> n >> m;
	for (int i = 1;i<=n;i++){
		cin >> a[i];
	}
	for (int i = 1;i<=n;i++){
		for (int j = i;j<=n;j++){
			mum[j]=a[j];
		}
		for (int j = i;j<=n;j++){
			for (int k = j+1;k<=n;k++){
				if (mum[j]==mum[k]){
					for (int d = j;d<k;d++)
					    mum[d]=0;
				}
			}
		}
		for(int j = i;j<=n;j++){
			if (mum[j]>0){
				mather[mum[j]]++;
			}
		}
	}
	for (int i = 1;i<=m;i++){
		if (mather[i]>0){
			cout << mather[i] << " ";
		}
	}
	return 0;
}

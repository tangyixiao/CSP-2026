#include <bits/stdc++.h>
using namespace std;
long long n,m,a[500001],d;
bool b;
int main (){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	b=1;
	for (int i=1;i<=n;i++){
		cin >> a[i];
		if (a[i]<a[i-1])b=0;
	}
	if (b){
		for (int i=1;i<=m;i++){
			d=1;
			for (int j=i+1;j<=n;j++){
				if (a[j]==a[j-1]) d--;
				d++;
			}
			cout << d << " ";
		}
	}
	else {
		for (int i=1;i<=m;i++){
			for (int j=i+1;j<=n;j++){
				b++;
				for (int o=i;o<j;o++){
					if (a[o]==a[j]){
						b-=j-i;
					}
				}
			}
			cout << d << " ";
		}
	}
	return 0;
}

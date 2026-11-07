#include <bits/stdc++.h>
using namespace std;
int s[500005];
int back=0;
int a[500005],c[300005];

int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<=n;i++){
		back=0;
		s[++back]=a[i];
		for(int j=i+1;j<n;j++){
			for(int k=1;k<=back;k++){
				if(s[k]==a[j]){
					back=k-1;
					break;
				}
			}
			s[++back]=a[j];
		}
		for(int j=1;j<=back;j++){
			c[s[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<c[i]<<" ";
	}

	return 0;
}
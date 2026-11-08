#include<bits/stdc++.h>
using namespace std;
int n;
int m;
int a[500005],b[500005],num[300005];
void cardg(int x){
	for(int i=0;i<500005;i++){
		b[i]=0;
	}
	for(int i=0;i<n;i++){
		b[i]=a[i];
	}
	int l=x-1,r=n-1;
	for(int i=l;i<n;i++){
		int t=a[i];
		for(int j=0;j<=r;j++){
			if(b[j]==t){
				for(int h=0;h<=r;h++){
					b[h]=0;
				}
				r=-1;
			}
		}
		b[++r]=t;
	}
	for(int i=0;i<=r;i++){
		num[b[i]]++;
	}
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cardg(i+1);
	}
	for(int i=1;i<=m;i++){
		cout<<num[i]<<' ';
	}
	return 0;
}

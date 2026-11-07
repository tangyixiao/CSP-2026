#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int a[N], b[N], l;
int st[N], k[N];
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin>>n>>m;
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	for(int i=0; i<n; i++){
		b[l]=a[i];
		st[i]=a[i];
		for(int j=0; j<i; j++){
			if(st[j]=a[i]){
				for(int i=0; i<l; i++){
					b[i]=0;
				}
				l=0;
				break;
			}
		}
		l++;
	}
	int g=0;
	for(int i=0; i<l; i++){
		if(b[i]){
			k[g]++;
		}
		g++;
	}
	for(int i=0; i<l; i++){
		cout<<k[i];
	}
	return 0;
}

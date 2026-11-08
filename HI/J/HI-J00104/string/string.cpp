#include<bits/stdc++.h>
using namespace std;
int n;
long long m[200005],maxx,cut;
char a[200005];

int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>m[i]>>a[i];
	}
	int l=1,r=n;
	while(l<r){
		if(m[l]>m[r]){
			if(a[l]==a[r]){
				m[l]=m[l]-m[r];
				m[r]=0;
				r--;
			}else{
				cut+=m[r];
				m[l]=m[l]-m[r];
				m[r]=0;
				r--;
			}
		}else if(m[l]<m[r]){
			if(a[l]==a[r]){
				m[r]=m[r]-m[l];
				m[l]=0;
				l++;
			}else{
				cut+=m[l];
				m[r]=m[r]-m[l];
				m[l]=0;
				l++;
			}
		}else{
			if(a[l]==a[r]){
				m[r]=m[r]-m[l];
				m[l]=0;
				l++;
				r--;
			}else{
				cut+=m[l];
				m[r]=m[r]-m[l];
				m[l]=0;
				l++;
				r--;
			}
		}
	}
	
	cout<<cut;
	return 0;
}


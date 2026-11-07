#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
long long a[N],n,m,maxx=INT_MIN;
long long l,px[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
		l=max(a[i],l);
		px[a[i]]++;
	}
	for(int i=l,ii=0;i>0;i--){
		if(px[i]>0){
			while(px[i]--){
				a[ii]=i;
				ii++;
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			long long andd=a[i];
			if(andd<maxx) break;
			for(int k=j;k<m+j-1;k++){
				andd=(andd&a[k]);
			}
			maxx=max(andd,maxx);
		}
	}
	cout<<maxx;
	return 0;
}

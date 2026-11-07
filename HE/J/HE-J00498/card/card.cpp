#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=5e5+10;
const int M=3e5+10;
int n,m,a[N],b[N],t[M],a2[N];
void kun(int w){
	memset(b,0,sizeof(b));
	memset(a2,0,sizeof(a2));
	for(int i=1;i<=n-w+1;i++){
		a2[i]=a[i+w-1];
	}
	b[1]=a2[1];
	int k=2;
	for(int i=2;i<=n-w+1;i++){
		int w2=lower_bound(b+1,b+1+k,a2[i])-b;
		if(w2==k+1){
			k++;
			b[k]=a2[i];
			a2[i]=0;
			
		}else{
//			cout<<w2<<" "<<k;
			a2[i]=0;
			for(int j=w2+1;j<=k;j++){
				b[i]=0;
				k--;
			}
		}
	}
	for(int i=1;i<=k;i++){
//		cout<<b[i]<<" ";
		t[b[i]]++;
	}
	cout<<endl;
}
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		kun(i);
	}
	for(int i=1;i<=m;i++){
		cout<<t[i]<<" ";
	}
	return 0;
} 
/*
2 1 3
*/

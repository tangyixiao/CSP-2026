#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	int maxn=-1,pos1,pos2;
	for(int i=1;i<n;i++){
		for(int j=i+1;j<=n;j++){
			if((a[i]&a[j])>maxn){
				pos1=a[i];
				pos2=a[j];
				maxn=a[i]&a[j];
			}
		}
	}
	swap(a[pos1],a[n]);
	swap(a[pos2],a[n-1]);
	n-=2;
	int pos=1;
	for(;m>2;m--){
		for(int i=1;i<n;i++){
			for(int j=i+1;j<=n;j++){
				if((a[i]&maxn)>(maxn&a[pos])){
					pos=a[i];
					cout<<maxn<<" "<<pos<<" "<<a[pos]<<" "<<(maxn&a[pos])<<endl;
				}
			}
		}
		maxn=(a[pos]&maxn);
		a[pos]=a[n];
		n--;
	}
	cout<<a[pos]<<" "<<a[pos1]<<" "<<a[pos2]<<" "<<maxn;
	return 0;
} 

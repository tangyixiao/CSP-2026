#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N=8e5+50;
int n,m,a[N],s=0,x[N];
bool cmp(int x,int y){
	return x>y;
}
int main(){
	int s=0;
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		for(int i=1;i<=n;i++){
			s=max(s,a[i]);
		}
		cout<<s;return 0;
	}
	if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(i!=j){
					x[i]=a[i]&a[j];
				}
			}
		}
		sort(x+1,x+1+n);
		cout<<x[n];return 0;
	}
	sort(a+1,a+1+n,cmp);
	s=a[1];
	for(int i=2;i<=m;i++){
		s=s&a[i];
	}
	cout<<s;
   	return 0;
}

#include<bits/stdc++.h>
using namespace std;
const int N=1e5*2+10;
long long a[N];
bool cmp(int x,int y){
	return x>y;
}
long long i,j,s,ma;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m; 
	cin>>n>>m;
	for(i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		sort(a+1,a+n+1,cmp);
		cout<<a[1];
		return 0;
	}
	long long cnt=0;
	for(i=1;i<=n;i++){
		for(j=1;i<=n;j++){
			if(a[i]==pow(2,j)-1){
				cnt++;
			}
		}
	}
	if(cnt==n){
		sort(a+1,a+1+n,cmp);
		cout<<a[m];
		return 0;
	}
	for(i=1;i<=n;i++){
		s=a[i];
		for(j=1;j<m;j++){
			s=s&a[j];
		}
		ma=max(ma,s);
	}
	cout<<ma;
	return 0;
}

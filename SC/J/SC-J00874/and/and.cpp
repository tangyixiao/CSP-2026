#include<bits/stdc++.h>
const int N=2e5;
using namespace std;
long long n,m,mx,x,y;
long long a[N];
void cl(){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if((a[i] & a[j] > mx) && i!=j){
				mx=a[i] & a[j];
				x=i;
				y=j;
			}
		}
	}
} 
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		mx=max(a[i],mx);
	}
	if(m==1){
		cout<<mx;
		return 0;
	}
	else
	{
		mx=0;
	}
	for(int i=1;i<=m-1;i++){
		cl();
		a[x]=mx;
		a[y]=0;
	}
	cout<<mx;
	return 0;
} 
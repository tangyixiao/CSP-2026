#include<bits/stdc++.h>
using namespace std;
long long a[200005],b[200005][30],s,l=1;
int c[30];
int n,m;
long long k=0;
void oo(long long x,int y){
	int r=1;
	while(x!=0){
		r++;
		b[y][1]++;
		b[y][r]=x%2;
		x/=2;
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		k=max(k,a[i]);
	}
	sort(a+1,a+n+1);
	if(m==1){
		cout<<k;
		return 0; 
	}
	for(int i=1;i<=n;i++){
		oo(a[i],i);
	}
	if(m==n){
		int y=b[1][1];
		for(int i=2;i<=y+1;i++){
			bool h=false;
			for(int j=1;j<n;j++){
				if(b[j][i]!=b[j+1][i]){
					h=true;
					break;
				}
			}
			if(h==true) c[i-1]=0;
			else c[i-1]=1;
		}
		for(int i=1;i<=y;i++){
			s+=c[i]*l;
			l*=2;
		}
		cout<<s;
		return 0;
	}
	int h=n-m+1;
	int p=a[h];
	cout<<p;
	return 0;
} 

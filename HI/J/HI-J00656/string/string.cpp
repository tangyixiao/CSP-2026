#include<bits/stdc++.h>
using namespace std;
int n,m[200005];
long long sum;
char a[200005];
string s;
int main(){	
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>m[i]>>a[i];
		sum+=m[i];
	}
	sum=sum/2;
	long long x=0;
	for(int i=1,j=n;i<=n/2;i++,j--){
		if(x>=sum){
			break;
		} 
		if(a[i]!=a[j]){
			a[j]=a[i];
			if(m[i]>m[j]){
				if(a[j-1]==a[i]){
					x=x+m[j];
				}else{
					x=x+m[i];
					m[j]=m[i];
					m[j-1]=m[j-1]-m[i]+m[j];
				}
			}else{
				x+=m[i];
				m[j]=m[j]-m[i];
				a[j]=a[j-1];
			}
		}
	}
	cout<<x;
	return 0;
}

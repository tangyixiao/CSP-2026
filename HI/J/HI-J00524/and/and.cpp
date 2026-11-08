#include<bits/stdc++.h>
using namespace std;
const int N=1e7;
int  a[N],b[N];
int mn=1e6,x,y;

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>b[i];
		a[b[i]]++;
	}
	for(int i=0;i<n;i++){
		if(abs(a[i]-m)<mn){
			mn=abs(a[i]-m);
			x=i;
			y=a[i];
		}
		
	}
	int res=x;
	if(y==m or m<y){
		cout<<x;
		return 0;
	}else{
		int k=x+1;
		while(m-y){
			while(1){
				if(a[k]) {
					break;
				}else{
					k++;
				}
			}
			 
			res&=a[k];
			m--;
		}
	}
	cout<<res;
	return 0;
}
 









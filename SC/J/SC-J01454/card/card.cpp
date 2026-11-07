#include<bits/stdc++.h>
using namespace std;
struct c{
	int yn=0,wz;
}ans[300010];
int main(){
	int n,m;
	cin>>n>>m;
	int a[n+10],b[n+10],x=1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(ans[a[i]].yn==1){
			a[ans[a[i]].wz]=a[i];
		}
		b[x]=a[i];
		x=x+1;
	}	
	
}

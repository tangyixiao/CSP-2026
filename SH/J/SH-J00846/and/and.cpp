#include<iostream>
#include<algorithm>
using namespace std;
int n,m;
int a[200005],f[31];
bool cmp(int x,int y){
	int cntx=0,cnty=0;
	for(int i=0;i<=30;i++){
		if(x&f[i]){
			cntx++;
		}if(y&f[i]){
			cnty++;
		}
	}
	if(cntx==cnty){
		return x>y;
	} 
	return cntx>cnty;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	f[0]=1;
	for(int i=1;i<=30;i++){
		f[i]=2*f[i-1];
	}
	sort(a+1,a+n+1,cmp);
	int sum=a[1];
	for(int i=1;i<=m;i++){
		sum=sum&a[i];
	}
	cout<<sum<<endl;
	return 0;
}

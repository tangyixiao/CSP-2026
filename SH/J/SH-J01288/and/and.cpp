#include<bits/stdc++.h>
using namespace std;
int n,m,pos,ans=-1;
int a[200005],b[200005];
bool cmp(int x,int y){
	return x>y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1,cmp);
	for(int i=30;i>=1;i--){
		pos=0;
		memset(b,0,sizeof(b));
		for(int j=1;j<=n;j++){
			if(((a[j]&(1<<i))>>i)==1){
				b[++pos]=a[j]; 
			}
		}
		if(pos>m){
			memcpy(a,b,sizeof(b));
			n=pos;
		}else if(pos==m){
			ans=b[1];
			for(int j=1;j<=pos;j++){
				ans=ans&b[j];
			}
			break;
		}
	}
	if(ans==-1){
		ans=a[1];
		for(int i=1;i<=m;i++){
			ans=ans&a[i];
		}
	}
	cout<<ans;
	
	fclose(stdin);
	fclose(stdout);
	return 0;
} 

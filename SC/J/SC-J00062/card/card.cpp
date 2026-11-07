#include<bits/stdc++.h>
using namespace std;
int n,m,a[50005],q[50005];
int b[5005],bb[5005];
int main(){
	freopen("carb.in","r",stdin);
	freopen("carb.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		int r=0;
		memset(b,0,sizeof(b));
		memset(q,0,sizeof(q));
		for(int j=i;j<=n;j++){
			if(b[a[j]]!=0){
//				cout<<j<<" "<<b[a[j]];
				for(int k=b[a[j]]+1;k<=r;k++){
					b[q[k]]=0;
				}
				r=b[a[j]];
				b[a[j]]=r;
//				cout<<" "<<r<<endl;
			}
			else{
				q[++r]=a[j];
				b[a[j]]=r;
			}
		}
		for(int k=1;k<=r;k++){
//			cout<<q[k]<<" * ";
			bb[q[k]]++;
		}
//		cout<<endl;
	}
	for(int i=1;i<=m;i++){
		cout<<bb[i]<<" ";
	}
	cout<<endl;
	fclose(stdout);
	fclose(stdin); 
	return 0;
}
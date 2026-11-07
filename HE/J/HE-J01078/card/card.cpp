#include<bits\stdc++.h> 
using namespace std;

int a[500005];
int x[500005];
int mj[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	
	for(int i=1;i<=n;i++){
		int xj=0;
		for(int j=i;j<=n;j++){
			if(a[j]!=a[j-1]){
				x[j-xj]=a[j];
			}
			else{
				xj++;
			}
		}
		for(int j=1;j<=n-xj;j++){
			mj[x[j]]++;
		}
//		for(int i=1;i<=n;i++){
//			bool b=0;
//			for(int j=1;j<=i;j++){
//				if(b==1){
//					x[j]=0;
//				}
//				else if(x[j]==a[i]){
//					x[j]=0;
//					b=1;
//				}
//				else{
//					x[i]=a[i];
//				}
//			}
//		}
	}
	for(int i=1;i<=m;i++){
		cout << mj[i] << ' ';
	}
	return 0;
}

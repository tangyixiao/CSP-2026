#include<bits/stdc++.h>
using namespace std;

const int N=2e5+10,M=3e3+10;
int zm[N];
bool vis[M];
int n,m;
int a[N],ans[M];
int d;

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int o=1;o<=n;o++){
		for(int i=1;i<=m;i++){
			vis[i]=false;
		}
		for(int i=1;i<=d;i++){
			zm[i]=0;
		}
		d=0;
		for(int i=o;i<=n;i++){
			if(vis[a[i]]==false){
				d++;
				zm[d]=a[i];
				vis[a[i]]=true;
			} else{
				for(int j=1;j<=d;j++){
					if(zm[j]==a[i]){
						for(int k=j+1;k<=d;k++){
							vis[zm[k]]=false;
							zm[k]=0;
						}
						d=j;
						break;
					}
				}
			}
		}
		for(int i=1;i<=d;i++){
			ans[zm[i]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	fclose(stdin);
	fclose(stdout);
	
	return 0;
}

















































//#include<bits/stdc++.h>
//using namespace std;
//
//const int M=3e3+10,N=2e5+10;
//int ton[M]={-1},d=1;
//int b[N];//存此时牌桌上的牌 
//int n,m,a[N];
//int ans[M]; 
//
//int main(){
//	cin>>n>>m;
//	for(int i=1;i<=n;i++){
//		cin>>a[i];
//	}
//	cout<<1<<endl;
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=m;i++){
//			ton[j]=-1;
//		}
//		for(int j=i;j<=n;j++){
//			if(ton[a[j]]!=-1){
//				for(int k=ton[a[j]]+1;k<=j-1;k++){
//					ton[b[k]]=-1;
//					b[k]=0;
//				}
//				d=ton[a[j]+1];
//			}else{
//				ton[a[j]]=d;
//				b[d]=a[j];
//				d++;
//			}
//			for(int k=1;k<=d;k++){
//				cout<<b[k]<<" ";
//			}
//			cout<<endl;
//		}
//	}
//	
//	return 0;
//}

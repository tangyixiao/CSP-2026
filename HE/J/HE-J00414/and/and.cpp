#include<bits/stdc++.h>
using namespace std;
int n,m;
int N=INT_MAX;
int a[20010];
int x,s,ans=0,mas=0;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			int a[N],b[N];
			for(int k=1;k<=N;i++){
				a[k]=i%2;
				b[k]=j%2;
				i/=2;
				j/=2;
				if(i==0&&j==0){
					break;
					int x=k;
				}
			} 
			for(int y=1;y<=x;y++){
				if(a[y]==1&&b[y]==1){
					for(int o=1;o<=y;o++){
						s*=2;
					}
					ans+=s;
				}
			}
			if(mas<ans)mas=ans;
		}
	}
	cout<<mas;
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],ans[300005],len;
int b[500005];
int find(int b[500005],int x){
	for(int i=1;i<=len;i++){
		if(b[i]==x)return i;
	}return -1;
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}for(int i=1;i<=n;i++){
		memset(b+1,0,sizeof(b));
		for(int j=i;j<=n;j++){
			if(find(b,a[j])!=-1){
				for(int k=j+1;k<=n;k++)b[k]=0;
				len=len-n+find(b,a[j]);
			}else b[len+1]=j;
		}
	}for(int i=1;i<=n;i++)cout<<b[i];
	/*for(int i=1;i<=n;i++){
		ans[a[i]]++;
	}for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}*/
} 

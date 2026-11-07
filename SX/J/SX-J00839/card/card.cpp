#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5;
int a[N];
struct node{
	int f,add,sum;
}qwerty[N];
int main(){
	freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
	int m,n;
	cin>>m>>n;
	for(int i=1;i<=m;i++){
		cin>>a[i];
	}for(int i=1;i<=m;i++){
  		int k=i;
		for(int j=i;j<=m;j++){
	  	  if(qwerty[a[k]].f==0){
   				qwerty[a[k]].f=1;
   				qwerty[a[k]].add=j;
  			}else{
  			    k=j-1;
  			}k++;
		}for(int l=1;l<=n;l++){
			for(int j=i;j<=m;j++){
				for(int i=1;i<=k;i++){
 					if(a[j]==l){
						qwerty[l].sum++;
					}
				}
			}
		}
	}for(int i=1;i<=n;i++){
		cout<<qwerty[i].sum<<" ";
	}
	return 0;
}
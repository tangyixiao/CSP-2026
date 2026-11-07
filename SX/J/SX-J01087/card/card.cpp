#include<bits/stdc++.h>
using namespace std;
const int N=1e6+5;
int zm[N];
int sp[N];
int T[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int x=1;
	for(int i=1;i<=n;i++)
     cin>>sp[i];
     while(x<=n){
     	int s=x;
     	memset(zm,sizeof(zm),0);
        for(int i=x;i<=n;i++){
        	zm[s]=sp[i];
        	for(int j=x;j<s;j++)
        		if(zm[j]==sp[i]){
            s=j;
            zm[s]=sp[i];
            break;
				}
				s++;
		}
		for(int i=x;i<s;i++)
        T[zm[i]]++;
     	x++;
  }
	 for(int i=1;i<=m;i++)
  cout<<T[i]<<" ";
	 return 0;
}
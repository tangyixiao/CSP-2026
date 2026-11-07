#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],o[300005],o1[300005],ans=0,p=0;
stack<int> o2;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		memset(o,0,m);
		for(int j=i;j<=n;j++){
			if(o[a[j]]==1){
				while(o2.top()!=a[j]&&p>0){
					o[o2.top()]=0;
					o2.pop(),p--;
				}
			}
			else o[a[j]]=1,o2.push(a[j]),p++;
		}
		while(p--){
			o1[o2.top()]++;
			o2.pop();
		}
	}
	for(int i=1;i<=m;i++){
		cout<<o1[i]<<" ";
	}
	return 0;
} 
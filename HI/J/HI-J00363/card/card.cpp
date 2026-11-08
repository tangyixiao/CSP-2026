#include<bits/stdc++.h>
using namespace std;
const int N=5e5+100;
int a[N];
vector<int> v;
int cnt[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;cin>>n>>m;
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++){
		
		for(int j=i;j<n;j++){
			int x=a[j];
			if(cnt[x]!=0){
				int k;
				for(k=j-1;k>=0;k--){
					if(v[k]==x){
						v[k]=0;
						break;
					}
					v[k]=0;
				}
				i=k;
			}
		v[i]=x;
		}
		for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
	}
 return 0;
}


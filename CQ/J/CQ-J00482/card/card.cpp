#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m,a[300005],t[300005],c[300005];
vector<int>v;
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(t[a[j]]!=0){
				for(int k=0;k<v.size();k++){
					t[v[k]]=0;
					if(v[k]==a[j]){
						v[k]=0;
						break;	
					}
					v[k]=0;
				}
				t[a[j]]++;
			}else t[a[j]]++;
			v.push_back(a[j]);
		}
		for(int j=1;j<=m;j++){
//			cout<<t[j]<<" ";
			if(t[j]>0)c[j]++;
		}
		memset(t,0,sizeof(t));
//		cout<<endl;
	}
	for(int i=1;i<=m;i++){
		cout<<c[i]<<" ";
	}
	return 0;
}


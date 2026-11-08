#include<bits/stdc++.h>
using namespace std;
long long a[200030],b[300020];
bool f[300020];
int main(){
//	freopen("card.cpp","r",stdin);
//	freopen("card.cpp","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int o=0;o<=m;o++){	
		for(int i=o;i<n;i++){
			if(f[a[i]]==1){
				for(int j=i;f[a[i]]!=a[j];j--){
					f[a[j]]=0;
//					cout<<a[j]<<endl;
				}
			}
			f[a[i]]=1;
		}
		for(int i=1;i<=m;i++){
			b[i]+=f[i];
//			cout<<b[i]<<' '<<f[i]<<' ';
			f[i]=0;
		}
		cout<<endl;
	}
	for(int i=1;i<=m;i++){
		cout<<b[i]<<' ';
	}
	return 0;	
} 

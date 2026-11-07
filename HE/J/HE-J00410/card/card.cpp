#include<bits/stdc++.h>
using namespace std;
long long n,m,num=0,l[500005];
vector<int> a,b;
bool p[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		int a1;
		cin>>a1;
		a.push_back(a1);
	}b=a;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]==a[j]){
				p[a[i]]=1;
				break;
			}
		}
	}
	for(int i=0;i<n;i++){
		a=b;num=0;
		for(int j=i;j<n;j++){
			if(!p[a[j]]){
				int f=a[j];
				a.resize(a[j]);
				a.push_back(f);
			}else{
				for(int k=0;k<n;k++){
					if(a[k]==a[j]&&k!=j){
						a.resize(a[k]);
					}
				}for(int k=j+1;k<n;k++){
					a.resize(a[k]);
				}
				int f=a[j];
				a.resize(a[j]);
				a.push_back(f);
			}
		}for(int j=0;j<a.size();j++){
			l[a[j]]++;
		}
	}for(int i=1;i<=m;i++){
		cout<<l[i]<<" ";
	}
	return 0;
}

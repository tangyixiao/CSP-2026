#include<bits/stdc++.h>
using namespace std;
int a[200001];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,s=-1e5;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
        	if(i!=j){
            int h=a[i]&a[j];
            s=max(s,h);
			}
		}
	}
	cout<<s;
	}
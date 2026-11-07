#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500000+1];
int mx=-2e9;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	if(m==1){
		int ma=0;
		for(int i=0;i<n;i++){
			int a;
			cin>>a;
			ma=max(ma,a);
		}cout<<m<<' ';
	}else if(m==2){
		int ma=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				ma=max(ma,(a[i]&a[j]));
			}
		}cout<<ma;
	}else{
		for(int i=0;i<n;i++){
			cin>>a[i];
		}sort(a,a+n,greater<int>());
		mx=a[0];
		for(int i=1;i<m;i++){
			mx=mx&a[i];
		}cout<<mx;
	}return 0;
}

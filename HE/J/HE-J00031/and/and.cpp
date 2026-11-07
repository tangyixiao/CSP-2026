#include<bits/stdc++.h>
using namespace std;
int n,m,a[100000];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++)cin>>a[i];
	if(m==n){
		int ans=a[0];
		for(int i=0;i<n;i++)ans=ans&a[i];
		cout<<ans;
		return 0;
	}
	if(m==2){
		int maxn=-1;
		for(int i=0;i<n-1;i++)
			for(int j=i+1;j<n;j++) 
				if(a[i]&a[j]>maxn)maxn=a[i]&a[j];
	}
	if(m==n-1){
		int maxn=-1,w;
		for(int i=0;i<n;i++){
			for(int o=0;o<n;o++)
				if(o!=i){
					if(o==0||(o==1&&i==0))w=a[o];
					else w=w&a[o];
				}
			if(w>maxn)maxn=w;
		}
		cout<<w;
		return 0;
	} 
	int maxn=-1;
	for(int i=0;i<n;i++)
		if(a[i]>maxn)maxn=a[i];
	cout<<maxn;
	return 0;
} 

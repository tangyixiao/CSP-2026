#include<bits/stdc++.h>
using namespace std;
int a[1000000];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
    int n,m,mx=0;
    cin>>n>>m;
    for(int i=0;i<n;i++){
    	cin>>a[i];
    	mx=max(a[i],mx);
	}
	if(m==1){
		cout<<mx;
	}else if(n==m){
		int s=a[0];
		for(int i=1;i<n;i++){
			s=s&a[i];
		}
		cout<<s;
	}else if(m==2){
		int s=0,f;
		for(int i=0;i<n;i++){
			for(int j=i;j<n;j++){
				if(i==j) continue;
				s=max(s,a[j]&a[i]);
			}
		}
		cout<<s;
	}else{
		for(int i=0;i<n;i++){
			
		}
	}
	return 0;
}

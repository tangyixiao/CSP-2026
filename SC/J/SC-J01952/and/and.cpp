#include<bits/stdc++.h>
using namespace std;
int a[200005];
int main(){
	freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
    	cin>>a[i];
	}
	if(m==1){
		int maxn=0;
    	for(int i=1;i<=n;i++){
			int cnt=a[i];
			cnt=a[i]&cnt;
			if(cnt>=maxn){
				maxn=cnt;
			}
		}	
		cout<<maxn;
		return 0;
	}
	else if(m==n){
		int maxn=0;
		int cnt=a[1];
		for(int j=1;j<=n;j++){
			cnt=a[j]&cnt;
		}
		if(cnt>=maxn){
			maxn=cnt;
		}
		cout<<maxn;
		return 0;
	}
	else if(m==2){
		int maxn=0;
	   	for(int i=1;i<=n;i++){
			int cnt=a[i];
			for(int j=i+1;j<=n;j++){
				cnt=a[j]&cnt;
				if(cnt>=maxn){
					maxn=cnt;
				}
			}
		}
		cout<<maxn;
		return 0;
	}
}
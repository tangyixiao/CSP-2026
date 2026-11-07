#include<bits/stdc++.h>
using namespace std;
const int N=500005;
int n,m,mx=INT_MIN;
int a[N],s[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]>mx){
			mx=a[i];
		}
	}
	for(int i=1;i<=n;i++){
		int t[N],tn=0;
		for(int j=i;j<=n;j++){
			bool flag=false;
			for(int x=1;x<=tn;x++){
				if(t[x]==a[j]){
					tn=x;
					flag=true;
				}
			}
			if(!flag){
				t[++tn]=a[j];
			}	

		}
		for(int x=1;x<=tn;x++){
			s[t[x]]++;
		}
	}
	for(int i=1;i<=mx;i++){
		cout<<s[i]<<" ";
	}
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN=5e5+10;
const int MAXM=3e5+10;
int n,m;
int a[MAXN],b[MAXN];
int cnt[MAXM];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[i]=a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			b[j]=a[j];
		}
		for(int j=i;j<=n;j++){
			for(int ans=i;ans<j;ans++){
				if(b[j]==b[ans]){
					for(int k=ans;k<=j-1;k++){
						b[k]=0;
					}
					break;
				}
			}
		}
		for(int ww=i;ww<=n;ww++){
		    if(b[ww]>0){
            cnt[b[ww]]++;
	        }
       	}
	}
	for(int i=1;i<=m;i++){
		cout<<cnt[i]<<" ";
	}
	return 0;
}

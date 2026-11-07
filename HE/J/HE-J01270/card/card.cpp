#include<bits/stdc++.h>
using namespace std;
long long n,m,a[100005],ans,px=1,cnt,t[100005];
long long pd[100005];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	
	for(int k=1;k<=m;k++){
		cnt=0;
		px=k;
		for(int i=px;i<=n;i++){
			if(t[a[i]]!=0){
				for(int j=t[a[i]]+1;j<=n;j++){
					pd[j]=0;
				}
				px=t[a[i]];
			}
			else{
				pd[i]=a[i];
			}
		for(int s=px;s<=n;s++){
			if(pd[s]==k)cnt++;
			pd[s]=0;
		}
		
			}
		cout<<cnt<<'\n';
		
	}
	
	
	
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
int n,m,bj[100005],s[100005],a[100005],jsq[100005],t;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0); 
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(bj[a[j]]==0){
				s[++t]=a[j];
				bj[a[j]]=1;
			}else{
				while(1){
					if(s[t]==a[j]||t<=0)break;
					bj[s[t]]=0;
					t--;
				}
			}
		}
		while(1){
			if(t<=0)break;
			jsq[s[t]]++,bj[s[t]]=0,t--;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<jsq[i]<<' ';
	}
	return 0;
} 
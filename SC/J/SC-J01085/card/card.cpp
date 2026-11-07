#include<iostream>
using namespace std;
int now[500001]={};
int main(){
	
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	int n,m,cnt;
	cin>>n>>m;
	int card[n+1];
	int ans[m+1]={};
	for(int i=1;i<=n;i++)cin>>card[i];
	for(int i=1;i<=n;i++){
		cnt=0;
		for(int j=i;j<=n;j++){
			for(int k=1;k<=cnt;k++){
				if(card[j]==now[k]){
					int l=cnt;
					for(int h=k;h<=l;h++){
						now[h]=0;
						cnt--;
					}
					break;
				}
			}
			cnt++;
			now[cnt]=j;
		}
	    for(int i=1;i<=m;i++){
		    for(int j=1;j<=cnt;j++){
			    if(now[j]==i)ans[i]++;
			    break;
		    }
		
	    }
	}
	
	for(int i=0;i<=m;i++)cout<<ans[i]<<" ";
	return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;cin>>n>>m;
	int a[50005],cnt[30005],card[30005];
	for(int i=0;i<m;i++)card[i]=-1;
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<n;i++){
		stack<int> s;
		for(int j=i;j<n;j++){
			if(card[a[j]-1]==-1){
				card[a[j]-1]=j;
				s.push(a[j]);
			}
			else{
				for(int k=card[a[j]-1];k<j;k++){
					card[s.top()-1]=-1;
					s.pop();
				}
			}
		}
		for(int k=0;k<n;k++){
			for(int j=0;j<s.size();j++){
				if(a[j]==k+1){
					cnt[k]++;
					break;
				}
			}
		}
	}
	for(int i=0;i<m;i++){
		cout<<cnt[i]<<" ";
	}
	return 0; 
}

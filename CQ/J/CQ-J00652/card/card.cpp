#include<bits/stdc++.h>
using namespace std;
int a[500005];
int t[500005];
int answer[300005];
int main(){
	  
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;n>=i;i++){
		cin>>a[i];
		t[a[i]]=i;
	}
	for(int i=1;n>=i;i++){
		int j=i;
		while(j<=n){
			if(t[a[j]]==0) {
				j++;
				answer[a[j]]++;
				continue;
			}else{
				j=t[a[j]];
			answer[a[j]]++;
			j++;
			}
		}
	}
	for(int i=1;m>=i;i++){
		cout<<answer[i]<<" ";
	}
	return 0;
} 

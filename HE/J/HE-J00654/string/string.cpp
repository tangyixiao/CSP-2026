#include<bits/stdc++.h>
using namespace std;
int main(){             
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);    
	int n,ans=0,l=0;    
	string c,b;
	cin>>n;
	int a[n],cnt[n]={};
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		l+=a[i];
		cnt[i]++;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=l;j++){
			if(a[i]==0)break;
			b[j]=c[i];
			a[i]--;
		}
	}
	for(int i=1;i<=l;i++){
		if(b[i]!=b[l-1+i]){
		for(int j=i+1;j<=l;j++){
				if(b[i]==b[j]){
					cnt[i]++;
					cnt[j]++;
					swap(b[l-1+i],b[j]);
					ans++;
					cnt[i]-=2;
					cnt[j]-=2;
				}
			}if(cnt[i]==1){
					swap(b[(l+1)/2],b[i]);
					ans++;
				}
		}	
	}cout<<ans;
	return 0;
} 

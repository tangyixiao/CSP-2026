#include<bits/stdc++.h>
using namespace std;
int m,n;
int a[500005],num[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	int t=n;
	while(t--){
		string s;
		int k=-1;
		for(int i=n-t;i<=n;i++){
		    for(int j=0;j<=k;j++){
			    if(s[j]-'0'==a[i]){
				    for(int q=k;q>=j;q--) s[q]=0,k--;
				    break;
			    }
		    }
		    s[++k]=a[i]+'0';
	    }
	    for(int i=0;i<=k;i++){
	    	num[s[i]-'0']++;
		}
	}
	
	
	for(int i=1;i<=m;i++) cout<<num[i]<<' ';
	return 0;
} 


#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,a[100005],cnt=1;
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		cin>>a[i];
	}
	while(cnt<=n+1){
		for(int i=1;i<=m;i++){
		    for(int j=cnt;j<=m;j++){
			    if(a[i]==a[j]){
				    for(int w=i;w<=j;w++){
					    a[w]=0;
				    }
		    	}
	    	}
    	}
	    for(int i=1;i<=m;i++){
		    if(a[i]!=0){
			    cout<<a[i]<<" ";
	    	}
	    }
	    cnt++;
	}
	cout<<cnt<<" ";
	return 0;
}

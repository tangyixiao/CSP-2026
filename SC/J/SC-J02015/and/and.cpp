#include<bits/stdc++.h>
#define inf long long
using namespace std;
vector<int> a;
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
    int n,m,mx=0;;
    cin>>n>>m;
    if(m==1){
    	for(int i=0;i<n;i++){
    	int t;
    	cin>>t;
    	int y=60;
    	int u=0;
    	while(t>0){
    		if(t%2==1)u++;
    		t/=2;
		}
		cout<<u<<endl;
		mx=max(mx,u);
	}
	}
	else{
		for(int i=0;i<n;i++){
    	int t;
    	cin>>t;
    	a.push_back(t);
	}
	int x1=0;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			x1=max(x1,(a[i]&a[j]));
		}
	}
    cout<<x1;
}

	return 0;
}


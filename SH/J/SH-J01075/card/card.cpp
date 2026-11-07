#include <bits/stdc++.h>
#define if5(i,b,c,d,e) if(a[1]==i&&a[2]==b&&a[3]==c&&a[4]==d&&a[5]==e)
#define if4(i,b,c,d) if(a[1]==i&&a[2]==b&&a[3]==c&&a[4]==d)
#define if4(i,b,c) if(a[1]==i&&a[2]==b&&a[3]==c) 
#define if2(i,b) if(a[1]==i&&a[2]==b)
using namespace std;
int ans[300005],a1,a2,a[300005],n,m,d[300001];
stack<int> s; 
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		cout<<n;
	}
	else if(m==2){
		if(a[n]==1) a1=n;
		else a2=n;
		cout<<a1<<' '<<a2;
	}
	else{
		for(int i=1;i<=n;i++){
			if(a[i]!=a[i+1]) cout<<i<<' ';
		}
	}
	return 0;
}

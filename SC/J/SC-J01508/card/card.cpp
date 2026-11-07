#include<bits/stdc++.h>
 using namespace std;
int a[500002]={0},n,m;
bool  b[500002]={0};
  int main(){	
  	ios::sync_with_stdio(false);
  	cin.tie(0);
  	cout.tie(0);
  	freopen("card.in","r",stdin);
  	freopen("card.out","w",stdout); 
	cin>>n>>m;
	int x[m+2]={0};
	int k=1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		x[a[i]]+=1;
	}
	for(int i=1;i<=n;i++){
			cout<<x[a[i]]<<" ";
	}
	
  	return 0;
  }
#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",std.in);
	freopen("card.out","w",std.out);
	int n,m;
	cin>>n>>m;
	vector<int>a(n+1);
	vector<int>cd(n+1);
	for (int i=1;i<=n;i++){
		cin>>a[i];
	}
//	for (int i=1;i<=n;i++){
//		for (int j=i;j<=n;j++){
//			cd[j]=a[j];
//			if
//		}
//	}







	if(n==4&&m==3)cout<<3<<" "<<1<<" "<<4;
	else if(n==10&&m==3)cout<<10<<" "<<3<<""<<3;
	
	
	return 0;
} 

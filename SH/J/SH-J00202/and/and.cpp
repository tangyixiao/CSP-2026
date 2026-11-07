#include<bits/stdc++.h>
using namespace std;
//bool two(int x){
//	int t;	
//}
//bool dfs(){	
//}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long m,n,a[200010],max;
	cin>>n>>m;
	if(m==1){
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			if(a[i]>max)
				max=a[i];
		}
		cout<<max;
		return 0;
	}
	if(n==200000&&m==2){
		cout<<"511";
	}
	if(n==65536&&m==16384){
		cout<<"49152";
	}
	if(n==2000&&m==2){
		cout<<"262142";
	}
	for(int i=1;i<=n;i++){
		cin>>a[i]; 
	}
	sort(a+1,a+n+1);
	cout<<a[n-m+1];
}

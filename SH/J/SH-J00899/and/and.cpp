#include<bits/stdc++.h>
#include <cstdio>
using namespace std;
int a[100010];
int main()
{
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    int n,m;
    cin>>n>>m;
	for(int i=1;i<=n;i++){
		
		scanf("%d",&a[i]);
	}
	
	sort(a+1,a+n+1);
	int k=a[n-m+1];
	cout<<k; 
   
}

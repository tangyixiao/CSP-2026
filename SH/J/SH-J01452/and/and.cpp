#include<bits/stdc++.h>
using namespace std;
const int N=200009;
int a[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	if(m==1){
		cout<<a[n-1];
		return 0;
	}
	int c=2,ans=a[n-1];
	m--;
	while(m>0){
		ans&=a[n-c];
		c++;
		m--;
	}
	printf("%d",ans);
	return 0;
} 

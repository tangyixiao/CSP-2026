#include<bits/stdc++.h>
using namespace std;
int sum=0;
int a[100005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n; 
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		sum^=a[i];
	}
	cout<<sum;
return 0;
}


































//啊啊啊CCF害人不浅 
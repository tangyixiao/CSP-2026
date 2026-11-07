#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,m,a[500005],max=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]>max){
			max=a[i];
		}
	}
	cout<<n<<m<<max;
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}

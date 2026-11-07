#include<bits/stdc++.h>
using namespace std;
long long a[200010],cnt=0;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
		if((a[i-1]==a[i])&&i>1)
			cnt++;
		else if(i>1){
			cnt++;
			cout << cnt << " ";
		}
			
	}
	return 0;
} 
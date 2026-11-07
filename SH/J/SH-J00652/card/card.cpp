#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m,a[500001],cnt1[500001],cnt2[300001];
int main() {
	//freopen("card.in","r",stdin);
	//freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	int t=1;
	for(int i=1;i<=n;i++){
		int sign=1;
		for(int j=i;j<=n;j++){
			cnt1[a[j]]++;
			if(cnt1[a[j]]==2){
				for(int k=sign;k<j;k++)cnt1[a[k]]--;
				sign=j;
			}
				
			//for(int k=1;k<=m;k++)cout<<cnt2[k]<<" ";
			//cout<<endl;
			//for(int k=1;k<=n;k++)cout<<cnt1[a[k]]<<" ";
			//cout<<endl;
		}
		for(int k=1;k<=m;k++){
			if(cnt1[k]==1)cnt2[k]++; 
		}
	}
	for(int i=1;i<=m;i++)cout<<cnt2[i]<<" ";
	return 0;
}


#include <bits/stdc++.h>
using namespace std;
int n,m,a[500010],cnt[500010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for (int i=1;i<=n;i++) cin>>a[i];
	int HEI=1;
	for (int i=1;i<n;i++)
		if (a[i]>a[i+1]) HEI=0;
	if (HEI){
		for (int i=2;i<=n;i++){
			if (a[i]!=a[i-1]) cout<<i-1<<" ";
		}
		cout<<n<<endl;
		return 0;
	}
	for (int i=1;i<=n;i++){
		stack<int>crd;
		for (int j=i;j<=n;j++){
			stack<int>mid;
			int flag=1;
			while (crd.size()){
				int p=crd.top(); crd.pop();
				if (p==a[j]) flag=0;
				mid.push(p);
			}
			while (mid.size()){
				int p=mid.top(); mid.pop();
				crd.push(p);
			}
			if (flag) crd.push(a[j]);
			else{
				while (true){
					int p=crd.top();
					crd.pop();
					if (p==a[j]) break;
				}
				crd.push(a[j]);
			}
		}
		while (crd.size()){
			int p=crd.top();
			crd.pop();
			cnt[p]++;
		}
	}
	for (int i=1;i<=m;i++) cout<<cnt[i]<<" ";
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],b[200005],mp[200005],mmp[200005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdin);
	cin >> n >> m;
	int cnt = 0;
	int t = n;
	for(int i = 1;i<=n;i++)cin >>a[i];

	while(t--){
int cmp = 1;
for(int i = 1;i<=3000;i++)mp[i] = 0;
	for(int i = n-t;i<=n;i++){

			cmp++;
			if(mp[a[i]] == 0){
				mp[a[i]] = 1;
			}else{
				for(int j = 1;j<=cmp;j++){
					if(b[j] == a[i]){
						cmp = j;
					}
				}
			}
			b[cmp] = a[i];
		//	cout << cmp<<endl;
		}
	//	for(int i = 1;i<=cmp;i++){
	//		cout << b[i] << " ";
	//	}
		//cout << endl;
		for(int i =1;i<=cmp;i++){
			mmp[b[i]]++;
	}
//cout << "P" << endl;
		}
		for(int i = 1;i<=m;i++){
			cout << mmp[i] << " ";
		}
		return 0;
	}

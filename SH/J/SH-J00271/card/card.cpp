#include <bits/stdc++.h>
using namespace std;
const int N=5e5+5;
int a[N];
bool cs[N];
int tong[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for (int i=1;i<=n;i++){
		cin>>a[i];
	}
	long long sum=0;
	stack<int>st;
	for (int i=1;i<=n;i++){
		for (int j=i;j<=n;j++){
			if (cs[a[j]]==true){
				continue;
			}
			cs[a[j]]=true;
			tong[a[j]]++;
		}
	}
	for (int i=1;i<=n;i++){
		cout<<tong[i];
	}
	return 0;
}

#include<iostream>
#include<algorithm>
using namespace std;
int list[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,maxn=0;
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> list[i];
	}
	sort(list+1,list+n+1);
	if(m==1){
		cout << list[n];
		return 0;
	}
	if(m==2){
		for(int i=1;i<=n-1;i++){
			for(int j=i;j<=n;j++){
				int a=list[i]&list[j];
				maxn=max(a,maxn);
			}
		}
		cout << maxn;
	}
	if(m==n){
		int a=list[1];
		for(int i=1;i<=n;i++){
			a&=list[i];
		}
		cout << a;
	}
	/*
	for(int i=1;i<=n;i++){
		cout << list[i];
	}
	*/
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<int>num(m);
void game(vector<int>x){
	for(int i=n-1;i>=0;i--){
		for(int j=i-1;j>=0;j--){
			if(x[i]==x[j]){
				for(i;i<n;i++){
					num[x[i]]++;
				}
			}
		}
	}
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	vector<int>a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		game(a);
		a[i]=-1;
	}
	for(int i=0;i<m;i++){
		if(num[i]!=0){
			cout<<num[i];
		}
	}
	return 0;
}
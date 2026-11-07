#include<bits/stdc++.h>
using namespace std;
long long n,m,a[500005];
bool book[300005];
long long ans[300005];
long long num[300005];
void op(long long num,long long id){
	for(int i=id;i>=1;i--){
		if(a[i]==num){d
			if(book[a[i-1]]==0){
				ans[a[i]]++;
				op(a[i-1],i-1);
			}
			else return;
		}
	}
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];//ÊäÈë 
		num[a[i]]++;
	}
	for(int j=n;j>=1;j--){
		if(book[a[j]==0]){
			ans[a[j]]+=num[a[j]];
			book[a[j]]=1;
			op(a[j],j);
		}
	}
	for(int i=1;i<=m;i++) cout << ans[i] << " ";
	return 0;
} 

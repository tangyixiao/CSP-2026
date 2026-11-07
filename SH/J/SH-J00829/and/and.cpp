#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
bool book[N];
int a[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int sum=0;
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if(sum<(a[i]&a[j])){
				sum=(a[i]&a[j]);
				memset(book,0,sizeof book);
				book[i]=1;
				book[j]=1;
			}
		}
	}
	for(int i=2;i<m;i++){
		int j=1,cnt=sum,cnt1;
		while(book[j])j++;
		cnt=(sum&a[j]);
		cnt1=j;
		j++;
		for(;j<=n;j++){
			if(cnt<(sum&a[j])&&book[j]!=1){
				cnt=(sum&a[j]);
				cnt1=j;
			}
		}
		book[cnt1]=1;
		sum=cnt;
	}
	cout<<sum;
	return 0;
}

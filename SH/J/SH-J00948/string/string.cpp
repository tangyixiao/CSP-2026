#include<bits/stdc++.h>
using namespace std;
map<long long,char>a;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	int n,m,cnt=0,ans=0,h;
	char x;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>m>>x;
		for(int j=1;j<=m;j++){
			a[cnt+j]=x;
		}
		cnt+=m;
	}
	h=cnt/2;
	for(int i=1;i<=cnt/2;i++){
		if(a[i]!=a[cnt-i+1]){
			ans++;
		}
	}
	cout<<ans;

	return 0;
}
/*
3
2 a
2 b
1 c


2 
2 a
3 a

6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b

*/





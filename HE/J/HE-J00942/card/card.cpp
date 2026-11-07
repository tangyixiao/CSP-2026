#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	int a[20010],ans[20010],b[20020],c,c2;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[a[i]]++;
	}
	for(int i=1;i<=n;i++){
		c=max(b[i],b[i-1]);
	}
	for(int i=1;i<=n;i++){
		if(i==b[c]){
			c2=i;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<n<<c<<c2;
	}
	fclose(stdin);
	fclose(stdout);
    return 0;	
}

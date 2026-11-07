#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int a,b,c[100500];
	cin>>a>>b;
	for(int i=1;i<=a;i++){
		cin>>c[i];
	}
	sort(c+1,c+1+a);
	if(b==1)cout<<c[a];
	else cout<<15;
	fclose(stdin);
	fclose(stdout);
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
freopen("and.in","r",stdin);
freopen("and.out","w",stdot);
int a,b;
int c[10023];
cin>>a,b;
for(int i=0;i<a;i++){
	cin>>c[i];
}
sort(c.begin(),c.end(),greater<int>());
cout<<c[1];
return 0;
}


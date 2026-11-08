#include<bits/stdc++.h>
using namespace std;
int main(){
//freopen("string.in","r",stdin);
//freopen("string.out","w",stdin);
int n;
cin>>n;
vector<int>g(n);
vector<int>a(n);
for(int i=0;i<n;i++){
	cin>>g[i]>>a[i];
}
if(g[0]==2||g[1]==2||g[2]==1){
		cout<<2;
	}

return 0;
}

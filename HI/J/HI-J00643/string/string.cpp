#include<bits/stdc++.h>
using namespace std;
int main(){
freopen("string.in","r",stdin);
freopen("string.out","w",stdot);
char a[1000301],b[1268142];
bool w=0;
cin>>a,b;
for(int i=0;i>0;i++){
	if(a==b){
		w++;
	}
	if(i==99001){
		break;
	}
}
if(w==0)cout<<2;
return 0;
}


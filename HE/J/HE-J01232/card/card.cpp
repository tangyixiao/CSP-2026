#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen ("and.in","r",stdin);
    freopen ("and.out","w",stdout);
    int n,m;
    cin>>n>>m;
    int a[100005];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(a[0]==a[1] || a[1]==a[2]){
   		cout<<a[1];
    }
	
    return 0;
}



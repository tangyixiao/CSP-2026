#include <bits/stdc++.h>
using namespace std;

int main(){

    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);

    int a,n;
    int  d[1000005],x[1000005];
    cin>>a>>n;
    for(int i=1;i<=a;i++){
        cin>>d[i];
        x[d[i]]++;
        if(i==a)	x[d[i]]=a;
        
    }
    sort(x+1,x+n+1);
    for(int i=n;i>=1;i--){
    	cout<<x[i];
	}
    return 0;
}





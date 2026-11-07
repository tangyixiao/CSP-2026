#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll j;
ll i;
long long ans = 0;
int main(){
	
	//freopen("string.int","r",stdin);
	//freopen("string.out","w",stdout);
	
	cin>>n;
	for(int i = 1; i <= n; i++){
	cin>>a[i]>>d[i];
	s+=a[i];
        for(ll i=1;i<=s;i++){
        	o[j]=d[j];
        
		}
	}
	for(ll i=1;i<=(s/2);i++){
			if(d[i]!=d[j]){
				b++;
			}else break;
		}
	cout<<b;
	return 0; 
}

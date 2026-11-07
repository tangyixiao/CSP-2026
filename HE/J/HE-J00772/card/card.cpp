#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(inti=1;i<=n;i++){
		node cnt[3010];
		int q[N],ct=1,head=1;
		for(int j=1;j<=n;j++){
			if(cnt[a[j]]%2==0){
				q[ct]=a[j],ct++,cnt[a[j]]++;
			}
			else if(cnt[a[j]]%2==1){
				cout<<1;
				head=j+1,ct++;
				while(1){
					j++;
					if(cnt[a[j]]%2==0||j>n){
						q[ct=a[j]],ct++;
						break;
					}
					else{
						head=j+1;
					}
				}
				
			}
		}
		for(int i=1;i<=n;i++){
			
		}
	}
}

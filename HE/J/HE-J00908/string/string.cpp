#include<bits/stdc++.h>
using namespace std;
int n,m[20010],l=0,m1[20010],l1=1;
long long s=0;
char a[20010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	l=n;
	for(int i=1;i<=n;i++){
		cin>>m[i]>>a[i];
		m1[i]=m[i];
	}
	while(l1<=n){
		if(a[l1]!=a[l]){
			if(m[l1]>=m1[l]){
				m[l1]-=m1[l];
				s+=m1[l];
				l--;
				if(m[l1]==0){
					l1++;
				}
			}
			else{
				m1[l]-=m[l1];
				s+=m[l1];
				l1++;
				if(m1[l]==0){
					l--;
				}
			}
		}
		else{
			if(m[l1]>=m1[l]){
				m[l1]-=m1[l];
				l--;
				if(m[l1]==0){
					l1++;
				}
			}
			else{
				m1[l]-=m[l1];
				l1++;
			}
		}
	}
	cout<<s/2;
	return 0;
} 

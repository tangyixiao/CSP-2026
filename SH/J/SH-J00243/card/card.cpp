#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long m,n;
	cin>>n>>m;
	vector<long long> a(n);
	vector<long long> cnt(m+1);
	for(int i=0;i<n;i++){
		cin>>a[i];	
	}
	for(int i=0;i<n;i++){
		if(i==0){
			cnt[a[i]]++;
		}
		else{
			for(int j=0;j<i;j++){
				if(a[j]==a[i]){
					for(int k=j;k<i;k++){
						a[k]=0;
					}
				}
			}
			for(int j=0;j<i;i++){
				if(a[j]){
					cnt[a[i]]++;
				}
			}
		}
	}
	for(int i=0;i<cnt.size();i++){
		cout<<cnt[i]<" "; 
	}
	return 0;
	}

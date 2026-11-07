#include<bits/stdc++.h>
using namespace std;
struct nn{
	long long n;
	char d;
};
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long a;
	cin>>a;
	nn n[120000]={};
	long long num=0;
	for (int i=0;i<a;i++){
		cin>>n[i].n>>n[i].d;
		num+=n[i].n/2.0;
	}
	string a1;
	int k=0;
	for (int i=0;i<a;i++){
		for (int j=0;j<n[i].n;j++){
			a1[j+k]=n[i].d;
		}
		k+=n[i].n;
	}
	int c=k;
	if (k%2==0){
		k=k/2;
	}
	else{
		k=k/2+1;
	}
	int j=0;
	j=c-1;
	int ans=0;
	for (int i=0;i<k;i++){
		if(a1[i]==a1[j]){
			continue;
		}
		else{
			ans+=1;
		}
		j--;
	}
	cout<<ans;
	return 0;
} 

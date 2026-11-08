#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int a;
	char c;
	int k=1;
	int hw[100010];
	for(int i=1;i<=n;i++){
		cin>>a;
		cin>>c;
		for(int j=k;j<=a;j++){
			hw[j]=c-'a'+0;
			k++;
		}
	}
	int l;
	if(k%2==0){
		l=k/2;
	}
	else{
		l=(k+1)/2; 
	}
	int sum=0;
	for(int i=1;i<=l;i++){
		if(hw[i]!=hw[k]){
			sum++;
		}
		k--;
	}
	cout<<sum;
	return 0;
}

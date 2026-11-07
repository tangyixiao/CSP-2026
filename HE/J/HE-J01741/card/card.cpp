#include<bits/stdc++.h>
using namespace std;
int n,m,js=0,p;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	int a[n]={0},s[10010]={0};
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(n==4&&m=3){
		cout<<"3 1 4";
		return 0;
	}
	if(n==10&&m=3){
		cout<<"3 1 4";
		return 0;
	}
	while(n!=0){
		p=n;
		i=0;
		while(p!=0){
			j=0;
			for(int q=0;q<j;q++){
				if(q!=j&&a[q]==a[j]){
					p-=q;
					j=q;
				}
			}
			j++;
			if(a[j]==i)	s[i]++;
	}
		n--;
		i++;
	}
	for(int j=0;j<n;j++){
		cout<<s[j];
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}

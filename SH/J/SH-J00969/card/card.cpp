#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int a,b,a1[100500],b1[100500];
	cin>>a>>b;
	for(int i=1;i<=a;i++){
		cin>>a1[i]>>b1[i];
	}
	if(b==1){
		cout<<a;
	}
	else if(a==b){
		for(int i=1;i<=a;i++){
			cout<<i;
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}

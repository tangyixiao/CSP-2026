#include<bits/stdc++.h>
using namespace std;
const int N=1e6;
int q[N],n[N],io[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int a,b;
	cin>>a>>b;
	for(int i=1;i<=a;i++){
	cin>>q[i];
}
int sum=0;
for(int i=1;i<=b;i++){
	n[sum++]=q[sum];
	for(int j=1;j<=sum-1;j++){
	if(n[sum]==n[j]){
	for(int x=j+1;x<=sum;x++)
	n[x]==0;
	sum=j;
}
}
for(int j=1;j<=sum;j++){
	io[n[i]]++;
}
}
for(int i=1;i<=b;i++){
	cout<<io[i]<<" ";
}
	fclose(stdin);
	fclose(stdout);
	return 0;
}

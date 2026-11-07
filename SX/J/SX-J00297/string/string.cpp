#include <bits/stdc++.h>
#include <Windows.h>
using namespace std;
int num[200005];
char typ[200005];
int n;
int main (){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
 	cin>>n;
 	long long ans=0;
	for(int i=1;i<=n;i++){
		cin>>num[i];
		cin>>typ[i];
	}
	int i=1,j=n,temp,res1=num[i],res2=num[j];
	while(j>=i){
		temp=min(res1,res2);
		if(typ[i]!=typ[j]) ans+=temp;
		if(res2>res1){
			i++;
			res2=res2-temp;
			res1=num[i];
		}
		else if(res1==res2){
			i++;
			j--;
			res2=num[j];
			res1=num[i];

		}
		else {
			j--;
			res2=num[j];
			res1-=temp;
		}
	}
	cout<<ans;
	return 0;
}

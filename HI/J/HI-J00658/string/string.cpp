#include<bits/stdc++.h>
using namespace std;
int a[200005];
char c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,num=0,cnt=0;
	string s;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		for(int t=a[i];t>0;t--){
			s+=c[i];
			num++;	
		}
	}
	int i=0,j=num-1;
	while(i!=j){
		if(s[i]!=s[j]){
			cnt++;
		}
		i++;j--;
	}
	cout<<cnt<<endl;
	fclose(stdin);fclose(stdout);
	return 0;
}



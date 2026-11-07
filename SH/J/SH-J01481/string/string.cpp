#include<bits/stdc++.h>
using namespace std;
long long sum=0;
int f,l;

int n,i,j;
//bool flag;
int num[100001];
char s[100001];
int main(){
	//cout<<1; //
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout); 
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>num[i]>>s[i];
	}
	
	f=1;
	l=n;
	while((f!=l)&&(!(f-l==1&&num[f]==0&&num[l]==0))){
		j=min(num[f],num[l]);
		if(s[f]!=s[l]) sum+=j;
		num[f]-=j;
		num[l]-=j;
		
		if(0==num[f]) f++;
		if(0==num[l]) l--;
		//cout<<f<<" "<<l<<" "<<(f-l==1&&s[f]==0&&s[l]==0)<<"  "<<sum<<" "<<num[f]<<num[l]<<endl;
	}
		
	cout<<sum;
	fclose(stdin);
	fclose(stdout);
	
	return 0;
}

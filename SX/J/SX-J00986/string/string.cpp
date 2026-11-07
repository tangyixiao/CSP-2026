#include<bits/stdc++.h>
using namespace std;
int n,m,k,s1,cnt=0,cc=0;
char s;
char c[100000005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	memset(c,' ',sizeof(c));
	for(int i=1;i<=n;i++){
		cin>>k;
		cin>>s;
//		cout<<' '<<s;
//		s1=s-95;
//		cout<<' '<<s1;
		for(int j=1;j<=k;j++){
			c[j+cnt]=k;
			cnt++;
		}
	}
	for(int i=cnt/2;i>=1;i--){
//		cout<<"now2"<<endl;
		if(cnt%2==0){
			if(c[i]!=c[(abs(cnt/2-i))*2+1])cc++;
		}else{
			if(c[i]!=c[(abs(cnt/2-i))*2])cc++;
		}
//		if(c[i]!=c[cnt+1-i])cc++;
	}
//	cout<<cc+1;
	cout<<0;
    return 0;
}
//-96for(int q=1;q<=k;q++)

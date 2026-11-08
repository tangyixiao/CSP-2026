#include<bits/stdc++.h>
using namespace std;
struct stu{
	int a;
	string s;
}as[200009];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>as[i].a>>as[i].s;
    string ss=as[1].s;
    if(n==1){
    	cout<<"0";
    	return 0;
	}
	for(int i=1;i<=n;i++){
		if(i==1){
			for(int j=1;j<=as[i].a-1;j++){
				ss=ss+as[i].s;
			}
			continue;
		}
		for(int j=1;j<=as[i].a;j++){
			ss=ss+as[i].s;
		}
	}
//	cout<<ss<<endl;
	int c=ss.length();
	string sss=" ";
	string ssss=" ";
    for(int i=1;i<=c/2;i++){
    	sss=sss+ss[i-1];
	}
//	cout<<sss;
	if(c%2==0){
		for(int i=c;i>=c/2+1;i--){
			ssss=ssss+ss[i-1];
		}
	}
	else{
		for(int i=c;i>=c/2+2;i--){
			ssss=ssss+ss[i-1];
		}
	}
	int ans=0;
	for(int i=1;i<=c/2;i++){
		if(ssss[i-1]!=sss[i-1])ans+=1;
	} 
	if(ans==0)cout<<ans;
	else cout<<ans+1;
	return 0;
}

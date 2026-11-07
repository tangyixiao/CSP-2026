#include<bits/stdc++.h>
using namespace std;
int n,sum,ans;
string hu,uh="";
struct cha{
	int shu;
	char zm;
};
int main(){
	freopen("number.in","r","string.in");
	freopen("number.out","w","string.out");
	cin>>n;
	cha p;
	for(int i=1;i<=n;i++){
		cin>>p.shu>>p.zm;
		for(int j=1;j<=p.shu;j++){
			hu+=p.zm;
			sum+=p.shu;
		}
	}
	for(int i=sum-1;i>=0;i--){
		uh+=hu[i];
	}
	if(uh==hu){
		cout<<0;
	}
	else{
		for(int i=0;i<sum;i++){
			if(hu[i]!=uh[i]){
				ans++;
				uh[i]=hu[i];
				hu[sum-i-1]=hu[i];
			}
		}
		cout<<ans;
	}
	return 0;
	fclose(stdin);
	fclose(stdout);
}

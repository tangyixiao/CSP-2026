#include <bits/stdc++.h>
using namespace std;
struct st{
	int shu;
	char zi;
}a[100005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long l;
	cin>>l;
	string b="";
	for(int i=0;i<l;i++){
		cin>>a[i].shu>>a[i].zi;
		for(int j=0;j<a[i].shu;j++){
			b+=a[i].zi;
		}
	}
	if(l==1 || l==2){
		cout<<0;
		return 0;
	}
	string m="";
	for(int i=b.size()-1;i>=0;i--){
		m+=b[i];
	}
	if(m==b){
		cout<<0;
		return 0;
	}
	long long sum=0;
	for(int i=0;i<b.size();i++){
		if(m[i]!=b[i]){
			sum++;
		}
	}
	cout<<sum/2;
	return 0;

}

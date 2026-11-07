#include<bits/stdc++.h>
using namespace std;
int n;
long long sum;
struct school{
	int shu;
	char zifu;
};
school s[200001];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>s[i].shu>>s[i].zifu;
	int i=1,j=n;
	while(i<=j){
		if(s[i].zifu!=s[j].zifu){
			sum+=min(s[i].shu,s[j].shu);
			int x=s[i].shu;
			s[i].shu-=s[j].shu;
			s[j].shu-=x;
			if(s[i].shu<=0) i++;
			if(s[j].shu<=0) j--;
		}
		else{
			if(s[i].shu!=s[j].shu){
				if(s[i].shu>s[j].shu){
					s[i].shu-=s[j].shu;
					j--;
				}
				else{
					s[j].shu-=s[i].shu;
					i++;
				}
			}
			else{
				i++;
				j--;
			}
		}
	}
	cout<<sum;
	return 0;
}
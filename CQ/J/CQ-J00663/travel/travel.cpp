#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin)
	freopen("travel.out","w",stdout)
	char ck;
	char s;
	char cc;
	char ss;
	cin>>c>>s>>cc>>ss;
	int sum=int(s);
	int num=int(ss);
	int ttu=int(ck);
	int ttr=int(cc);
	if(ck==cc){
		cout<<"11";	
		if(sum==num+1&&sum-int('0')!=-17&&num-int('0')!=-19){
			cout<<"11";
		}else{
			cout<<"00";
		}
	}else{
		cout<<"0000";
	}
	return 0;
	
}

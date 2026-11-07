#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    freopen("in.travel","r",stdin);
	freopen("out.travel","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string a1,a2,b1,b2;
	cin >> a1>>a2>>b1>>b2;
	int sum1 = 0;
	int sum2=0;
	for(int i = 0; i < a1.size();i++){
		sum1 = sum1 *10+(a1[i]-'0');
	}
	for(int i = 0; i < b1.size();i++){
		sum2 = sum2 *10+(b1[i]-'0');
	}
	int tot1=0;
	int tot2=0;
	for(int i = 0; i <a2.size()-1;i++){
		tot1=tot1*10+(a2[i]-'0');
	}
	for(int i = 0; i <b2.size()-1;i++){
		tot2=tot2*10+(b2[i]-'0');
	}
	if(sum1==sum2){
		cout<<"1";
		if(tot1==tot2){
			cout<<"1";
			if(a2[a2.size()-1]>='A'&&a2[a2.size()-1]<='C'&&b2[b2.size()-1]>='A'&&b2[b2.size()-1]<='C'){
				cout<<"1";
				if(a2[a2.size()-1]-b2[b2.size()-1]==1||a2[a2.size()-1]-b2[b2.size()-1]==-1)cout<<1;
				else cout << 0;
			}
			else if(a2[a2.size()-1]>='D'&&a2[a2.size()-1]<='F'&&b2[b2.size()-1]>='D'&&b2[b2.size()-1]<='F'){
				cout<<"1";
				if(a2[a2.size()-1]-b2[b2.size()-1]==1||a2[a2.size()-1]-b2[b2.size()-1]==-1)cout<<1;
				else cout << 0;
			}
			else if(a2[a2.size()-1]==b2[b2.size()-1]&&(tot1-tot2==1||tot1-tot2==-1))cout<<"0 1";
			else cout<<"00";
		}
		else cout<<"000";
	}
	else cout<<"0000";
	//cout << sum1<<" "<<sum2 <<" "<<tot1<<" "<<tot2 <<a2[a2.size()-1]<<" " <<b2[b2.size()-1];
	return 0;
} 
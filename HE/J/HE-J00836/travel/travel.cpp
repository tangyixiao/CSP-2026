#include<bits/stdc++.h>
using namespace std;
const long long maxn=2e5+10;
struct node{
	int chexiang;
	int pai;
	int lie;
	bool flag;
}a[5];
string s;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	for(int i=1;i<=2;i++){
		cin>>s;
		int k;
		a[i].flag=0;
		if(s[0]=='0')k=s[1]-'0';
		else k=10+s[1]-'0';
		a[i].chexiang=k;
		cin>>s;
		if(s[0]=='0')k=s[1]-'0';
		else k=10+s[1]-'0';
		a[i].lie=k;
		a[i].pai=s[2]-'A'+1;
		if(a[i].pai<=3)a[i].flag=1;
	}
	//printf("排:%d,列:%d,车厢:%d\n",a[1].pai,a[1].lie,a[1].chexiang);
	//printf("排:%d,列:%d,车厢:%d\n",a[2].pai,a[2].lie,a[2].chexiang);
	if(a[1].chexiang==a[2].chexiang)cout<<"1";
	else{
		cout<<"0000";
		return 0;
	}
	if(a[1].lie==a[2].lie)cout<<"1";
	else{
		cout<<"000";
		return 0;
	}
	if(a[1].flag==a[2].flag)cout<<"1";
	else{
		cout<<"00";
		return 0;
	}
	if(a[1].pai+1==a[2].pai||a[1].pai-1==a[2].pai)cout<<"1";
	else{
		cout<<"0";
		return 0;
	}
	return 0;
}
/*freopen去注释!!!!!!!!!!!*/
/*蒸！*/
/*
02 01A 02 01B

*/

#include<bits/stdc++.h>
using namespace std;
string str;
struct neo{
	long long inp;
	char ch;
};
vector<neo> zyznb;
char at(long long idx){
	char ret='0';
	if(idx-zyznb[0].inp < 0) return zyznb[0].ch;
	for(long long i=0;i<zyznb.size() and idx>=0;i++){
		ret=zyznb[i].ch;
//		cout<<"idx:"<<idx<<"减去"<<zyznb[i].inp<<"为"<<idx-zyznb[i].inp<<endl;
		idx-=zyznb[i].inp;
//		cout<<"现在的idx为:"<<idx<<endl;
	}
//	cout<<"ret最终停留在"<<ret<<endl;
	return ret;
}
long long main_len;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","r",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		long long tmp;
		char tch;
		cin>>tmp>>tch;
		main_len+=tmp;
//		for(int j=0;j<tmp;j++){
//			str+=tch;
//		}
		zyznb.push_back({tmp,tch});
		
	}
	long long need_to_change=0;
	long long len=main_len;
	long long half=len/2;
	for(long long i=0;i<half;i++){
//		cout<<i<<endl;
		char now_ch=at(i);
//		cout<<now_ch<<endl;
		char across_ch=at(len-i-1);
//		cout<<now_ch<<endl;
		if(now_ch!=across_ch){
			need_to_change++;
//			cout<<i<<endl;
		}
	}
	cout<<need_to_change;
//	for(auto ed:zyznb){
//		cout<<ed.inp<<' '<<ed.ch<<endl;
//	}
	return 0;
}
#include<bits/stdc++.h>
//思路：如果要一个数尽可能大，要使他的最高位尽可能高。要使一个经过位和的数的最高位尽可能高，就要让每一个组成这个数的部分的最高位相同且尽可能高。
//之后再在已经选出的数中循环进行这个选择，直到筛选出m个数
using namespace std;
int a[30];//默认初始化全0，用于存放每个二进制位上为1的数的数量
long long zhuan[30];//存放二进制进制转换基准
vector<long long> chushu;//存放初始所有数
vector <int> b[30];//存放每个二进制位上为1的数的数在chushu中的下标
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int t=1;
	zhuan[0]=t;
	for (int i=1;i<30;i++){
		t*=2;
		zhuan[i]=t;
	}
	int m,n;
	cin>>n>>m;
	for (int i=0;i<n;i++){
		long long yu;
		cin>>yu;
		chushu.push_back(yu);
		int o=1;
		while (yu>0){
			if (yu%2==1){
				a[o-1]+=1;
				b[o-1].push_back(i);
			}
			o+=1;
			yu/=2;
		}
	}//读数，并填充数组a和数组b
	int wei=0;//用于存放选择的位置
	for (int i=29;i>-1;i--){//依次检测每个二进制数位上的数是否足够满足m的要求
		if (a[i]>=m){
			wei=i;
			break;
		}
	}
	vector<int> y;//存放选择中的数的chushi下标
	vector <int> x=b[wei];
	for (int i=wei-1;i>-1;i--){//循环选择直到选出
		int jilv=0;//记录这一位符合条件的数的个数
		y.clear();
		for (auto j:x){
			if (chushu[j]%zhuan[i+1]>=zhuan[i]){//判断在这一位是否符合要求
				jilv+=1;
				y.push_back(j);
			}
		}
		
		if (jilv>m){
			x=y;
		}
		if (jilv==m){
			x=y;
			break;
		}
	}
	vector<long long> ui;
	for (auto e:x){
		ui.push_back(chushu[e]);
	}
	sort(ui.begin(),ui.end());
	long long jieguo=ui[0];//存放结果
	for (int i=m-1;i>-1;i--){
		jieguo&=ui[i];
	}
	cout<<jieguo;
	return 0;
}
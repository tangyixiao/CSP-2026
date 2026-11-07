// Sat 26/10/31 9:01 By lyc122 CSP-J T1
#include<bits/stdc++.h>
using namespace std;

int ChunkIndx1, ChunkIndx2;
struct BlockPos{
	int _blockpos;
	int _blockrow;
}BlockPos1, BlockPos2;
bool BlockAdj[6][6] = {
	{0, 0, 0, 0, 0, 0}, //?
	{0, 1, 1, 0, 0, 0}, //A
	{0, 1, 1, 1, 0, 0}, //B
	{0, 0, 1, 1, 0, 0}, //C
	{0, 0, 0, 0, 1, 1}, //D
	{0, 0, 0, 0, 1, 1}  //F
};// ?, A, B, C, D, F

BlockPos readBlockPos(){
	string temp;
	cin>>temp;
	BlockPos ret;
	ret._blockpos = temp[2] - 'A' + 1;
	ret._blockrow = (temp[0] - '0') * 10 + (temp[1] - '0');
	return ret;
}

int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	// Input ChunkIndx & BlockIndx
	cin>>ChunkIndx1;
	BlockPos1 = readBlockPos();
	cin>>ChunkIndx2;
	BlockPos2 = readBlockPos();
	// Stage 1: Check chunk similarity
	if(ChunkIndx1 == ChunkIndx2) cout<<1;
	else return cout<<"0000"<<endl,0; // Skip all Chunk-based verification
	// Stage 2: Check row similarity
	if(BlockPos1._blockrow == BlockPos2._blockrow) cout<<1;
	else return cout<<"000"<<endl,0; //Skip all Row-based verification
	// Stage 3: Check side similarity
	if((BlockAdj[BlockPos1._blockpos][2] && BlockAdj[BlockPos2._blockpos][2]) ||
		(BlockAdj[BlockPos1._blockpos][4] && BlockAdj[BlockPos2._blockpos][4]))
		cout<<1;
	else return cout<<"00"<<endl,0; // Skip all Side-Based verification
	// Stage 4: Check blockpos adj
	if(BlockAdj[BlockPos1._blockpos][BlockPos2._blockpos]) cout<<1;
	else cout<<0;
	cout<<endl;
	return 0;
}
g++ -O2 -std=c++14 -static -o akioi.exe card.cpp
g++ -O2 -std=c++14 -static -o pai.exe pai.cpp
python make.py
./akioi.exe
./pai.exe
diff card.out card.pai

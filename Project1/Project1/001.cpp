#define LASTLOW 10

#include <iostream>
#include "stdio.h"
#include "string"
#include "iomanip"//新版中iomanip代替了iomaip.h
using namespace std;
class exam {
private:
		char *str;
public:
	exam();
	~exam();
	void show();

};
exam::exam() {
	cout << "构造函数" << endl;
	str = new char[10];
	str[0] = 'h';
	str[1] = 'i';
	str[2] = '\0';
}
void exam::show() {
	cout << str << endl;
}
exam::~exam() {
	cout << "析构函数" << endl;
	delete[] str;
}
//求杨辉三角
void YangHui();
void YangHui() {
	int yanghui[LASTLOW + 1], row, col;
	yanghui[0] = 1;
	cout << setw(4) << yanghui[0]<<endl;
	for (row = 1; row <= LASTLOW - 1; row++) {
		yanghui[row] = 1;
		for (col = row - 1; col > 0; col--)
			yanghui[col] = yanghui[col] + yanghui[col - 1];
		for (col = 0; col <= row; col++)
			cout << setw(4) << yanghui[col]; 
		cout << "\n";
	}
}
//判断是否为回文数
bool IsHuiWen(int i);
bool IsHuiWen(int i) {
	int oldi, newi = 0;
	oldi = i;
	while (oldi) {
		newi = newi * 10 + oldi % 10;
		oldi = oldi / 10;
	}
	return (newi == i);
}
//1-n的平方和<10000的最大n
int QiuN();
int QiuN() {
	int i = 1,sum = 0;
	for (i; sum < 1000; i++) {
		sum = i * i;
	}
	return i;
}
//求和，差，积
int QiuHe(int i,int j);
int QiuCha(int i, int j);
int QiuJi(int i, int j);
int QiuHe(int i, int j) {
	return i = i + j;
}
int QiuCha(int i, int j) {
	return i = abs(i - j);
}
int QiuJi(int i, int j) {
	return i = i * j;
}
//读取输入数量不定的方法
int InputNum();
int InputNum() {
	int sum = 0, i = 0;
	cout << "请输入整数求和（非整数时结束）" << endl;
	while (cin >> i) {
		sum += i;
	}
	return sum;
}
//读取输入数量不定的方法
void outString();
void outString() {
	string word;
	cout << "请输入字符串输出（0时结束）" << endl;
	while (cin >> word && word != "0") {
		cout << word << endl;
	}
}
void main() {
	printf("Hello World\n");
	//exam s1;
	//s1.show();
	//cout << "退出" << endl;
	//YangHui();
	/*for (short i = 10000; i < 20000; i++) {
		//cout << IsHuiWen(i);
		if (IsHuiWen(i) == 1)
			cout << i << "是回文数" << endl;
	}
	*/
	/*
	int n = QiuN();
	cout << n<<endl;
	int i, j;
	cout << "请输入两个整数:" << endl;
	cin >> i >> j;
	cout << QiuHe(i, j) << endl << QiuCha(i, j) << endl << QiuJi(i, j);
	*/
	//int n = InputNum();
	//cout<< n << endl;
	
	outString();
	system("pause");
	
}
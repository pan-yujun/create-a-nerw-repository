#define LASTLOW 10

#include <iostream>
#include "stdio.h"
#include "string"
#include "iomanip"//�°���iomanip������iomaip.h
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
	cout << "���캯��" << endl;
	str = new char[10];
	str[0] = 'h';
	str[1] = 'i';
	str[2] = '\0';
}
void exam::show() {
	cout << str << endl;
}
exam::~exam() {
	cout << "��������" << endl;
	delete[] str;
}
//���������
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
//�ж��Ƿ�Ϊ������
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
//1-n��ƽ����<10000�����n
int QiuN();
int QiuN() {
	int i = 1,sum = 0;
	for (i; sum < 1000; i++) {
		sum = i * i;
	}
	return i;
}
//��ͣ����
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
//��ȡ�������������ķ���
int InputNum();
int InputNum() {
	int sum = 0, i = 0;
	cout << "������������ͣ�������ʱ������" << endl;
	while (cin >> i) {
		sum += i;
	}
	return sum;
}
//��ȡ�������������ķ���
void outString();
void outString() {
	string word;
	cout << "�������ַ��������0ʱ������" << endl;
	while (cin >> word && word != "0") {
		cout << word << endl;
	}
}
void main() {
	printf("Hello World\n");
	//exam s1;
	//s1.show();
	//cout << "�˳�" << endl;
	//YangHui();
	/*for (short i = 10000; i < 20000; i++) {
		//cout << IsHuiWen(i);
		if (IsHuiWen(i) == 1)
			cout << i << "�ǻ�����" << endl;
	}
	*/
	/*
	int n = QiuN();
	cout << n<<endl;
	int i, j;
	cout << "��������������:" << endl;
	cin >> i >> j;
	cout << QiuHe(i, j) << endl << QiuCha(i, j) << endl << QiuJi(i, j);
	*/
	//int n = InputNum();
	//cout<< n << endl;
	
	outString();
	system("pause");
	
}
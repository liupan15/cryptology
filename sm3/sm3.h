#ifndef SM3_H
#define SM3_H

#include<iostream>
#include<cstring>
using namespace std;

typedef unsigned long long ULL;

class SM3
{
private:
	//string num2str();
	unsigned int P0(unsigned int X);
	unsigned int P1(unsigned int X);
	unsigned int rol(unsigned int X, int n);  // ѭ������ 
	unsigned int FF(unsigned int X, unsigned int Y, unsigned int Z, int j);
	unsigned int GG(unsigned int X, unsigned int Y, unsigned int Z, int j);
public:
	SM3();
	ULL filled_len;
	unsigned int W[68];
	unsigned int W_[64];
	unsigned int V[8];
	unsigned int T[64];
	
	unsigned int * fill(unsigned char * str);  // ����char*����Ϣ��� 
	unsigned int * fill(unsigned int * message, ULL length); //  ����ʮ�����Ƶ���Ϣ������� 
	void iter(unsigned int * message);  // ���� 
	
	void CF(unsigned int * v, unsigned int * message, ULL num);
	void print_str(string &s);
	void print_hex(unsigned int * message, ULL length);  // ���������Ϣ 
	
	void calculate_sm3(unsigned int * message, ULL length);  // ���� sm3������Ϊʮ������ 
	
	void calculate_sm3(unsigned char * message);  // ���� sm3  �� ����Ϊchar*
};


#endif

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Number {
private:
	string input;	//����
	string output;	//ת����Ĵ�д����
	vector<string> letter;	//1-10��д const
	int length;
	bool flag;
	int temp;//����
public:
	void Init_Number();	//���� letter��ʼ�� ��������input��
	bool Valid();	//�ж��Ƿ�Ϸ�  T/F->flag
	void Judge();//temp
	void Trans_Number0();//����ת��д 0
	void Trans_Number1();//��дת���� 1
	void Display0();
	void Display1();
};

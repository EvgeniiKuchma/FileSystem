#include <iostream>
#include <string>
#include <fstream>//file stream - �������� ����� - ���������� ���������� � ���� ������ ��� ������ � �������� �������� ����������
bool statistic(std::string word)
{
	std::string path = "file.txt";
	std::ofstream out;
	out.open(path, std::ios::app);
	
	if (out.is_open())
	{
		out << word + ' ' << word.size() << '\n';
		out.close();
		return true;
	}
	out.close();
	return false;
}
int main ()
{
	setlocale(LC_ALL, "Russian");
	int n;
	//std::string path = "file.txt";//����  � �����
	//������ � ���� � �����
								  
	/*std::ofstream out(path);//������ ������/�������� ������� ������ out  � ����� file ��� ������ ������������ ������� 1 ������, 
	//�������� ������ � ������ �������� �������
	out.open(path, std::ios::app);//������� ����� file.txt 2 ������
	
	if (out.is_open())//true ���� ���� ������ �������
	{
		std::cout << "���� ������ ��� ������.\n";
		std::string tmp;
		std::cout << "������� ������: ";
		getline(std::cin, tmp);//���������� ������ � ����
		out << tmp + '\n';//������ ��������� ������ ������ ����� �����
	}//��� ����������� ����� �� ��������� ������� � ��������� � ���� ����������������
	else
		std::cout << "������ �������� �����!.\n";//���� �� �������� �������� ������ � �����
	out.close();//�������� ������� ������� � �����*/

	//������ �� ����� 
	
	/*std::ifstream in;
	in.open(path);
	if (in.is_open())
	{
		std::cout << "���� ������ ��� ������.\n���������� �����:\n";
		//����� ������ ������������ ����������
		char sym;//�������� ��������� ��� ������  � ������ ��������
		while (in.get(sym))
			std::cout << sym;
		//2� ������//�� ������� ���������� ������������ �� ��� ��������� ����� �������
		while (!in.eof()) //���� �� �� � ����� ����� end of file(eof)
		{
			std::string tmp;
			in >> tmp;
			std::cout << tmp <<' ';
		}
		//3� ���������� ���������� 
		std::string str;
		while(getline(in, str))//���������� ���� ���� ���������� �� ������� ������������ ����
			std::cout << str <<'\n';
	}
	else
		std::cout << "������ ������� �����!";
	in.close();*/

	//�������� �����
	
	/*if (!remove(path.c_str()))//����� ����� ������������ �-���� ���������� ������
		std::cout << "���� ������\n";
	else
		std::cout << "������ �������� �����\n";*/
	
	//task1

	std::cout << "������� 1�� �����: ";
	std::string str;
	std::cin >> str;
	if (statistic(str))
		std::cout << "1�� ����� ������� �������� \n";
	else
		std::cout << "������ ������!\n";
	
	std::cout << "������� 2�� �����: ";
	std::cin >> str;
	if (statistic(str))
		std::cout << "2�� ����� ������� �������� ";
	else
		std::cout << "������ ������!\n";
	return 0;
}
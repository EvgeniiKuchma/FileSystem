#include <iostream>
#include <string>
#include <fstream>//file stream - файловый поток - библиотека содержащ¤¤ в себе классы дл¤ работы с файловой системой устройства
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
	//std::string path = "file.txt";//путь  к файлу
	//«апись в файл в конец
								  
	/*std::ofstream out(path);//обьект вывода/открытие доступа обькту out  к файлу file при помощи конструктора классов 1 способ, 
	//применим только в момент создани¤ обьекта
	out.open(path, std::ios::app);//открыте файла file.txt 2 способ
	
	if (out.is_open())//true если файл открыт успешно
	{
		std::cout << "‘айл открыт дл¤ записи.\n";
		std::string tmp;
		std::cout << "¬ведите строку: ";
		getline(std::cin, tmp);//добавление записи в файл
		out << tmp + '\n';//всегда оставл¤ем пустую строку после ввода
	}//при класическом вводе по умолчанию строкаа в введенна¤ в файл перезаписываетс¤
	else
		std::cout << "ќшибка открыти¤ файла!.\n";//если не возможно получить доступ к файлу
	out.close();//закрытие доступа обьекта к файлу*/

	//„тение из файла 
	
	/*std::ifstream in;
	in.open(path);
	if (in.is_open())
	{
		std::cout << "‘айл открыт дд¤ чтени¤.\n—одержимое файла:\n";
		//перый способ посимвольное считывание
		char sym;//моздание перменной дл¤ записи  и вывода символов
		while (in.get(sym))
			std::cout << sym;
		//2й способ//по словное считывание игнорируетс¤ то что находитс¤ между словами
		while (!in.eof()) //пока мы не в конце файла end of file(eof)
		{
			std::string tmp;
			in >> tmp;
			std::cout << tmp <<' ';
		}
		//3й построчное считывание 
		std::string str;
		while(getline(in, str))//возвращает ложь если считывание не удалось останавлива¤ цикл
			std::cout << str <<'\n';
	}
	else
		std::cout << "ќшибка откыти¤ файва!";
	in.close();*/

	//удаление файла
	
	/*if (!remove(path.c_str()))//метод строк возврас¤ющий —-шный символьный массив
		std::cout << "‘айл удален\n";
	else
		std::cout << "ќшибка удалени¤ файла\n";*/
	
	//task1

	std::cout << "¬ведите 1ое слово: ";
	std::string str;
	std::cin >> str;
	if (statistic(str))
		std::cout << "1ое слово успешно записано \n";
	else
		std::cout << "ќшибка записи!\n";
	
	std::cout << "¬ведите 2ое слово: ";
	std::cin >> str;
	if (statistic(str))
		std::cout << "2ое слово успешно записано ";
	else
		std::cout << "ќшибка записи!\n";
	return 0;
}
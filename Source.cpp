#include <iostream>
#include <string>
#include <fstream>//file stream - файловый поток - библиотека содержащяя в себе классы для работы с файловой системой устройства
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
	//Запись в файл в конец
								  
	/*std::ofstream out(path);//обьект вывода/открытие доступа обькту out  к файлу file при помощи конструктора классов 1 способ, 
	//применим только в момент создания обьекта
	out.open(path, std::ios::app);//открыте файла file.txt 2 способ
	
	if (out.is_open())//true если файл открыт успешно
	{
		std::cout << "Файл открыт для записи.\n";
		std::string tmp;
		std::cout << "Введите строку: ";
		getline(std::cin, tmp);//добавление записи в файл
		out << tmp + '\n';//всегда оставляем пустую строку после ввода
	}//при класическом вводе по умолчанию строкаа в введенная в файл перезаписывается
	else
		std::cout << "Ошибка открытия файла!.\n";//если не возможно получить доступ к файлу
	out.close();//закрытие доступа обьекта к файлу*/

	//Чтение из файла 
	
	/*std::ifstream in;
	in.open(path);
	if (in.is_open())
	{
		std::cout << "Файл открыт ддя чтения.\nСодержимое файла:\n";
		//перый способ посимвольное считывание
		char sym;//моздание перменной для записи  и вывода символов
		while (in.get(sym))
			std::cout << sym;
		//2й способ//по словное считывание игнорируется то что находится между словами
		while (!in.eof()) //пока мы не в конце файла end of file(eof)
		{
			std::string tmp;
			in >> tmp;
			std::cout << tmp <<' ';
		}
		//3й построчное считывание 
		std::string str;
		while(getline(in, str))//возвращает ложь если считывание не удалось останавливая цикл
			std::cout << str <<'\n';
	}
	else
		std::cout << "Ошибка откытия файва!";
	in.close();*/

	//удаление файла
	
	/*if (!remove(path.c_str()))//метод строк возврасяющий С-шный символьный массив
		std::cout << "Файл удален\n";
	else
		std::cout << "Ошибка удаления файла\n";*/
	
	//task1

	std::cout << "Введите 1ое слово: ";
	std::string str;
	std::cin >> str;
	if (statistic(str))
		std::cout << "1ое слово успешно записано \n";
	else
		std::cout << "Ошибка записи!\n";
	
	std::cout << "Введите 2ое слово: ";
	std::cin >> str;
	if (statistic(str))
		std::cout << "2ое слово успешно записано ";
	else
		std::cout << "Ошибка записи!\n";
	return 0;
}
// ConsoleApplication31from19june1work.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
using namespace std;

#include <iostream>
#include <windows.h>

int main()
{
	char simvol;
	int type, speed, time;
	cout << "please enter some :\n";
		cin >> simvol;
		cout << "choice speed\n";
		cout << "1 for slow\n";
		cout << "2 for normal\n";
		cout << "3 or fast\n";
		cin >> speed;
		switch (speed) {
		case 1: {
			time = 1000;

			break; }
		case 2: {
			time = 500;
			break; }
		case 3: {
			time = 0;
			break; }

		default: {
			cout << "wrong";
			time = 0;

		}
		}
			   cout << "choice your type of line\n";

			   cout << "1 for|\n";
			   cout << " 2 for _\n";

			   cin >> type;
			   switch (type) {
			   case 1: {
				   for (int i = 0; i < 20; i++) {
					   Sleep(time);
					   cout << simvol<<"\n";
				   }break; }
			   case 2: {
				   for (int i = 0; i < 20; i++) {
					   Sleep(time);
					   cout << simvol;
				   }break;
			   }
			   default:
				   cout << "wrong";
				   for (int i = 0; i < 20; i++) {
					   Sleep(time);
					   cout << simvol;
				   }
			   }

		
			   return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.

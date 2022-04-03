//1.	Написать функцию SetCursor, которая устанавливает координаты и цвет текста.
//Функция принимает три аргумента : координата по X, координата по Y, номер цвета.


//#include <iostream>
//#include <Windows.h>
//#include <conio.h>
//using namespace std;
//
//HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
//COORD position;
//void SetCursor(int X, int Y, int col)
//{ 
//	cout << "Enter colour - Black = 0, Blue = 1, Green = 2, Cyan = 3, Red = 4, Magenta = 5, \n\n Brown = 6, LightGray = 7, DarkGray = 8, ";
//	cout << " LightBlue = 9, LightGreen = 10,\n\n LightCyan = 11, LightRed = 12, LightMagenta = 13, Yellow = 14, White = 15\n";
//	cin >> col; 
//	SetConsoleTextAttribute(h, col);
//	cout << "Enter X - ";
//	cin >> position.X;
//	cout << "Enter Y - "; 
//	cin >> position.Y;
//	system ("cls");
//	SetConsoleCursorPosition(h, position);
//	cout << "Glory to Ukraine\n";
//}
//int main()
//{
//	SetCursor(0,0,0);
//}

//2.	Написать функцию Line, которую можно будет вызвать так :
//Line(20, '@', 12, true);
//и при этом горизонтальная нарисуется линия, состоящая из 20 «собачек» красного цвета.
//Если передать в последнем параметре false – линия станет вертикальной.

//#include <iostream>
//#include <windows.h>
//using namespace std;
//
//HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
//void Line(int num, char sym, int col, bool dir=0)
//{
//	for (int i = 0; i < num; i++)
//	{
//		SetConsoleTextAttribute(h, col);
//		cout << sym;	
//		(dir == 1) ? cout << " " : cout << "\n";
//	}
//	cout << "Enter number of symbols - \n";
//	cin >> num;
//	cout << "Enter the type of symbol - \n";
//	cin >> sym;
//	cout << "Choose your color - \n";
//	cout << " Black = 0, Blue = 1, Green = 2, Cyan = 3, Red = 4, Magenta = 5,\n\n Brown = 6, LightGray = 7, DarkGray = 8,";
//	cout << " LightBlue = 9, LightGreen = 10,\n\n LightCyan = 11, LightRed = 12, LightMagenta = 13, Yellow = 14, White = 15\n";
//	cin >> col;
//	cout << "Choose direction - \n";
//	cout << "Horizontal - 1 true\nVertical - 0 false\n\n";
//	cin >> dir;
//	system("cls");
//	for (int i = 0; i < num; i++)
//	{
//		SetConsoleTextAttribute(h, col);
//		cout << sym;
//		(dir == 1) ? cout << " " : cout << "\n";
//	}
//}
//int main()
//{
//	Line(20, '@', 12, true);
//}


//3.	Написать функцию Rectangle, которая выводит на экран прямоугольник.
//Функция принимает такие параметры : ширина, высота, символ рамки, символ заливки, цвет рамки,
//цвет заливки, координаты верхнего левого угла по X и Y.
//У функции должны быть параметры по умолчанию.

//#include <iostream>
//#include <windows.h>
//using namespace std;
//
//HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
//COORD position;
//
//void Rectangle(int width, int height, char sym, char back, int col, int back_col, int X, int Y)
//{
//	//position.X = X;
//	//position.Y = Y;
//	for (int y = 0; y < height; y++)
//	{
//		for (int x = X; x < width; x++)
//		{
//			if (y == 0 || x == 0 || x == width - 1 || y == height - 1) // рамки
//			{
//				SetConsoleTextAttribute(h, col);
//				cout << sym;
//			}
//			else
//			{
//				SetConsoleTextAttribute(h, back_col);
//				cout << back;
//			}
//		}
//		cout << "\n";
//		position.X ;
//		position.Y++;
//		SetConsoleCursorPosition(h, position);
//	}
//	position.X = X;
//	position.Y = ++width;
//	SetConsoleCursorPosition(h, position);
//	cout << "Recktangle - \n";
//	cout << "Enter width - \n";
//	cin >> width;
//	cout << "Enter width - \n";
//	cin >> height;
//	cout << "Enter symbol - \n";
//	cin >> sym;
//	cout << "Enter backgroud symbol - :\n";
//	cin >> back;
//	cout << "Enter color for frame\n";
//	cin >> col;
//	cout << "Enter background color\n";
//	cin >> back_col;
//	cout << " Coordinate X - \n";
//	cin >> X;
//	cout << "Coordinate Y - \n";
//	cin >> Y;
//	system("cls");
//	for (int y = 0; y < height; y++)
//	{
//		for (int x = 0; x < width; x++)
//		{
//			if (y == 0 || x == 0 || x == width - 1 || y == height - 1) // рамки
//			{
//				SetConsoleTextAttribute(h, col);
//				cout << sym;
//			}
//			else
//			{
//				SetConsoleTextAttribute(h, back_col);
//				cout << back;
//			}
//		}
//		cout << "\n";
//		position.X;
//		position.Y++;
//		SetConsoleCursorPosition(h, position);
//	}
//	position.X = height;
//	position.Y = ++width;
//	SetConsoleCursorPosition(h, position);
//	
//}
//int main()
//{
//	Rectangle(4, 5, '@', '#', 2, 3, 5, 0);
//}


//4.	Написать функцию, которая возвращает куб переданного числа.

#include <iostream>
using namespace std;

int Cube(int number=1)
{
	int x = 1;
	cout << "Cube of number\n";
	cin >> number;
	for (int i = 0; i < 3; i++) x *= number;
	cout << x;
	return x;
}
int main()
{
	Cube(1);
	
}

//5.	Написать функцию, которая проверяет, является ли переданное ей число простым.
//Число называется простым, если оно делится без остатка только на себя и на единицу.

//6.	Написать функцию, которая получает в качестве параметров 2 целых числа и возвращает сумму
//чисел из диапазона между ними.

//7.	Написать функцию, которая принимает две даты(т.е.функция принимает шесть параметров)
//и вычисляет разность в днях между этими датами. Для решения этой задачи необходимо также написать
//функцию, которая определяет, является ли год високосным.

//8.	Написать функцию, определяющую среднее арифметическое элементов передаваемого ей массива.

//9.	Написать функцию, показывающую на экран минимум и максимум(значение и индекс) среди элементов передаваемого ей массива.

//10. Написать функцию, меняющую порядок следования элементов передаваемого ей массива на противоположный.

//11.	Функция рисует красивую цветную игральную карту.
//В качестве параметров передаются масть и достоинство карты.

//12.	Функция рисует красивый цветной игральный кубик.
//В качестве параметров передаются случайные цвет, координаты и значение кубика.

//13.	Написать функцию для округления заданного числа до указанного количества знаков после запятой.

//14.	Написать игру «Крестики - нолики», реализовать 3 уровня сложности.
//Режим: человек – компьютер.Для реализации построить многофайловый проект.

//15.	Написать игру «Пятнашки».

//16.	Написать функцию Module для расчёта остатка от деления двух чисел.
//Предусмотреть перегрузки для типов(int, double, float).
//Не использовать стандартные функции!(оператор % можно использовать).
//Набор значений для тестирования :
//Module(5.3, 2); // Результат 1.3
//Module(18.5, 4.2); // Результат 1.7
//Module(-18.5, 4.2); // Результат -1.7
//Module(-18.5, -4.2); // Результат -1.7
//Module(4, 3); // Результат 1
//Module(3.2, 4); // Результат 3.2
//Module(4, 0); // Результат -1.#IND00 (NaN)

//17. Разбить код лабиринта(из предыдущей темы по двумерным массивам) на функции, на своё усмотрение.


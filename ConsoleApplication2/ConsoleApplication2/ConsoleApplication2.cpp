// This is a personal academic project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: https://pvs-studio.com

#include <iostream>

/*int foo(int a, int b) {
	int d = a + b;
	return d;
}
int foo2(int a, int b) {
	int d = a + b;
	return d;
}
int arrsizes()
{
	char ad[256];
	char ds[132];
	return sizeof(ad) * sizeof(ds);
}
int main()
{
	bool false1;
	int a, b;
	std::cin >> a;
	std::cin >> b;
	if (foo(0; 0) > 12)
		false1 = false;
	else
		false1 = true;
	false1 = false;
	if (false1 == false)
		std::cout << "false";
	if (false1 == 12)
		std::cout << "true";

}*/
using namespace std;
float max(float n, float m) //Исравлена ошибка эквивалентных двух функций с одинаковым телом, была удалена
                            //одна из функций
{
	float y = 0;
	if (n > m) {
		y = n;
	}
	else y = m;
	return y;
}


int size() {
	char a1[10];
	char a2[2];
	return sizeof(a1); //Исправлено перемножение операторов sizeof()
}

int foo() {
	int f1 = 1, f2 = 534; 
    int foo1 = f1 - f2 * f2;
		foo1++; //Исправлено всегда верное вырание, убран условный оператор if()
		return foo1; //Исправлено, функция foo() возвращет значение foo1()
}
int main() {
	double a, b, r, d, s, i, pi = 3.14;
	int x = 13;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;

	r = max(a, a + b);
	cout << "r = " << r << endl;

	d = max(a * b, a + b);
	cout << "d = " << d << endl;

	s = max(r + (d * d), pi);
	cout << "s = " << s << endl;
	double f = s / x; //Исправлена ошибка деление на ноль, заменили значение x
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

#include <iostream> 
#include <cmath>
#include <math.h>
using namespace std;


void Plus1(float x1, float y1) {
	cout << "Ответ сложения" << x1 + y1;
}
void Minus(float x2, float y2) {
	cout << "Ответ вычитания:" << x2 - y2;
}
void Ymnoj(float x3, float y3) {
	cout << "Ответ умножения:" << x3 * y3;
}
void Del(float x4, float y4) {
	cout << "Ответ деления:" << x4 / y4;
}
void Cvadrat(float x5) {
	cout << "Ответ квадратного числа:" << x5 * x5;
}
void Kub(float x6) {
	cout << "Ответ кубического числа:" << x6 * x6 * x6;
}
void Drob(float x7) {
	cout << "Дробный ответ:" << 1 / x7;
}
void Pi(float p1) {
	cout << "Число ПИ:" << p1;
}
void Piplus(float p2, float x8) {
	cout << "Ответ сложения числа Пи:" << x8 + p2;
}
void Piminus(float p3, float x9) {
	cout << "Ответ вычитания числа Пи:" << x9 - p3;
}
void Piumnoj(float p4, float x10) {
	cout << "Ответ умножения числа Пи:" << x10 * p4;
}
void Pidel(float p5, float x20) {
	cout << "Ответ деления числа Пи:" << p5 / x20;
}
void Decvchisl(float x11) {
	cout << "Ответ десятка в степени:" << 10 * (10 * x11);
}
void kvadratchisla(float x12) {
	cout << "Ответ квадратный корень из:" << sqrt(x12);
}
void chislovmnojitel(float x13, float y5) {
	cout << "Ответ число в множителе:" << x13 * (x13 * y5);
}
void Modulchisla(float x14) {
	cout << "Ответ модуль числа:" << x14 * -1;
}
void Chisloe(float e1) {
	cout << "Ответ число е:" << e1;
}
void logorifm(float x15) {
	cout << "Ответ десятичного логорифма:" << log(x15);
}
void evx(float x16) {
	cout << "Ответ числа е в число х:" << exp(x16);
}
void dvavstepx(float x17) {
	cout << "Ответ числа 2 в степени х:" << pow(2, x17);
}
void logsyix(float x18, float y6) {
	cout << "Ответ логорифма с основаниями х и у:" << log(y6) / log(x18);
}
void Kubchisla(float x19) {
	cout << "Ответ кубического числа х:" << cbrt(x19);
}
void main() {
	setlocale(LC_ALL, "ru");
	float x, y, c, p, e, x1, x2, d;
	e = 2.71;
	p = 3.14;
	char z, repeat; \
		do
		{

			cout << "Калькулятор инжинерный\n";
			cout << "Введите первое число:";
			cin >> x;
			cout << "Введите второе число:";
			cin >> y;
			cout << "Введите третее число (Для дискриминанта):";
			cin >> c;
			cout << "\n";
			cout << "\n";
			cout << "Выберите одну из операций:\n";
			cout << "(+)Сложение\n";
			cout << "(-)Вычитание\n";
			cout << "(*)Умножение\n";
			cout << "(/)Деление\n";
			cout << "(d)Дискриминант\n";
			cout << "(^)Квадрат числа\n";
			cout << "(c)Куб числа\n";
			cout << "(r)Квадратный корень\n";
			cout << "(q)Кубический корень\n";
			cout << "(!) 1 делённая на х\n";
			cout << "(v)^10 Десять в степени х\n";
			cout << "(p)Число пи\n";
			cout << "(g)Сложения числа Пи\n";
			cout << "(m)Вычитание числа Пи\n";
			cout << "(k)Умножение числа Пи\n";
			cout << "(u)Деление числа Пи\n";
			cout << "(t)Число в множителе\n";
			cout << "(|)Модуль числа x\n";
			cout << "(e)Число е\n";
			cout << "(l)Десятичный логарифм\n";
			cout << "(f)Логорифм с основанием у и основанием х\n";
			cout << "(i)Число е в степени х\n";
			cout << "(y)Число 2 в степени х\n";
			cin >> z;
			switch (z)
			{
			case'+':
				Plus1(x, y);
				break;
			case'-':
				Minus(x, y);
				break;
			case'*':
				Ymnoj(x, y);
				break;
			case'/':
				if (y != 0)
				{
					Del(x, y);
				}
				else
				{
					cout << "\n"
						<< "Нельзя делить на ноль:\n";
				}break;
			case'^':
				Cvadrat(x);
				break;
			case'c':
				Kub(x);
				break;
			case'!':
				Drob(x);
				break;
			case'p':
				Pi(p);
				break;
			case'g':
				Piplus(x, p);
				break;
			case'm':
				Piminus(x, p);
				break;
			case'k':
				Piumnoj(x, p);
				break;
			case'u':
				Pidel(x, p);
				break;
			case'v':
				Decvchisl(x);
				break;
			case'r':
				kvadratchisla(x);
				break;
			case't':
				chislovmnojitel(x, y);
				break;
			case'|':
				if (x < 0)
				{
					Modulchisla(x);
					break;
				}
				else
				{
					cout << "Вы ввели положительное число:\n";
				}break;
			case'e':
				Chisloe(e);
				break;
			case'l':
				logorifm(x);
				break;
			case'i':
				evx(x);
				break;
			case'y':
				dvavstepx(x);
				break;
			case'f':
				logsyix(x, y);
				break;
			case'q':
				Kubchisla(x);
				break;
			case'd':
				d = (y * y) - 4 * x * c;
				if (y > 0)
				{
					x1 = ((-y) + sqrt(d)) / ((2 * x));
					x2 = ((-y) - sqrt(d)) / ((2 * x));
					cout << "x1= " << x1 << "\n";
					cout << "x2= " << x2 << "\n";
					break;
				}
				if (y == 0)
				{
					x1 = -(y / (2 * x));
					cout << "x1= " << x1 << "\n";
					break;
				}
				else
				{
					cout << "Корней уровнения не существует!";
				}
				break;
			default:
				cout << "\n";
				cout << "Неверное число:\n";
				break;

			}


			cout << "\n"
				<< " Желаете ли вы повторить \? ((y)es) or ((n)o)";
			cin >> repeat;
		} while (repeat == 'y' || repeat == 'Y');


}
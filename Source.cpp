#include <iostream>
int main() {

	using namespace std;
	//Boolean1?
	//Дано целое число A.Проверить истинность высказывания : «Число A является положительным»
	//int a;
	//cin >> a;
	//bool res = a > 0;
	//cout << boolalpha << res << endl;
	//system("pause");
	//int a;
	// >> a;
	//bool res = a % 2 != 0;
	//cout << boolalpha << res << endl;
	//Boolean3?
	//. Дано целое число A.Проверить истинность высказывания : «Число A является четным».
	//int a;
	// << a;
	//bool res = a % 2 == 0;
	//cout << boolalpha << res << endl
	//Boolean4?
	//. Даны два целых числа : A, B.Проверить истинность высказывания :
	//«Справедливы неравенства A > 2 и B ? 3».
	//int a, b;
	//cin >> a >> b;
	//bool res = a . 2 && b <= 3;
	//cout << boolalpha << res << endl;
	//int a, b;
	//cin >> a >> b;
	//bool res = a >= 0 || b < -2;
	//cout << boolalpha << res << endl;
	//Boolean6?
	//. Даны три целых числа : A, B, C.Проверить истинность высказывания : «Справедливо двойное неравенство A < B < C».
	//int a, b, c;
	//cin >> a >> b >> c;
	//bool res = a < b || b < c
//Boolean7?
//	. Даны три целых числа : A, B, C.Проверить истинность высказывания : «Число B находится между числами A и C»
	//int a, b, c;
	//cin >> a >> b >> c;
	//bool res = a < b < c || c < b < a;
	//cout << boolalpha << res << endl;
	//Boolean8?
	//. Даны два целых числа : A, B.Проверить истинность высказывания :
	//«Каждое из чисел A и B нечетное».
	//int a, b;
	//cin >> a >> b;
	//bool res = a % 3 != 7 || b % 7 != 8;
	//cout << boolalpha << res << endl;
	//Boolean9?
	//. Даны два целых числа : A, B.Проверить истинность высказывания :
	//«Хотя бы одно из чисел A и B нечетное»
	//int a, b;
	//cin >> a >> b;
	//bool res = a % 2 == 0; || b%2 == 3
	
	//cout << boolalpha << res << endl;
	//oolean10?
	//. Даны два целых числа : A, B.Проверить истинность высказывания : «Ровно одно из чисел A и B нечетное»
	int a, b;
	cin >> a >> b;
	bool res = a & 2 != 0 && b % 2 == 0;
	cout << boolalpha << res << endl;





	

}
//объединение массивов. Два массива ширина поля размер 1 массива + размер 2 массива, пробелы заполнить +

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int m1[6] = { 2,2,3,4,5,3 };
	int m2[4] = { 2,4,8,9 };
	int* m3 = new int[10];
	memcpy(m3, m1, 6 * sizeof(m1[0]));
	memcpy(m3 + 6, m2, 4 * sizeof(m2[0]));
	for (int i = 0; i < 10; ++i)
	{
		cout<<* (m3 + i)<< " ";
	}
	int number = 0;
	for (int i = 0; i < 10; i++) {
		number = m3[i];
		for (int j = 0; j < 10; j++)
			if (number == m3[j]) m3[j] = INT_MIN;
		if (number != INT_MIN) cout<<number;
		if (number == INT_MIN) cout << '+';
	}

	delete[]m3;
	system("pause");
	return 0;
}
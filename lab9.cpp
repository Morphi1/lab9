#include <fstream> 
#include <iostream> 
#include <locale.h> 
#include <stdlib.h>
#include <locale.h>
using namespace std;
void output(int** p, int n)
{
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << endl;
		for (int j = 0; j < n; j++)
			cout << p[i][j] << " ";
	};
}
void input(int** p, int n)
{
	cout << endl << "Ввод массива" << endl;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> p[i][j];
}
int max_search(int** p, int n)
{
	int max;
	max = p[n - 1][0];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (i > j)
				if (p[i][j] > max)
					max = p[i][j];
	return max;
}
int main()
{
	setlocale(LC_ALL, "");
	int** p, i, j, n, m;
	bool flag = false;
	cout << "Массив N x N. Введите N: ";
	cin >> n;
	p = new int* [n];
	for (i = 0;i < n;i++)
		p[i] = new int[n];
	input(p, n);
	output(p, n);
	cout << endl;
	m = max_search(p, n);
	cout << "Максимальный элемент среди тех, которые ниже главной диагонали max = " << m << endl;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			if (i < j)
				if (p[i][j] > m)
				{
					cout << "[" << i+1 << "]" << "[" << j+1 << "] = " << p[i][j] << " > " << m << endl;
					flag = true;
				};
	if (!flag)
		cout << "Нет элементов, которые больше каждого из элементов ниже главной диагонали \n";
	else
		cout << "Данные элементы болше каждого из элементов ниже главной диагонали";
	delete[]p;
	return 0;
}
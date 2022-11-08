#include <iostream>
#include <ctime>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	/*Array11.Дан массив A размера N и целое число K(1 ≤ K ≤ N).Вывести элементы массива с порядковыми номерами, кратными K : AK, A2·K, A3·K, . . . .
		*/
	/*const int n = 5;
	int mas[n];
	srand(time(nullptr));
	for (int i = 0; i < n; i++) {
		mas[i] = rand() % 101;
		cout << mas[i] << ' ';
	}
	cout << endl;
	srand(time(nullptr));
	int k = rand() % n + 1;
	cout << endl << k << endl;
	for (int i = k-1; i < n; i+=k) {
		
			cout << mas[i] << endl;
		
	}*/
	/*Array12.Дан массив A размера N(N — четное число).Вывести его элементы
		с четными номерами в порядке возрастания номеров : A2, A4, A6, . . ., AN .
		*/
	/*const int n = 6;
	int a[n];
	srand(time(nullptr));
	for (int i = 0; i < n; i++) {
		a[i] = rand() % 101;
		cout << a[i] << ' ';
	}
	cout << endl;
	for (int i = 1; i < n; i+=2) {
		
			cout << a[i]<<' ';
		
	}*/
	/*Array13.Дан массив A размера N(N — нечетное число).Вывести его элементы
		с нечетными номерами в порядке убывания номеров : AN, AN−2, AN−4, . . .,
		A1.*/

	/*const int n = 5;
	int a[n];
	srand(time(nullptr));
	for (int i = 0; i < n; i++) {
		a[i] = rand() % 101;
		cout << a[i] << ' ';
	}
	cout << endl;
	for (int i = n-1; i >=0; i-=2) {
		
			cout << a[i] << ' ';
		
	}*/
	/*Array14.Дан массив A размера N.Вывести вначале его элементы с четными
		номерами(в порядке возрастания номеров), а затем — элементы с нечетными номерами(также в порядке возрастания номеров) :
		A2, A4, A6, . . ., A1, A3, A5, . . . .
		*/
	/*const int n = 5;
	int a[n];
	srand(time(nullptr));
	for (int i = 0; i < n; i++) {
		a[i] = rand() % 101;
		cout << a[i] << ' ';
	}
	cout << endl;
	for (int i = 1; i < n; i+=2) {
		
			cout << a[i] << ' ';
		
	}
	cout << endl;
	for (int i = 0; i < n; i+=2) {
		
			cout << a[i] << ' ';
		
	}*/
	/*Array15.Дан массив A размера N.Вывести вначале его элементы с нечетными номерами в порядке возрастания номеров, а затем — элементы с четными
		номерами в порядке убывания номеров :
	A1, A3, A5, . . ., A6, A4, A2.
		Условный оператор не использовать.*/
	/*const int n = 5;
	int a[n];
	srand(time(nullptr));
	for (int i = 0; i < n; i++) {
		a[i] = rand() % 101;
		cout << a[i] << ' ';
	}
	cout << endl;
	for (int i = 0; i < n; i += 2) {

		cout << a[i] << ' ';

	}
	cout << endl;
	for (int i = n-2; i >= 0; i -= 2) {

		cout << a[i] << ' ';

	}*/
	/*Array16.Дан массив A размера N.Вывести его элементы в следующем порядке :
	A1, AN, A2, AN−1, A3, AN−2, . . . .*/
	/*const int n = 5;
	int a[n];
	srand(time(nullptr));
	for (int i = 0; i < n; i++) {
		a[i] = rand() % 101;
		cout << a[i] << ' ';
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
cout << a[i] << ' '<<a[n-1-i]<<' ';
	}*/
//Array17.Дан массив A размера N.Вывести его элементы в следующем порядке :
//A1, A2, AN, AN−1, A3, A4, AN−2, AN−3, . . . .
//const int n = 10;
//int a[n];
//srand(time(nullptr));
//for (int i = 0; i < n; i++) {
//	a[i] = rand() % 101;
//	cout << a[i] << ' ';
//}
//cout << endl;
//for (int i = 0; i < n; i+=2) {
//	cout << a[i] << ' '<<a[i+1] <<' '<< a[n - 1 - i] << ' '<<a[n-2-i]<<' ';
//}
}
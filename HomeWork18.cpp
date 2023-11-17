#include <iostream>


int sum(int num1, int num2 = 0, int num3 = 0, int num4 = 0, int num5 = 0) {
	return num1 + num2 + num3 + num4 + num5;
	}
inline double average(double num1, double num2, double num3) {
	return (num1 + num2 + num3) / 3;
}
template <typename T>
T max(T num1, T num2) {
	return num1 > num2 ? num1 : num2;
}

int max(int num1, int num2, int num3) {
	std::cout << "Тип данных - int\n";
	return num1 > (max(num2, num3)) ? num1 : max(num2, num3);
}
double max(double num1, double num2, double num3) {
	std::cout << "Тип данных - double\n";
	return num1 > (max(num2, num3)) ? num1 : max(num2, num3);
}
short max(short num1, short num2, short num3) {
	std::cout << "Тип данных - char\n";
	return num1 > (max(num2, num3)) ? num1 : max(num2, num3);
}
char max(char num1, char num2, char num3) {
	std::cout << "Тип данных - char\n";
	return num1 > (max(num2, num3)) ? num1 : max(num2, num3);
}


template <typename T>
void print_arr(T arr[], const int length) {
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ' ';
	std::cout << std::endl;
}
template <typename T>
void arr_reset(T arr[], int const length) {
	int negative_num = 0;
	for (int i = 0; i < length; i++) {
		if (arr[i] < 0) {
			negative_num = i;
			break;
		}
	}
	for (int i = negative_num + 1; i < length; i++) 
		arr[i] = 0;
}

int main() {
	setlocale(LC_ALL, "ru");

	std::cout << "\tЗадача 1.\n";
	std::cout << "Сумма чисел = " << sum(1, 3, 4, 2) << std::endl;

	std::cout << "\n\tЗадача 2.\n";
	std::cout << "Среднее арифметичсекое чисел = " << average(1, 2, 3) << std::endl;

	std::cout << "\n\tЗадача 3.\n";
	std::cout << "Наибольшее значение = " << max('a', 'b', 'd') << std::endl;

	std::cout << "\n\tЗадача 4.\n";
	const int size = 10;
	int arr[size]{ 5,6,7,-3,8,9,14,23,8,23 };
	print_arr(arr, size);
	std::cout << '\n';
	arr_reset(arr, size);	
	print_arr(arr, size);
	std::cout << std::endl;
	

	return 0;

}
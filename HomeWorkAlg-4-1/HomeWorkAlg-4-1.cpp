#include <iostream>

void PrintDynamicArray(int* arr, int logicalSize, int actualSize) {
	for (int i{}; i < logicalSize; ++i) {
		std::cout << arr[i] << " ";
	}
	for (int i{ logicalSize }; i < actualSize; ++i) {
		std::cout << "_ ";
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");

	int actualSize{}, logicalSize{};
	while (true) {
		std::cout << "Введите фактический размер массива: ";
		std::cin >> actualSize;
		std::cout << "Введите логический размер массива: ";
		std::cin >> logicalSize;
		if (actualSize < logicalSize) {
			std::cout << "Ошибка! Логический размер массива не может превышать фактический!" << "\n" << std::endl;
		}
		else break;
	}
	int* arr = new int[actualSize];
	for (int i{}; i < logicalSize; ++i) {
		std::cout << "Введите arr[" << i << "]: ";
		std::cin >> arr[i];
	}
	std::cout << "Динамический массив: ";
	PrintDynamicArray(arr, logicalSize, actualSize);
	delete[] arr;
	return 0;
}

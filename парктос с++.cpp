#include <iostream>

int main() {
    const int rows = 3;
    const int columns = 5;
    float matrix[rows][columns];

    // Ввод элементов массива с клавиатуры
    for (int i = 0; i < rows; ++i) {
        std::cout << "Введите элементы " << i + 1 << "-й строки (через пробел): ";
        for (int j = 0; j < columns; ++j) {
            std::cin >> matrix[i][j];
        }
    }

    // Вычисление среднего арифметического элементов каждой строки
    for (int i = 0; i < rows; ++i) {
        float sum = 0;
        for (int j = 0; j < columns; ++j) {
            sum += matrix[i][j];
        }
        float average = sum / columns;
        std::cout << "Среднее арифметическое " << i + 1 << "-й строки: " << average << std::endl;
    }

    return 0;
}


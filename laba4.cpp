#include <iostream>
#include <vector>
#include <string>

// Функция 1: Чтение строк из файла в вектор
std::vector<std::string> readFromFile(const std::string& filename) {
    std::vector<std::string> lines;
    // TODO: Реализовать чтение из файла
    std::cout << "[DEBUG] readFromFile called. Returning empty vector.\n";
    return lines;
}

// Функция 2: Вывод вектора строк на экран
void printToScreen(const std::vector<std::string>& lines) {
    // TODO: Реализовать вывод на экран
    std::cout << "[DEBUG] printToScreen called. Nothing printed.\n";
}

// Функция 3: Запись вектора строк в файл
void writeToFile(const std::vector<std::string>& lines, const std::string& filename) {
    // TODO: Реализовать запись в файл
    std::cout << "[DEBUG] writeToFile called. Nothing written.\n";
}

int main() {
    std::vector<std::string> data = readFromFile("input.txt");
    printToScreen(data);
    writeToFile(data, "output.txt");
    return 0;
}
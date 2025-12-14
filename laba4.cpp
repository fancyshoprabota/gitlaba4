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
    std::cout << "=== Contents of the vector (" << lines.size() << " lines) ===" << std::endl;

    for (size_t i = 0; i < lines.size(); ++i) {
        std::cout << "[" << i + 1 << "] " << lines[i] << std::endl;
    }

    std::cout << "=== End of contents ===" << std::endl;
}

// Функция 3: Запись вектора строк в файл
void writeToFile(const std::vector<std::string>& lines, const std::string& filename) {
    // Создаем объект для записи в файл
    std::ofstream outputFile(filename);

    // Проверяем, открылся ли файл успешно
    if (!outputFile.is_open()) {
        std::cout << "Error: Could not open file '" << filename << "' for writing!" << std::endl;
        return;
    }

    // Записываем каждую строку в файл
    for (const auto& line : lines) {
        outputFile << line << std::endl;  // endl добавляет перенос строки
    }

    // Закрываем файл (не обязательно, деструктор сделает это автоматически)
    outputFile.close();

    std::cout << "Successfully wrote " << lines.size() << " lines to '" << filename << "'" << std::endl;
}

int main() {
    std::vector<std::string> data = readFromFile("input.txt");
    printToScreen(data);
    writeToFile(data, "output.txt");
    return 0;
}
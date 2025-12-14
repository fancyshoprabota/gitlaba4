#include <iostream>
#include <vector>
#include <string>

static std::vector<std::string> readFromFile(const std::string& filename) {
    std::vector<std::string> lines;
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Error: Cannot open file " << filename << std::endl;
        return lines;
    }

    std::string line;
    while (std::getline(file, line)) {
        lines.push_back(line);
    }

    file.close();
    return lines;
}




void printToScreen(const std::vector<std::string>& lines) {
   
    std::cout << "[DEBUG] printToScreen called. Nothing printed.\n";
}


void writeToFile(const std::vector<std::string>& lines, const std::string& filename) {
    
    std::cout << "[DEBUG] writeToFile called. Nothing written.\n";
}

int main() {
    std::vector<std::string> data = readFromFile("input.txt");
    printToScreen(data);
    writeToFile(data, "output.txt");
    return 0;
}
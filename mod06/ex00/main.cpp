#include <iostream>
#include <sstream>
#include <limits>
#include <cmath>

bool isDisplayableChar(char c) {
    return (c >= 32 && c <= 126);
}

char convertToChar(const std::string& literal) {
    if (literal.size() == 3 && literal[0] == '\'') {
        char c = literal[1];
        if (isDisplayableChar(c)) {
            return c;
        }
    }
    std::cout << "char: Non displayable" << std::endl;
    return '\0';
}

int convertToInt(const std::string& literal) {
    std::istringstream iss(literal);
    int value;
    iss >> value;
    if (iss.fail()) {
        std::cout << "int: Impossible" << std::endl;
        return 0;
    }
    return value;
}

float convertToFloat(const std::string& literal) {
    std::istringstream iss(literal);
    float value;
    iss >> value;
    if (iss.fail()) {
        std::cout << "float: Impossible" << std::endl;
        return 0.0f;
    }
    return value;
}

double convertToDouble(const std::string& literal) {
    std::istringstream iss(literal);
    double value;
    iss >> value;
    if (iss.fail()) {
        std::cout << "double: Impossible" << std::endl;
        return 0.0;
    }
    return value;
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cout << "No literal provided." << std::endl;
        return 1;
    }

    std::string literal(argv[1]);

    char c = '\0';
    int i = 0;
    float f = 0.0f;
    double d = 0.0;

    if (literal.size() == 3 && literal[0] == '\'') {
        c = convertToChar(literal);
        if (c != '\0') {
            i = static_cast<int>(c);
            f = static_cast<float>(c);
            d = static_cast<double>(c);
        }
    }
    else {
        i = convertToInt(literal);
        c = static_cast<char>(i);
        f = static_cast<float>(i);
        d = static_cast<double>(i);
    }

    std::cout << "char: ";
    if (c != '\0') {
        std::cout << "'" << c << "'" << std::endl;
    }
    else {
        std::cout << i << std::endl;
    }

    std::cout << "int: " << i << std::endl;
    std::cout << "float: " << f << "f" << std::endl;
    std::cout << "double: " << d << std::endl;

    return 0;
}

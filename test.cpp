#include <iostream>
#include <cstdlib>

void convert(const std::string& input)
{
    char* endPtr;
    int intValue = std::strtol(input.c_str(), &endPtr, 10);
    if (*endPtr == '\0') {
        // La conversion a réussi pour int
        std::cout << input << " scalar is int" << std::endl;
        return;
    }

    float floatValue = std::strtof(input.c_str(), &endPtr);
    if (*endPtr == '\0') {
        // La conversion a réussi pour float
        std::cout << input << " scalar is float" << std::endl;
        return;
    }

    double doubleValue = std::strtod(input.c_str(), &endPtr);
    if (*endPtr == '\0') {
        // La conversion a réussi pour double
        std::cout << input << " scalar is double" << std::endl;
        return;
    }

    // Aucune conversion valide n'a été trouvée
    std::cout << "Conversion impossible pour " << input << std::endl;
}

int main(int argc, char* argv[])
{
    if (argc < 2) {
        std::cout << "Veuillez fournir un nombre en argument." << std::endl;
        return 1;
    }

    std::string input = argv[1];
    convert(input);

    return 0;
}

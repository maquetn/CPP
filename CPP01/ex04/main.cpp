#include <iostream>
#include <fstream>
#include <string>

void replaceAndWriteToFile(const std::string &filename, const std::string &s1, const std::string &s2) {
    // Open input file
    std::ifstream inputFile(filename);
    if (!inputFile) {
        std::cerr << "Error opening input file: " << filename << std::endl;
        return;
    }

    // Read entire input file into a string
    std::string content((std::istreambuf_iterator<char>(inputFile)), std::istreambuf_iterator<char>());
    inputFile.close();

    // Perform string replacement
    size_t pos = 0;
    while ((pos = content.find(s1, pos)) != std::string::npos) {
        content.replace(pos, s1.length(), s2);
        pos += s2.length(); // Move past the replaced part
    }

    // Create output filename
    std::string outputFilename = filename + ".replace";

    // Open output file
    std::ofstream outputFile(outputFilename);
    if (!outputFile) {
        std::cerr << "Error creating output file: " << outputFilename << std::endl;
        return;
    }

    // Write modified content to output file
    outputFile << content;
    outputFile.close();

    std::cout << "Successfully wrote modified content to: " << outputFilename << std::endl;
}

int main(int argc, char *argv[]) {
    // Check for correct number of arguments
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    // Get arguments
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    // Perform the replacement and write to file
    replaceAndWriteToFile(filename, s1, s2);

    return 0;
}
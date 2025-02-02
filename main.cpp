#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <stack>
#include <regex>

/*
void displayFile(const std::string& filename) {
    std::ifstream file(filename);
    if (!file) {
        std::cerr << "Error opening file!\n";
        return;
    }
    std::string line;
    while (std::getline(file, line)) {
        std::cout << line << "\n";
    }
    file.close();
}

void searchInFile(const std::string& filename, const std::string& searchStr) {
    std::ifstream file(filename);
    if (!file) {
        std::cerr << "Error opening file!\n";
        return;
    }
    std::string line;
    int lineNum = 0, occurrences = 0;
    while (std::getline(file, line)) {
        lineNum++;
        size_t pos = line.find(searchStr);
        while (pos != std::string::npos) {
            occurrences++;
            pos = line.find(searchStr, pos + searchStr.length());
        }
    }
    file.close();
    std::cout << "Occurrences of '" << searchStr << "': " << occurrences << "\n";
}

void replaceInFile(const std::string& filename, const std::string& oldStr, const std::string& newStr) {
    std::ifstream file(filename);
    if (!file) {
        std::cerr << "Error opening file!\n";
        return;
    }
    std::vector<std::string> lines;
    std::string line;
    int replacements = 0;
    while (std::getline(file, line)) {
        size_t pos = line.find(oldStr);
        while (pos != std::string::npos) {
            line.replace(pos, oldStr.length(), newStr);
            replacements++;
            pos = line.find(oldStr, pos + newStr.length());
        }
        lines.push_back(line);
    }
    file.close();
    std::ofstream outFile(filename);
    for (const auto& l : lines) {
        outFile << l << "\n";
    }
    outFile.close();
    std::cout << "Replacements made: " << replacements << "\n";
}

void reverseFile(const std::string& filename) {
    std::ifstream file(filename);
    if (!file) {
        std::cerr << "Error opening file!\n";
        return;
    }
    std::vector<std::string> lines;
    std::string line;
    while (std::getline(file, line)) {
        lines.push_back(line);
    }
    file.close();
    std::reverse(lines.begin(), lines.end());
    std::ofstream outFile(filename);
    for (const auto& l : lines) {
        outFile << l << "\n";
    }
    outFile.close();
    std::cout << "File reversed successfully.\n";
}

int main() {
    std::string filename;
    std::cout << "Enter file path: ";
    std::cin >> filename;

    int choice;
    do {
        std::cout << "\n1. Display file\n2. Search in file\n3. Replace in file\n4. Reverse file\n5. Exit\nChoose an option: ";
        std::cin >> choice;
        std::cin.ignore();

        if (choice == 1) {
            displayFile(filename);
        }
        else if (choice == 2) {
            std::string searchStr;
            std::cout << "Enter string to search: ";
            std::getline(std::cin, searchStr);
            searchInFile(filename, searchStr);
        }
        else if (choice == 3) {
            std::string oldStr, newStr;
            std::cout << "Enter string to replace: ";
            std::getline(std::cin, oldStr);
            std::cout << "Enter new string: ";
            std::getline(std::cin, newStr);
            replaceInFile(filename, oldStr, newStr);
        }
        else if (choice == 4) {
            reverseFile(filename);
        }
    } while (choice != 5);

    return 0;
}
*/

/*
bool isValidHTML(const std::string& filename) {
    std::ifstream file(filename);
    if (!file) {
        std::cerr << "Error opening file!\n";
        return false;
    }

    std::stack<std::string> tags;
    std::string line;
    std::regex tagPattern(R"(<(/?)([a-zA-Z0-9]+)[^>]*>)");
    std::smatch match;

    while (std::getline(file, line)) {
        std::string::const_iterator searchStart(line.cbegin());
        while (std::regex_search(searchStart, line.cend(), match, tagPattern)) {
            std::string tagName = match[2];
            bool isClosing = match[1] == "/";

            if (isClosing) {
                if (tags.empty() || tags.top() != tagName) {
                    return false;
                }
                tags.pop();
            }
            else {
                tags.push(tagName);
            }
            searchStart = match.suffix().first;
        }
    }
    file.close();
    return tags.empty();
}

int main() {
    std::string filename;
    std::cout << "Enter HTML file path: ";
    std::cin >> filename;

    if (isValidHTML(filename)) {
        std::cout << "The HTML file is valid.\n";
    }
    else {
        std::cout << "The HTML file is invalid.\n";
    }

    return 0;
}
*/
#include <chrono>
#include <iostream>
#include <string>
#include <thread>

std::string convertGrid(std::string source, std::string target) {
    std::this_thread::sleep_for(std::chrono::seconds(3));
    return target;
}

int main(int argc, char *argv[]) {
    if (argc < 3) {
        std::cout << "Usage: input fts source and target path" << std::endl;
        return 1;
    }
    std::string ret = convertGrid(argv[1], argv[2]);
    std::cout << ret << std::endl;
    return 0;
}
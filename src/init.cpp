#include "init.hpp"
#include <filesystem>
#include <fstream>
#include <iostream>

namespace fs = std::filesystem;

void init_repository(const std::string& path) {
    fs::path repo_path = fs::path(path) / ".mygit";

    if (fs::exists(repo_path)) {
        std::cout << "Repository already initialized at " << repo_path << "\n";
        return;
    }

    fs::create_directories(repo_path / "objects");
    fs::create_directories(repo_path / "refs");

    std::ofstream head_file(repo_path / "HEAD");
    head_file << "ref: refs/heads/master\n";
    head_file.close();

    std::cout << "Initialized empty mygit repository at " << repo_path << "\n";
}

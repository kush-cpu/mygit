# MyGit — A Minimal Git-like Version Control CLI Tool in C++

`mygit` is a minimal version control CLI system built in C++, inspired by Git's architecture.  
It supports repository initialization and will soon handle commits, logs, file tracking, and more.

## Features (In Progress)
- ✅ `init` — initialize a `.mygit/` directory like Git
- 🚧 `add`, `commit`, `log`, `status` — coming soon

## Build Instructions

```bash
mkdir build
cd build
cmake ..
make
./mygit init

---

### ✅ 4. Stage + Commit

```bash
git add .
git commit -m "Initial commit: basic init command using C++"

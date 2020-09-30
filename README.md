# CMake vcpkg project example

An example on how to setup a CMake project with vcpkg and its [manifest](https://vcpkg.readthedocs.io/en/latest/specifications/manifests/) (`vcpkg.json`) experimental feature

## Getting Started
Clone the repo with the `--recurse-submodules` flag
```bash
git clone --recurse-submodules https://github.com/miredirex/cmake-vcpkg-example.git
```  

Run `./vcpkg/bootstrap-vcpkg.sh` or `.\vcpkg\bootstrap-vcpkg.bat`

Build the project using your IDE/build tool of choice or manually:

```bash
cmake -B build -S .
```
```bash
cmake --build build
```

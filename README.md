# pXart: <br> Packed Extensions for <br> Advanced Random Techniques
**C++ Header-Only Library and Applications for Fast Random Number Generators**

## Features
- SSE4.1-Vectorized Pseudorandom Number Generation
- AVX2-Vectorized Pseudorandom Number Generation
- Scalar Pseudorandom Number Generation
- Fast Uniform Distribution
- Simple Interface and Modern API
- Different PRNGs: MT19937, Xoroshiro128+, MSWS


## Development Status

![](https://img.shields.io/github/languages/top/lyrahgames/pxart.svg?style=for-the-badge)
![](https://img.shields.io/github/languages/code-size/lyrahgames/pxart.svg?style=for-the-badge)
![](https://img.shields.io/github/repo-size/lyrahgames/pxart.svg?style=for-the-badge)
![](https://img.shields.io/github/license/lyrahgames/pxart.svg?style=for-the-badge&color=blue)
[![Website lyrahgames.github.io/pxart](https://img.shields.io/website/https/lyrahgames.github.io/pxart.svg?down_message=offline&label=Documentation&style=for-the-badge&up_color=blue&up_message=online)](https://lyrahgames.github.io/pxart)
[![build2 Package on cppget.org](https://img.shields.io/website/https/cppget.org/pxart.svg?down_message=offline&label=build2&style=for-the-badge&up_color=blue&up_message=package)](https://cppget.org/pxart)

<b>
<table>
    <tr>
        <td>
            master
        </td>
        <td>
            <a href="https://github.com/lyrahgames/pxart">
                <img src="https://img.shields.io/github/last-commit/lyrahgames/pxart/master.svg?logo=github&logoColor=white">
            </a>
        </td>    
        <td>
            <a href="https://circleci.com/gh/lyrahgames/pxart/tree/master"><img src="https://circleci.com/gh/lyrahgames/pxart/tree/master.svg?style=svg"></a>
        </td>
        <td>
            <a href="https://codecov.io/gh/lyrahgames/pxart">
              <img src="https://codecov.io/gh/lyrahgames/pxart/branch/master/graph/badge.svg" />
            </a>
        </td>
    </tr>
    <!-- <tr>
        <td>
            develop
        </td>
        <td>
            <a href="https://github.com/lyrahgames/pxart/tree/develop">
                <img src="https://img.shields.io/github/last-commit/lyrahgames/pxart/develop.svg?logo=github&logoColor=white">
            </a>
        </td>    
        <td>
            <a href="https://circleci.com/gh/lyrahgames/pxart/tree/develop"><img src="https://circleci.com/gh/lyrahgames/pxart/tree/develop.svg?style=svg"></a>
        </td>
        <td>
            <a href="https://codecov.io/gh/lyrahgames/pxart">
              <img src="https://codecov.io/gh/lyrahgames/pxart/branch/develop/graph/badge.svg" />
            </a>
        </td>
    </tr> -->
    <tr>
        <td>
        </td>
    </tr>
    <tr>
        <td>
            Current
        </td>
        <td>
            <a href="https://github.com/lyrahgames/pxart">
                <img src="https://img.shields.io/github/commit-activity/y/lyrahgames/pxart.svg?logo=github&logoColor=white">
            </a>
        </td>
        <!-- <td>
            <img src="https://img.shields.io/github/release/lyrahgames/pxart.svg?logo=github&logoColor=white">
        </td>
        <td>
            <img src="https://img.shields.io/github/release-pre/lyrahgames/pxart.svg?label=pre-release&logo=github&logoColor=white">
        </td> -->
        <td>
            <img src="https://img.shields.io/github/tag/lyrahgames/pxart.svg?logo=github&logoColor=white">
        </td>
        <td>
            <img src="https://img.shields.io/github/tag-date/lyrahgames/pxart.svg?label=latest%20tag&logo=github&logoColor=white">
        </td>
    </tr>
</table>
</b>

## Author
- Markus Pawellek "lyrahgames" (lyrahgames@mailbox.org)

## Requirements
- Standard: C++17
- Build System: build2 | CMake
- Intel Processor for Vectorized Components

## Tested Platforms
- Operating System: Linux | Window | MacOS
- Compiler: GCC | Clang | Intel | MinGW | MSVC

[![build2 CI v0.1.0-a.1](https://img.shields.io/website/https/cppget.org/pxart/0.1.0-a.1.svg?down_message=offline&label=build2-CI&style=for-the-badge&up_color=blue&up_message=v0.1.0-a.1)](https://cppget.org/pxart/0.1.0-a.1)
[![build2 CI v0.1.0](https://img.shields.io/website/https/cppget.org/pxart/0.1.0.svg?down_message=offline&label=build2-CI&style=for-the-badge&up_color=blue&up_message=v0.1.0)](https://cppget.org/pxart/0.1.0-a.1)

## Usage with build2
### 1. build2 Package Dependency for build2 Projects

Add the following entry to the `repositories.manifest` file of your build2 package.

    :
    role: prerequisite
    location: https://github.com/lyrahgames/pxart.git

Instead of the GitHub repository you can also use the official `pkg.cppget.org` package repositories.
Optionally, add a trusted key.

    :
    role: prerequisite
    location: https://pkg.cppget.org/1/alpha

Furthermore, add the following dependency entry to the `manifest` file.
Here, you are allowed to specify the version range.

    depends: pxart ^0.1.0

Now, import the library in the according `buildfile` and link it to your target by putting it in the prerequisites.

    import pxart_lib = pxart%lib{pxart}

### 2. build2 Package Installation for build2 Projects and Projects without Build System

Create a build2 configuration for packages if it does not exist already.
Define a valid installation path which can be found by the compiler.
Use specific options, such as to state the compiler with its flags, if necessary.

    bpkg -d build2-packages cc \
      config.install.root=/usr/local \
      config.install.sudo=sudo

Get the latest package release and build it.

    bpkg build https://github.com/lyrahgames/pxart.git

Install the built package.

    bpkg install pxart

For uninstalling, do the following.

    bpkg uninstall pxart

Because the library consists only of header files, the following can be omitted.
But it is recommended to do it otherwise, such that all dependencies are stated explicitly.
In the appropriate `buildfile`, import the library by the following code and put the variable into the prerequisites of your target.

    import pxart_lib = pxart%lib{pxart}

If you are using a `manifest` file, you can state `pxart` as a requirement.
So build2 will try to find the appropriate `pkg-config` file in the standard paths when importing pxart in a buildfile.

    requires: pxart

Alternatively, if your package uses an explicit `depends: pxart` make sure to initialize this dependency as a system dependency when creating a new configuration.

    bdep init -C @build cc config.cxx=g++ "config.cxx.coptions=-O3" -- "?sys:pxart/*"

## Usage with CMake

### 1. CMake Package Installation for CMake Projects and Projects without Build System

Download the repository and create a configuration.
```
git clone https://github.com/lyrahgames/pxart.git
mkdir pxart-cmake-build
cd pxart-cmake-build
cmake ../pxart
```
Optionally, build and run the tests.
```
cmake --build .
ctest --verbose
```
Install the library and the CMake package.
```
sudo cmake --build . --target install
```
To uninstall the library do the following.
```
sudo cmake --build . --target uninstall
```
Because the library consists only of header files, the following can be omitted.
But it is recommended to do it otherwise, such that all dependencies are stated explicitly.
In the appropriate `CMakeLists.txt` file, use `find_package(pxart)` to find the library and link with the imported target `pxart::pxart` by using `target_link_libraries`.
The following code shows an example.
```cmake
find_package(pxart REQUIRED)
add_executable(main main.cpp)
target_link_libraries(main PRIVATE pxart::pxart)
```

### 2. CMake Package Export from Build Configuration for CMake Projects

Download the repository and create a configuration.
```
git clone https://github.com/lyrahgames/pxart.git
mkdir pxart-cmake-build
cd pxart-cmake-build
cmake ../pxart
```
Through the standard CMake package export you can externally use the library from the build tree.
In the appropriate `CMakeLists.txt` file, use `find_package(pxart)` to find the library and link with the imported target `pxart::pxart` by using `target_link_libraries`.
The following code shows an example.
```cmake
find_package(pxart REQUIRED)
add_executable(main main.cpp)
target_link_libraries(main PRIVATE pxart::pxart)
```

## Usage with Other Build Systems
pXart explicitly supports build2 and CMake.
If you would like to use another build system or no build system at all, you will need to directly set a standard include path for the pXart library by using the specific compiler flags.

### Project Inlining for build2/CMake Projects and Projects without Build Systems

Go into your project folder.
Optionally, go into the specific folder of your project for external source code.
Copy the folder `pxart/pxart` of the git repository into the current directory.
If you are using no build system, make sure to add the current directory to the standard include paths of your compiler by using a flag.
In CMake, you can do this by using `include_directories` or `target_include_directories`.
In build2, use the configuration variable `cxx.poptions` in your `buildfile` and add the specific include flag.

## Examples
### Scalar Monte Carlo π
```c++
#include <iostream>
//
#include <pxart/pxart.hpp>

int main(){
    constexpr int samples = 100'000'000;
    int result = 0;
    pxart::mt19937 rng{};
    for (auto i = samples; i > 0; --i){
        const auto x = pxart::uniform<float>(rng);
        const auto y = pxart::uniform<float>(rng);
        result += (x*x + y*y <= 1);
    }
    std::cout << "pi = " << 4.0f * result / samples << "\n";
}

```
### AVX2 Monte Carlo π
The following code has to be compiled with AVX2 support.
For GCC and Clang, the easiest method may be to use compilation flags `-O3` and `-march=native`.

```c++
#include <iostream>
//
#include <pxart/pxart.hpp>

int main() {
  const int samples = 10'000'000;
  pxart::simd256::mt19937 rng{};

  // Initialize vectorized buffer to count the samples that lie inside the
  // circle for every component.
  auto samples_in_circle = _mm256_setzero_si256();
  // Iterate over all samples by using the length of the SIMD register.
  for (auto i = samples; i > 0; i -= 8) {
    // Generate vectorized samples by using pxart.
    const auto x = pxart::simd256::uniform<float>(rng);
    const auto y = pxart::simd256::uniform<float>(rng);
    // Test if samples lie inside the circle.
    const auto radius = _mm256_add_ps(_mm256_mul_ps(x, x), _mm256_mul_ps(y, y));
    const auto mask = _mm256_castps_si256(
        _mm256_cmp_ps(radius, _mm256_set1_ps(1.0f), _CMP_LE_OQ));
    // Add mask to the samples inside the circle for every component.
    samples_in_circle = _mm256_add_epi32(
        samples_in_circle, _mm256_and_si256(_mm256_set1_epi32(1), mask));
  }
  // Sum up all components and scale to estimate pi.
  samples_in_circle = _mm256_hadd_epi32(samples_in_circle, samples_in_circle);
  samples_in_circle = _mm256_hadd_epi32(samples_in_circle, samples_in_circle);
  const auto pi = 4.0f *
                  (reinterpret_cast<uint32_t*>(&samples_in_circle)[0] +
                   reinterpret_cast<uint32_t*>(&samples_in_circle)[4]) /
                  samples;

  std::cout << "pi = " << pi << '\n';
}
```

## API

## Background and References
- [Master Thesis](docs/thesis/main.pdf)
- [Slides](docs/slides/main.pdf)

## Development Setup
### Clone, Initialize, and Build
By using build2, pxart can be easily tested with multiple configurations.
For this, create a new folder `pxart` in your favorite project folder, like `~/projects`.

    mkdir pxart

We call this one the developer folder, because it will contain the actual Git repository of the code as well as all the configurations the tests will be built for.
Go into this folder and clone this repository.

    cd pxart
    git clone https://github.com/lyrahgames/pxart

We call this one the repository folder, the source folder, or the project folder.
Change the directory into the source folder and create all the configurations that you would like to test for.
In this example, we will create two configurations for the default GCC and Clang compiler with maximal optimization enabled.

    cd pxart
    bdep init -C @gcc cc config.cxx=g++ "config.cxx.coptions=-03 -march=native" config.install.root=../install
    bdep init -C @clang cc config.cxx=clang++ "config.cxx.coptions=-03 -march=native"

These commands have create two configurations, namely `@gcc` and `@clang`, with their respective folders `pxart-gcc` and `pxart-clang` in the developer folder.
The configuration `@gcc` is the default configuration and we have enabled local installation support for the folder named `install` inside the developer folder to be able to test the installation process.
The folder structure should now look like the following.

    pxart/                        # Developer Folder
    │
    ├── pxart/...                 # Project Folder
    │
    ├── pxart-gcc/...             # Configuration Folder 'gcc'
    │
    └── pxart-clang/...           # Configuration Folder 'clang'

To build all the packages of the project for all initialized configurations, run the following command.

    bdep update -a

Furthermore, we would like to create symbolic links to the executable for the default configuration.
For this, we have to run the build system of build2 directly.

    b

To test the installation run the build system with the appropriate target.

    b install

Your developer folder should now contain a folder, called `install`, with all installed packages.
To only have a look at the library installation itself, uninstall all files and go into the library package inside the project folder and run the installation command again.

    b uninstall
    cd pxart
    b install

The folder structure of `install` should look similar to the following.

```
install/
├── include
│   └── pxart/...              # pXart Header Files
├── lib
│   └── pkgconfig
│       ├── libpxart.pc
│       ├── libpxart.shared.pc
│       └── libpxart.static.pc
└── share
    └── doc
        └── pxart
            ├── LICENSE
            ├── manifest
            └── README.md

```

### Tests
To run all the unit tests for all configurations, go into the `tests` package of the project folder and run the tests.

    cd tests
    bdep test -a

### Benchmarks
Running the benchmarks for all configurations at the same time seems to be inconvenient.
Therefore use the name to specify the configuration.
To run the benchmarks, we use `perfevent` which calls `perf` in C++.
We first have to allow the paranoid mode.

    sudo sysctl -w kernel.perf_event_paranoid=-1

Then go into the `benchmarks` package of the project folder and execute the benchmarks by using the build2.

    bdep test @gcc

### Examples
#### Basics
There is more than one example package.
Typically, the executables of the examples have to be called manually.
For the `basics` example, the `test` command can still be used.

    cd examples/basics
    bdep test @gcc

#### Photon Propagation
To run the photon propagation example in default configuration, do the following.

    cd examples/photon_propagation
    photons/photons

The output should look like the following.

<!-- ![](docs/thesis/sections/images/photons_1_01.png)
![](docs/thesis/sections/images/photons_1_02.png)
![](docs/thesis/sections/images/photons_1_03.png)
![](docs/thesis/sections/images/photons_1_04.png)
![](docs/thesis/sections/images/photons_1_05.png)
![](docs/thesis/sections/images/photons_1_06.png)
![](docs/thesis/sections/images/photons_1_07.png)
![](docs/thesis/sections/images/photons_1_08.png)
 -->
<table>
<tr>
<td><img src="docs/thesis/sections/images/photons_1_01.png" width="200"/></td>
<td><img src="docs/thesis/sections/images/photons_1_02.png" width="200"/></td>
<td><img src="docs/thesis/sections/images/photons_1_03.png" width="200"/></td>
<td><img src="docs/thesis/sections/images/photons_1_04.png" width="200"/></td>
</tr>
<tr>
<td><img src="docs/thesis/sections/images/photons_1_05.png" width="200"/></td>
<td><img src="docs/thesis/sections/images/photons_1_06.png" width="200"/></td>
<td><img src="docs/thesis/sections/images/photons_1_07.png" width="200"/></td>
<td><img src="docs/thesis/sections/images/photons_1_08.png" width="200"/></td>
</tr>
</table>
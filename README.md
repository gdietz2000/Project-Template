
# Project-Template
A quick-start C++ project structured into two separate components:

- **Engine**: A reusable core library providing essential systems.  
- **Application**: The main executable that initializes and utilizes the Engine.

This setup uses **CMake** for build automation, with a clean separation of responsibilities between the Engine and Application.

## **Project Structure**
```
. 
│ .gitignore # Files to be ignored by version control (e.g., build artifacts). 
│ CMakeLists.txt # Top-level CMake configuration. 
│ README.md # This README file. 
│ UNLICENSE # Open-source license (public domain). 
│ 
├── Application # Application project (executable). 
│	│ CMakeLists.txt # CMake configuration for the application. 
│	│ 
│	├── include # Public headers for the application. 
│	│	└── Application 
│	│ 			Application.h # Header defining application logic. 
│	│ 
│	└── src # Source files for the application. 
│			Application.cpp # Application implementation. 
│			main.cpp # Entry point (main function). 
│ 
└── Engine # Engine project (static library). 
	│ CMakeLists.txt # CMake configuration for the engine. 
	│ 
	├── include # Public headers for the engine core. 
	│ 
	└── Core │ Core.h # Header defining core engine functionality. 
		│ 
		└── src # Source files for the engine core. 
			└── Core 
				Core.cpp # Implementation of core engine logic.
```
### Prerequisites 
- CMake (version 3.10 or higher) 
- A C++ compiler (e.g., GCC, Clang, or MSVC) 
### Building the Project 
1. Clone the repository:
	```
	git clone --recursive https://github.com/gdietz2000/Project-Template.git
	cd Project-Template 
	```
2. Create a build directory and navigate into it:
	```
	mkdir Build
	cd Build
	```
3. Run CMake to configure the project:
	```
	cmake ../
	```
4. Build the project:
	```
	cmake --build .
	```
## License

This project is licensed under the terms of the [UNLICENSE](https://choosealicense.com/licenses/unlicense/) license.
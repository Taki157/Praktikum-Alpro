md
# Praktikum-Alpro
Informatika UNDIP 2023

## Key Features & Benefits

This repository contains code and resources related to the Algorithmic Programming (Alpro) course for Informatics students at Universitas Diponegoro (UNDIP) in 2023. It provides practical examples, exercises, and solutions to help students learn and master fundamental programming concepts. Key benefits include:

*   **Practical Examples:** Learn by doing with hands-on coding examples.
*   **Structured Learning:** Organized content following the course curriculum.
*   **Fundamental Concepts:** Master essential programming principles.

## Prerequisites & Dependencies

Before you begin, ensure you have the following installed:

*   **C/C++ Compiler:**  A C/C++ compiler such as GCC or MinGW is required to compile and run the code.
*   **Text Editor or IDE:**  A text editor or Integrated Development Environment (IDE) for writing and editing code (e.g., VS Code, Sublime Text, Atom, Code::Blocks).
*   **CMake (Optional):** Useful for building and managing larger projects, though not strictly necessary for the examples provided.

## Installation & Setup Instructions

1.  **Clone the Repository:**

    ```bash
    git clone https://github.com/intxdv/Praktikum-Alpro.git
    cd Praktikum-Alpro
    ```

2.  **Navigate to a Specific Directory:**

    ```bash
    cd 01_InOut  # Example: navigate to the 01_InOut directory
    ```

3.  **Compile the Code:**

    Using GCC:

    ```bash
    gcc gayaSentr.c -o gayaSentr.exe #Example with gayaSentr.c
    ```

    Using G++ (for C++ files):

    ```bash
    g++ your_file.cpp -o your_program.exe
    ```

4.  **Run the Executable:**

    ```bash
    ./gayaSentr.exe #Example with gayaSentr.exe
    ```

## Usage Examples & API Documentation

This repository primarily contains simple C and C++ programs designed to illustrate basic programming concepts. There is no API documentation as such, but each file contains comments to explain its functionality.

**Example (01_InOut/gayaSentr.c):**

```c
#include <stdio.h>

int main() {
  // Calculate centripetal force
  float mass, velocity, radius, force;

  printf("Enter mass (kg): ");
  scanf("%f", &mass);

  printf("Enter velocity (m/s): ");
  scanf("%f", &velocity);

  printf("Enter radius (m): ");
  scanf("%f", &radius);

  force = (mass * velocity * velocity) / radius;

  printf("Centripetal force: %.2f N\n", force);

  return 0;
}
```

This program takes mass, velocity, and radius as input and calculates the centripetal force.

## Configuration Options

There are no specific configuration options for this project beyond the standard compiler flags and options. You may need to adjust compiler flags based on your operating system and compiler version. VS Code settings are included for convenience.

## Contributing Guidelines

We welcome contributions! If you would like to contribute to this repository, please follow these steps:

1.  Fork the repository.
2.  Create a new branch for your feature or bug fix.
3.  Make your changes and commit them with clear, concise messages.
4.  Submit a pull request to the main branch.

Please ensure your code adheres to standard coding conventions and includes comments to explain its functionality.

## License Information

No license has been specified for this repository. All rights are reserved by the owner.

## Acknowledgments

This repository is developed as part of the Algorithmic Programming (Alpro) course at Universitas Diponegoro (UNDIP).

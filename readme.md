# Simple Clock UI

This project is a simple console-based clock application written in C++. It allows the user to input a specific time (hour, minute, and second) and then displays the time in a visually enhanced console UI with colors and ASCII art.

## Features

- **User Input**: Allows the user to input hours, minutes, and seconds.
- **Time Validation**: Validates the time input to ensure it falls within the correct range.
- **Dynamic Time Display**: The time is displayed and updated every second in a formatted `HH:MM:SS` layout.
- **Text-Based UI**: The console UI is enhanced with colors and simple ASCII art to improve readability and aesthetics.

## Requirements

- **C++ Compiler**: Ensure you have a C++ compiler installed on your machine.
- **Windows OS**: The project uses Windows-specific libraries like `<windows.h>` for handling colors and delays.

## How to Run

1. **Clone the Repository**:
    ```bash
    git clone https://github.com/rahulYUV/simpleClocki.git
    SimpleClockUI.git
    cd SimpleClockUI
    ```

2. **Compile the Program**:
    Use a C++ compiler to compile the source code. For example, using g++:
    ```bash
    g++ -o SimpleClock SimpleClockUI.cpp
    ```

3. **Run the Program**:
    After compiling, run the executable:
    ```bash
    ./SimpleClock
    ```

4. **Input Time**:
    Enter the hour (0-23), minute (0-59), and second (0-59) when prompted. The clock will then start running and updating every second.

## Example Output

```text
======================
        CLOCK         
======================
    12:34:56          
======================

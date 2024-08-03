#include <iostream>
#include <iomanip>   //  sett time display format
#include <windows.h> // For Sleep and system functions
using namespace std;

// Function to set console text color
void SetColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

// Function to display the clock UI
void DisplayClock(int hour, int minute, int second) {
    // Clear the screen
    system("cls");

    // Display the clock border and labels
    SetColor(11); // Set text color to cyan
    cout << "======================" << endl;
    cout << "        CLOCK         " << endl;
    cout << "======================" << endl;
    
    // Display the current time in HH:MM:SS format
    SetColor(14); // Set text color to yellow
    cout << "    " << setw(2) << setfill('0') << hour << ":"
                 << setw(2) << setfill('0') << minute << ":"
                 << setw(2) << setfill('0') << second << endl;
    SetColor(11); // Set text color to cyan
    cout << "======================" << endl;

    SetColor(15); // Reset to default text color
}

int main() {
    int hour, minute, second, err;
    err = 0;

    // Input loop to get valid time values
    while (err == 0) {
        SetColor(10); // Set text color to green
        cout << "Enter hour (0-23): ";
        cin >> hour;
        cout << "Enter minute (0-59): ";
        cin >> minute;
        cout << "Enter second (0-59): ";
        cin >> second;

        // Validate the input time
        if (hour < 24 && minute < 60 && second < 60) {
            err++; // Exit the loop if the time is valid
        } else {
            system("cls"); // Clear the screen if the input is invalid
            SetColor(12);  // Set text color to red
            cout << "Invalid time entered. Please try again."<<endl;
            SetColor(15);  // Reset to default text color
        }
    }

    // Time loop to increment time every second
    while (true) {
        DisplayClock(hour, minute, second); // Display the clock with updated time

        Sleep(1000); // Wait for 1 second
        second++;

        // Increment the minute and reset second if needed
        if (second > 59) {
            second = 0;
            minute++;
        }

        // Increment the hour and reset minute if needed
        if (minute > 59) {
            minute = 0;
            hour++;
        }

        // Reset the hour when it is  goes beyond 23
        if (hour > 23) {
            hour = 0;
        }
    }

    return 0;
}


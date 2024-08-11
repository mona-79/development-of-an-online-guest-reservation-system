# Reservation System in C++

## Project Overview

This project is a basic command-line Reservation System implemented in C++. It allows users to make reservations by entering a guest's name along with the start and end dates of their stay. The system then stores these reservations and provides the option to display all current reservations.

## Features

- **Make a Reservation**: Users can input a guest's name, start date, and end date to create a new reservation.
- **Display Reservations**: Lists all current reservations, showing each guest's name and the duration of their stay.
- **User Interaction**: Offers a simple and intuitive interface for making multiple reservations.

## How to Use

1. **Clone the Repository**:
   ```bash
   git clone <repository-link>
   cd <repository-folder>
   ```

2. **Compile the Program**:
   - Use a C++ compiler to compile the code. For example, using `g++`:
     ```bash
     g++ -o reservation_system main.cpp
     ```

3. **Run the Program**:
   - Execute the compiled program:
     ```bash
     ./reservation_system
     ```

4. **Interact with the Program**:
   - You will be prompted to enter the guest's name, start date, and end date for the reservation.
   - After making a reservation, you can choose to make another one or display all current reservations.

## Code Structure

- **Reservation Structure**: A structure `Reservation` is defined to store each guest's name, start date, and end date.
- **ReservationSystem Class**: 
  - `makeReservation(const string& guestName, const string& startDate, const string& endDate)`: A method to create and store a new reservation.
  - `displayReservations()`: A method to display all current reservations.
- **Main Function**: The core function that handles user input, creates reservations, and displays them.

## Dependencies

- C++ Compiler (e.g., `g++`)

No external libraries are required for this project.

## Customization

- You can extend the program by adding features like editing or deleting reservations, checking for date conflicts, or saving/loading reservations from a file.
- Enhance input validation to handle incorrect formats for dates or guest names.

## License

This project is open-source and available under the [MIT License](LICENSE).

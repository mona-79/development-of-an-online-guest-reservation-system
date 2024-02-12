#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Reservation {
    string guestName;
    string startDate;
    string endDate;
};

class ReservationSystem {
private:
    vector<Reservation> reservations;

public:
    void makeReservation(const string& guestName, const string& startDate, const string& endDate) {
        Reservation newReservation = {guestName, startDate, endDate};
        reservations.push_back(newReservation);
        cout << "Reservation made for " << guestName << " from " << startDate << " to " << endDate << endl;
    }

    void displayReservations() {
        cout << "Current Reservations:\n";
        for (const auto& reservation : reservations) {
            cout << "Guest: " << reservation.guestName << ", From: " << reservation.startDate << ", To: " << reservation.endDate << endl;
        }
    }
};

int main() {
    ReservationSystem system;

    string guestName, startDate, endDate;
    char choice;

    do {
        cout << "Enter guest name: ";
        getline(cin, guestName);

        cout << "Enter start date (YYYY-MM-DD): ";
        getline(cin, startDate);

        cout << "Enter end date (YYYY-MM-DD): ";
        getline(cin, endDate);

        system.makeReservation(guestName, startDate, endDate);

        cout << "Do you want to make another reservation? (y/n): ";
        cin >> choice;
        cin.ignore(); // to consume the newline character left in the input buffer
    } while (choice == 'y' || choice == 'Y');

    system.displayReservations();

    return 0;
}

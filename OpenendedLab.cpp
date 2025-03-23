#include <iostream>
#include <iomanip>  // For table formatting
#include <string>

using namespace std;

// Structure to store book details
struct Book {
    int id;
    string title;
    string author;
    bool isBorrowed;
};

// Function prototypes
void displayMenu();
void addBook(Book books[], int &count);
void displayBooks(const Book books[], int count);
void searchBook(const Book books[], int count, int searchId);
void borrowBook(Book books[], int count, int bookId);
void returnBook(Book books[], int count, int bookId);

int main() {
    const int MAX_BOOKS = 100;
    Book books[MAX_BOOKS];
    int bookCount = 0;
    int choice;

    do {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        // Input validation to prevent invalid choices
        while (cin.fail() || choice < 1 || choice > 6) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid input! Please enter a number between 1 and 6: ";
            cin >> choice;
        }

        int bookId;
        switch (choice) {
            case 1:
                addBook(books, bookCount);
                break;
            case 2:
                displayBooks(books, bookCount);
                break;
            case 3:
                cout << "Enter Book ID to search: ";
                cin >> bookId;
                searchBook(books, bookCount, bookId);
                break;
            case 4:
                cout << "Enter Book ID to borrow: ";
                cin >> bookId;
                borrowBook(books, bookCount, bookId);
                break;
            case 5:
                cout << "Enter Book ID to return: ";
                cin >> bookId;
                returnBook(books, bookCount, bookId);
                break;
            case 6:
                cout << "Exiting the program. Have a great day!\n";
                break;
        }
    } while (choice != 6);

    return 0;
}

// Function to display the menu
void displayMenu() {
    cout << "\n=========================================\n";
    cout << "       LIBRARY MANAGEMENT SYSTEM         \n";
    cout << "=========================================\n";
    cout << "1. Add a Book\n";
    cout << "2. Display All Books\n";
    cout << "3. Search Book by ID\n";
    cout << "4. Borrow a Book\n";
    cout << "5. Return a Book\n";
    cout << "6. Exit\n";
    cout << "=========================================\n";
}

// Function to add a book
void addBook(Book books[], int &count) {
    cout << "Enter Book ID: ";
    cin >> books[count].id;
    cin.ignore();  // Clears buffer to prevent input issues

    cout << "Enter Book Title: ";
    getline(cin, books[count].title);

    cout << "Enter Author Name: ";
    getline(cin, books[count].author);

    books[count].isBorrowed = false;
    count++;
    cout << "Book added successfully!\n";
}

// Function to display all books
void displayBooks(const Book books[], int count) {
    if (count == 0) {
        cout << "No books available in the library.\n";
        return;
    }

    cout << "\nList of Available Books:\n";
    cout << "-------------------------------------------------\n";
    cout << setw(5) << "ID" << setw(20) << "Title" << setw(20) << "Author" << setw(15) << "Status" << endl;
    cout << "-------------------------------------------------\n";

    for (int i = 0; i < count; i++) {
        cout << setw(5) << books[i].id
             << setw(20) << books[i].title
             << setw(20) << books[i].author
             << setw(15) << (books[i].isBorrowed ? "Borrowed" : "Available") << endl;
    }
}

// Function to search for a book by ID
void searchBook(const Book books[], int count, int searchId) {
    for (int i = 0; i < count; i++) {
        if (books[i].id == searchId) {
            cout << "\nBook Found!\n";
            cout << "Title: " << books[i].title << "\nAuthor: " << books[i].author
                 << "\nStatus: " << (books[i].isBorrowed ? "Borrowed" : "Available") << endl;
            return;
        }
    }
    cout << "Book with ID " << searchId << " not found.\n";
}

// Function to borrow a book
void borrowBook(Book books[], int count, int bookId) {
    for (int i = 0; i < count; i++) {
        if (books[i].id == bookId) {
            if (!books[i].isBorrowed) {
                books[i].isBorrowed = true;
                cout << "You have successfully borrowed the book: " << books[i].title << endl;
            } else {
                cout << "This book is already borrowed.\n";
            }
            return;
        }
    }
    cout << "Book with ID " << bookId << " not found.\n";
}

// Function to return a book
void returnBook(Book books[], int count, int bookId) {
    for (int i = 0; i < count; i++) {
        if (books[i].id == bookId) {
            if (books[i].isBorrowed) {
                books[i].isBorrowed = false;
                cout << "You have successfully returned the book: " << books[i].title << endl;
            } else {
                cout << "This book was not borrowed.\n";
            }
            return;
        }
    }
    cout << "Book with ID " << bookId << " not found.\n";
}

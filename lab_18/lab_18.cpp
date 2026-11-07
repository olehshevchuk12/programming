#include <iostream>
#include <string>
#include <vector>
using namespace std;


struct Author {
    string surname;
    string name;
};


struct Book {
    string title;      
    Author author;     
    string publisher;  
    int year;          
    int pages;         
    double price;      
};

void PrintBook(const Book& book) {
    cout << book.title << " | "
         << book.author.surname << " " << book.author.name << " | "
         << book.publisher << " | "
         << book.year << " | "
         << book.pages << " pages | "
         << book.price << " UAH\n";
}

void PrintBooks(const vector<Book>& books) {
    for (const Book& book : books) {
        PrintBook(book);
    }
}

int main() {
    vector<Book> books = {
        {"Shadows of Forgotten Ancestors", {"Kotsiubynskyi", "Mykhailo"}, "Folio",    2008, 160, 120.0},
        {"Kobzar",                         {"Shevchenko",    "Taras"},    "Znannia",  2015, 480, 350.0},
        {"Zakhar Berkut",                  {"Franko",        "Ivan"},     "Osnovy",   2012, 220, 180.5},
        {"The Boarding School",            {"Zhadan",        "Serhiy"},   "Meridian", 2017, 320, 290.0},
        {"The City",                       {"Pidmohylnyi",   "Valerian"}, "Folio",    2019, 400, 330.0},
        {"The Forest Song",                {"Ukrainka",      "Lesya"},    "Znannia",  2011, 190, 150.0},
        {"Fieldwork in Ukrainian Sex",     {"Zabuzhko",      "Oksana"},   "Komora",   2020, 350, 420.0}
    };

    cout << "All library books:\n";
    PrintBooks(books);

    const int minYear = 2012;
    const double maxPrice = 350.0;

    cout << "\nBooks published from " << minYear << " and cheaper than "
         << maxPrice << " UAH:\n";

    bool found = false;
    for (const Book& book : books) {
        if (book.year >= minYear && book.price <= maxPrice) {
            PrintBook(book);
            found = true;
        }
    }
    if (!found) {
        cout << "Nothing found\n";
    }
    return 0;
}
#include "book.h"

using namespace std;

// Constructeur par defaut
Book ::Book() : title(""), author(""),isbn(""),isAvailable(true),borrowerId(""){}

// Constructeur avec parametres
Book::Book(const string& title, const string& author, const string& isbn)
    : title(title), author(author), isbn(isbn), isAvailable(true), borrowerId("") {}

// Getters 
string Book::getTitle() const {return title;}
string Book::getAuthor() const {return author;}
string Book::getISBN() const{return isbn;}
bool Book::getAvailability() const{return isAvailable;}
string Book::getBorrowerId() const {return borrowerId;}
#include <iostream>
#include <string>
using namespace std;

class Book
{
private:

	// Member Variables 
	string title;
	string author;
	int publicationYear;
	string availabilitystatus;

public:

	// Constructor 
	Book(string t, string a, int year, string p) : title(t), author(a), publicationYear(year), availabilitystatus(p) {}

	// Member Function to display book details 
	void displayDetails()
	{
		cout << "Title: " << title << endl;
		cout << "Author: " << author << endl;
		cout << "Publication Year: " << publicationYear << endl;
		cout << "Availability Status: " << availabilitystatus << endl;
	}

	// Member Function to update the book's price 
	void updateAvailabilitystatus(string newAvailabilitystatus)
	{
		availabilitystatus = newAvailabilitystatus;
	}
};

int main()
{
	
	// Creating an object of Book class and initializing it 
	Book myBook("Simka Time", "Pablo Banopart", 1925, "are available");

	// Displaying book details 
	cout << "Initial book details:" << endl; myBook.displayDetails();

	// Updating the book's price
	myBook.updateAvailabilitystatus("not available");

	// Displaying updated book details 
	cout << "\nUpdated book details:" << endl;
	myBook.displayDetails();

	return 0;
}


/*
Самостоятельная задача: Реализуйте простую систему управления библиотекой на C++
Реализуйте простую систему управления библиотекой на C++. 
Ваша основная задача - спроектировать класс Book, который инкапсулирует свойства и поведение книги, 
включая название, автора, год публикации и статус доступности. 
Вы изучите основы объектно-ориентированного программирования, используя конструкторы по умолчанию 
и параметризованные конструкторы для инициализации объектов книг, реализуя деструктор 
для понимания управления жизненным циклом объекта, и применяя перегрузку методов для обновления информации 
о книге различными способами.
*/
#include <iostream>
#include <string>



class Contact {
public:
    // Конструктор по умолчанию
    Contact() :
        firstName(""),
        lastName(""),
        homePhone(""),
        mobilePhone(""),
        address("") {}
    // Параметрический конструктор
    Contact(const std::string& firstName, const std::string& lastName, const std::string& homePhone,
        const std::string& mobilePhone, const std::string& address) :
        firstName(firstName),
        lastName(lastName),
        homePhone(homePhone),
        mobilePhone(mobilePhone),
        address(address) {}

    // Геттеры
    const std::string& getFirstName()   const { return firstName; }
    const std::string& getLastName()    const { return lastName; }
    const std::string& getHomePhone()   const { return homePhone; }
    const std::string& getMobilePhone() const { return mobilePhone; }
    const std::string& getAddress()     const { return address; }

    // Сеттеры
    void setFirstName(const std::string& firstName)     { this->firstName = firstName; }
    void setLastName(const std::string& lastName)       { this->lastName = lastName; }
    void setHomePhone(const std::string& homePhone)     { this->homePhone = homePhone; }
    void setMobilePhone(const std::string& mobilePhone) { this->mobilePhone = mobilePhone; }
    void setAddress(const std::string& address)         { this->address = address; }

    // Деструктор
    ~Contact() {}

    // Перегрузка оператора вывода
    friend std::ostream& operator<<(std::ostream& os, const Contact& contact) {
        os << "Имя: " << contact.firstName << std::endl;
        os << "Фамилия: " << contact.lastName << std::endl;
        os << "Домашний телефон: " << contact.homePhone << std::endl;
        os << "Мобильный телефон: " << contact.mobilePhone << std::endl;
        os << "Адрес: " << contact.address << std::endl;
        return os;
    }

private:
    std::string firstName;
    std::string lastName;
    std::string homePhone;
    std::string mobilePhone;
    std::string address;
};

int main() {
    setlocale(LC_ALL, "ru");
    // Создание объектов класса Contact
    Contact contact1("Иван", "Иванов", "+7 (912) 345-67-89", "+7 (987) 654-32-10", "ул. Ленина, д. 1, кв. 2");
    Contact contact2("Петр", "Петров", "+7 (909) 234-56-78", "+7 (911) 123-45-67", "ул. Мира, д. 2, кв. 3");
    Contact contact3("Мария", "Сидорова", "+7 (926) 111-22-33", "+7 (928) 444-55-66", "ул. Пушкина, д. 3, кв. 4");

    // Применение методов класса
    std::cout << contact1 << std::endl;
    std::cout << contact2 << std::endl;
    std::cout << contact3 << std::endl;

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

void SendSms(const string& number, const string& message) {
    cout << "Send '" << message << "' to number " << number << endl;
}

void SendEmail(const string& email, const string& message) {
    cout << "Send '" << message << "' to e-mail " << email << endl;
}

class INotifier {
public:
    virtual void Notify(const string& message) = 0;  // чисто віртуальний метод
    virtual ~INotifier() {}                          // віртуальний деструктор
};

class SmsNotifier : public INotifier {
public:
    SmsNotifier(const string& number) {
        number_ = number;
    }
    void Notify(const string& message) override {
        SendSms(number_, message);
    }
private:
    string number_;
};

class EmailNotifier : public INotifier {
public:
    EmailNotifier(const string& email) {
        email_ = email;
    }
    void Notify(const string& message) override {
        SendEmail(email_, message);
    }
private:
    string email_;
};

void Notify(INotifier& notifier, const string& message) {
    notifier.Notify(message);
}

int main() {
    SmsNotifier sms{"+38-067-777-77-77"};
    EmailNotifier email{"lab28-final@pnu.edu.ua"};

    Notify(sms, "I am learning C++");
    Notify(email, "and I want to be successful");

    return 0;
}
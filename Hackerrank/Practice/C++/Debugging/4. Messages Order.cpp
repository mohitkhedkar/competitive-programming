#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Message {
private:
    int msg_num; 
    string text;

public: 
    Message() {
    }

    Message(int num, string str) {
        this -> msg_num = num;
        this -> text = str;
    }
    const string& get_text() {
        return this -> text;
    }

    bool operator <(const Message& m){
        if(msg_num < m.msg_num){
            return true;
        }
        return false;
    }
};

class MessageFactory {
private:

    int current_message = 0;
public:
    MessageFactory() {}
    Message create_message(const string& text) {
        return Message(current_message++, text);
    }
};

class Recipient {
public:
    Recipient() {}
    void receive(const Message& msg) {
        messages_.push_back(msg);
    }
    void print_messages() {
        fix_order();
        for (auto& msg : messages_) {
            cout << msg.get_text() << endl;
        }
        messages_.clear();
    }
private:
    void fix_order() {
        sort(messages_.begin(), messages_.end());
    }
    vector<Message> messages_;
};

class Network {
public:
    static void send_messages(vector<Message> messages, Recipient& recipient) {
    // simulates the unpredictable network, where sent messages might arrive in unspecified order
        random_shuffle(messages.begin(), messages.end());         
        for (auto msg : messages) {
            recipient.receive(msg);
        }
    }
};



int main() {
    MessageFactory message_factory;
    Recipient recipient;
    vector<Message> messages;
    string text;
    while (getline(cin, text)) {
        messages.push_back(message_factory.create_message(text));
    }
    Network::send_messages(messages, recipient);
    recipient.print_messages();
}

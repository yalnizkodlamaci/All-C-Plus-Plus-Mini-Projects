#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <string>
#include <queue>
#include <stack>
#include <iterator> // advance için

using namespace std;

class Stack{
    stack<string> users;
public:
    void üstEriş(){
        // orijinal imza korunuyor; boş bırakmak derlenir
    }
};

class Queue{
    mutable queue<string> users; // const metotların push/pop yapabilmesi için
public:
    void frontAdd(const string& add) const;
    void firstDelete();
    void endAdd(const string& add) const;
};

void Queue::endAdd(const string& add) const {
    users.push(add);
}

void Queue::firstDelete() {
    if(!users.empty()) users.pop();
}

void Queue::frontAdd(const string& add) const {
    // std::queue fronta ekleme bilmez; sırayı koruyarak öne eklemek için yeniden kur
    queue<string> tmp;
    tmp.push(add);
    queue<string> copy = users;
    while(!copy.empty()){ tmp.push(copy.front()); copy.pop(); }
    users = std::move(tmp);
}

class UserData{
    list<string> users;
public:
    void endAdd(const string& add);
    void firstAdd(const string& add);
    void find3(const string& find);
    void find(const string& find_);
};

void UserData::endAdd(const string& add){
    users.push_back(add);
}

void UserData::firstAdd(const string& add){
    users.push_front(add);
}

void UserData::find3(const string& /*find*/){
    auto it = users.begin();
    advance(it, 2);
    if (it != users.end())
        cout << *it << endl;
    else
        cout << "3. eleman yok\n";
}

void UserData::find(const string& find_){
    auto it = std::find(users.begin(), users.end(), find_);
    if(it != users.end()){
        cout << find_ << " bulundu." << endl;
    }else{
        cout << find_ << " yok." << endl;
    }
}

int main(){
    UserData u;
    u.endAdd("ali");
    u.endAdd("veli");
    u.endAdd("can");
    u.firstAdd("ayse");

    u.find3("ignored");
    u.find("veli");
}

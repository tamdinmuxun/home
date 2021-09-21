#include <iostream>
#include <string>
using namespace std;

void results_by_name(){
    freopen("as_is", "r", stdin);
        getline(cin, s);
        while (getline(cin, s)){
            cout << s + '\n';
        }
}
void quiz_by_name(){
    freopen("inputfile", "r", stdout);
        getline(cin, s);
        while (getline(cin, s)){
            cout << s + '\n';
        }
}
int main(){
    string s;
    cout << "Choose poll_results or quiz\n";
    cin >> s;
    //не понял как сортировать данные по имени пользователя
    if (s == "poll_results"){
        results_by_name();
    }else if (s == "quiz"){
        quiz_by_name();
    }
    cout << "Statistics\n People passed the poll: 1\n Unique books: 1\n"
}

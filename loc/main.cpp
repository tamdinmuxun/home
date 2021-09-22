#include <iostream>
#include <string>
#include <fstream>
using namespace std;

string s;

void results_by_name()
{
    ifstream x("outputlol.txt", ios_base::in);

    while (getline(x, s)){
        cout << s + '\n';
    }
}

void quiz_by_name()
{
    ifstream y("inputlol.txt", ios_base::in);
    ofstream x("outputlol.txt", ios_base::app);


    while (getline(y, s)){
            cout << s + '\n';
            getline(cin, s);
            x << s << endl;
        }
}

void change_questions(){
    cout << "current questions:" << endl;

    ifstream y("inputlol.txt", ios_base::in);

    while (getline(y, s))  cout << s << endl;

    cout << endl;

    cout << "Now enter what u want questions to look like (enter LOSEN to end)" << endl;

    ofstream x("inputlol.txt", ios_base::trunc);

    while(cin >> s) {if(s == "LOSEN") break; x << s << endl;}
}

int main()
{
    cout << "Wanna change questions? (yes or no)" << endl;
    cin >> s;

    if(s == "yes") change_questions();

    cout << "Choose poll_results or quiz\n";
    cin >> s;

    //не понял как сортировать данные по имени пользователя

    if (s == "poll_results"){
        results_by_name();
    }else if (s == "quiz"){
        quiz_by_name();
    }
    cout << "Statistics\n People passed the poll: 1\n Unique books: 1\n";
}

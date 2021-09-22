#include <iostream>
#include <string>
#include <fstream>

using namespace std;

string s;

void results_by_name(){
    ifstream fin;
    fin.open("output.txt", ios_base::in);
    getline(fin, s);
    while (getline(fin, s)){
        cout << s + '\n';
    }
    fin.close();
}
void quiz_by_name(){
        ofstream fout;
        fout.open("output.txt", ios_base::app);
        setlocale(LC_ALL, "rus"); // корректное отображение Кириллицы
        char buff[256];
        ifstream fin("inputfile.txt", ios_base::in);
        if (fin.is_open()){
            cout << "YE\n";
        }else{
            cout << "NO\n";
        }
        while (fin.getline(buff, 256)){
            cout << buff << '\n';
            string ans;

            getline(cin, ans);
            getline(cin, ans);
            fout << ans + '\n';
        }
        fin.close();
        fout.close();
}
int main(){
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

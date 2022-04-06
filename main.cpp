#include <iostream>
#include <fstream>


using namespace std;

int main() {
        ofstream outFile;
        outFile.open("list.txt", std::ios::app);


        string day;
        string entry;
        int choice;
        string d;
        bool found;
        string answer;
        int count = 0;

        cout << "(1)Make a journal entry\n";
        cout << "(2)Look at an old journal entry\n";
        cin >> choice;

        if(choice == 1) {
                cout << "Enter day: ";
                cin >> day;
                cout << "Write entry: ";
                getline(cin >> ws, entry);
                outFile << day << endl << entry << endl;
                outFile.close();
                exit(1);

        }else if(choice == 2) {
                cout << "What day are you looking for: ";
                getline(cin >> ws, d);
                string item;
                ifstream inFile;
                inFile.open("list.txt", std::ios::app);
                while(!inFile.eof()) {
                        getline(inFile, item);
                        if (item == d) {
                                found = true;
                                //count++;
                                continue;
                        }else if(item != d){
                                found = false;
                                count++;
                                continue;
                        }else if (found == true) {
                                inFile.close();
                        }else if (found == true) {
                                inFile.close();
                                break;
                        }
                inFile.close();
                //cout << answer;
                }
        cout << count << "\n";
        ifstream File;
        File.open("list.txt", std::ios::app);
        int n = 0;
        int goal = count - 1;
        string stri;
        while(!File.eof()) {
                n++;
                if (n==goal) {
                        getline(File, stri);
                        cout << stri << endl;
                        
                        break;
                
                }
        }
        }

}

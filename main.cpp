#include <string>
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    bool isTrue = false;
    string thePath;
    cout << "enter the file's path: ";
    cin >> thePath;
    cout << endl;
    fileReader fr(thePath);
    if (fr.exist())
    {
        cout << "connected<<endl;";
    }
    else
    {
        exit(EXIT_FAILURE);
    }
    cout << "File Menu:" << endl;
    cout << "[1] read whole file" << endl;
    cout << "[2] read last line" << endl;
    cout << "[3] rewright file" << endl;
    cout << "[4] append file" << endl;
    cout << "[5] blank" << endl;
    cout << "[6] change file directory" << endl;
    cout << "[7] quit" << endl;
    cout << "select option: " << endl;
    int x;
    cin >> x;
    switch (x)
    {
    case 1:
        fr.readFile();
        break;
    case 2:
        fr.readLastLine();
        break;
    case 3:
        fr.overRide();
        break;
    case 4:
        fr.append();
        break;
    case 5:
        fr.blank();
        break;
    case 6:
        fr.setPath();
        break;
    case 7:
        isTrue = fr.quit();
        break;
    default:
        cout << "invalid option!" << endl;
    }
    return 0;
}



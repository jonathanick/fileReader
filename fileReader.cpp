#include <string>
#include <iostream>
#include <fstream>
using namespace std;
class fileReader
{
public:
    string path;
    fileReader(string track)
    {
        path = track;
    }
    bool exist()
    {
        ifstream file;
        bool isTrue = false;
        file.open(path);
        if (file)
        {
            cout << "file exists!" << endl;
            isTrue = true;
        }
        else
        {
            cout << "file doesn't exist";
        }
        file.close();
        return isTrue;
    }
    bool exist(string newPath)
    {
        ifstream file;
        bool isTrue = false;
        file.open(newPath);
        if (file)
        {
            cout << "file's exist's" << endl;
            isTrue = true;
        }
        else
        {
            cout << "file doesnt exist" << endl;
        }
        file.close();
        return isTrue;
    }
    void getPath()
    {
        cout << path << endl;
    }
    bool quit()
    {
        return true;
    }
    void readFile()
    {
        string line;
        ifstream stream(path);
        if (stream.is_open())
        {
            while (stream.good())
            {
                getline(stream, line);
                cout << line << endl;
            }
            stream.close();
        }
    }

    void readLastLine()
    {
        string line;
        ifstream stream(path);
        if (stream.is_open())
        {
            while (stream.good())
            {
                getline(stream, line);
            }
            cout << line << endl;
            stream.close();
        }
    }
    void overRide()
    {
        string text;
        cout << "replace old text with: ";
        cin >> text;
        cout << endl;
        ofstream append(path);
        append << text << endl;
        append.close();
    }
    void append()
    {
        string text;
        cout << "Append text: ";
        cin >> text;
        cout << endl;
        ofstream append(path);
        append << text << endl;
        append.close();
    }
    void blank()
    {
        string text = "";
        ofstream blank(path);
        blank << text;
        blank.close();
    }
    void setPath()
    {
        cout << "you're current directory is ";
        cout << path << endl;
        cout << "are you sure you want to edit a new text file?" << endl;
        bool change = false;
        int choice = 2;
        while ((choice != 0) && (choice != 1))
        {
            cout << "enter 1 for yes 0 for no: ";
            cin >> choice;
        }
        if (choice == 0)
        {
            cout << "request for change in file has been canceled." << endl;
        }
        else
        {
            cout << "enter path of new text file: ";
            string newPath;
            cin >> newPath;
            cout << endl;
            if (exist(newPath))
            {
                cout << "current file disconnected" << endl;
                cout << "new file connected!" << endl;
            }
            else
            {
                cout << "incorrect file path" << endl;
            }
        }
    }
};
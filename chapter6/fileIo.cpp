#include <iostream>
#include <fstream>
#include <string.h>

using std::cout;
using std::endl;
using std::cin;

int outFile(char* fileName);
int inFile(char* fileName);

const int MaxSize = 20;

int main()
{
    cout << "Input your file name: " << endl;
    char fileName[MaxSize];
    cin.getline(fileName,MaxSize);
    outFile(fileName);
    cout << "======================== in File is: =======" << endl;
    inFile(fileName);
    return 0;
}

int outFile(char* fileName)
{
    std::ofstream outFile;
    outFile.open(fileName);
    
    char content[MaxSize];
    cout << "Input the content: " << endl;
    cin.getline(content,MaxSize);

    outFile << content << endl;
    outFile.close();

    return 0;
}

int inFile(char* fileName)
{
    std::ifstream inFile;
    inFile.open(fileName);

    while(inFile.good())
    {
        char content[50];
        inFile.getline(content, 50);

        cout << content << endl;
        memset(content,'\0',50);
    }
    if(inFile.eof())
      cout << "End of file reached! " << endl;
    else if(inFile.fail())
      cout << "File failed!" << endl;

    inFile.close();

    return 0;
    
}

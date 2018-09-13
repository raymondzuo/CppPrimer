#include <iostream>
#include <cstring>

using std::cout;
using std::endl;
using std::cin;

struct chaff
{
    char dross[20];
    int slag;
};

const int BUFSIZE = 512;
static chaff BUFF[BUFSIZE];

int main()
{
    chaff *pChaff1, *pChaff2;
    const int chaffSize = 2;
    pChaff1 = new (BUFF) chaff[chaffSize];
    pChaff2 = new chaff[chaffSize];

    for(int i = 0; i < chaffSize; i++)
    {
        std::strcpy(pChaff1[i].dross, "heihei");
        pChaff1[i].slag = i + 1;

        std::strcpy(pChaff2[i].dross, "haha");
        pChaff2[i].slag = i + 2;
    }

    for(int i = 0; i < chaffSize; i++)
    {
        cout << "chaff 1 info, dross: " << pChaff1[i].dross << " slag: " << pChaff1[i].slag << endl;
        cout << "chaff 2 info, dross: " << pChaff2[i].dross << " slag: " << pChaff2[i].slag << endl;
    }

    delete[] pChaff2;

    return 0;
}

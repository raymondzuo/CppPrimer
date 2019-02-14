#include <iostream>
#include <string>
#include "queuetp.h"
#include "worker.h"

const int SIZE = 2;

int main()
{
    QueueTp<Worker*> pWorkers(3);

    for(int i = 0; i < SIZE; i++)
    {
        std::string strName = "Wk" + std::to_string(i);
        auto pWk = new Worker(strName, i);
        pWorkers.enqueue(pWk);
    }

    Worker *pwk1;
    pWorkers.dequeue(pwk1);
    pwk1->Show();
    delete pwk1;

    Worker *pwk2;
    pWorkers.dequeue(pwk2);
    pwk2->Show();
    delete pwk2;

    std::cout << "Is queue empty? " << pWorkers.isempty() << std::endl;
    return 0;
}
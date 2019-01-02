#include "Port.h"

int main()
{
    using std::cout;
    using std::endl;

    Port port("Maotai", "White Wine", 10);
    VintagePort vPort("Huangjinjiu", 30, "HJJ", 1984);
    port.Show();
    vPort.Show();

    port += 3;
    port.Show();
    vPort += 10;
    vPort.Show();

    port -= 2;
    port.Show();
    vPort -= 5;
    vPort.Show();

    Port port2 = port;
    Port port3;
    port3 = port;
    port2.Show();
    port3.Show();

    VintagePort vPort2 = vPort;
    VintagePort vPort3;
    vPort3 = vPort;
    vPort2.Show();
    vPort3.Show();

    cout << "Port: " << port << endl;
    cout << "VintagePort: " << vPort << endl;

    return 0;
}
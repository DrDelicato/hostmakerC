// HostmakerC - C++ Growtopia Server Host maker created by Kali
//

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string ip;
    string filename;
    cout << "Enter your IP address : " << endl;
    cin >> ip;
    cout << "Enter filename for the host : " << endl;
    cin >> filename;

    ofstream host(filename);
    host << ip + " growtopia1.com\n" + ip + " growtopia2.com";
    host.close();

    cout << "Host file created with name : " + filename << endl;
    cin.get();
}

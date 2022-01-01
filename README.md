# Information
C++ Growtopia Server host maker, by using FStream to create files.
This program use CIN to collect string in the user input.
## How To Use
First off, what you gonna need to do is that you gonna need to copy the code from this repository, and paste into your project.
Second but not least, build it.
And after that, just run it in your computer.
## Complete Code
```cpp
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
```
You can either use **system** functions or **cin.get** to pause the program.

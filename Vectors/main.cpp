#include <iostream>
#include <vector>
#include <fstream>
#include <time.h>
#include <windows.h>

using namespace std;

int main()
{
    vector<int>wek(10);
    fstream plik;
    wek[0] = 1;
    wek[1] = 9;
    wek[2] = 16;
    wek[3] = 27;
    wek[4] = 8;
    wek[5] = 5;
    wek[6] = 12;
    wek[7] = 11;
    wek[8] = 15;
    wek[9] = 3;

    for(int i=0;i<wek.size();i++)
    {
        cout << "Element number " << i << ": " << wek[i] << endl;
    }

    plik.open("Vector numbers.txt",ios::out);
    {
        for(int i=0;i<wek.size();i++)
        {
            plik << "Element number " << i << ": " << wek[i] << endl;
        }
    }
    plik.close();
    cout << "Files are being exported..." << endl;
    Sleep(1250);


    return 0;
}

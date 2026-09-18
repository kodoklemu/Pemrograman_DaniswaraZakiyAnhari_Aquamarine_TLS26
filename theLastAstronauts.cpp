#include <iostream>
using namespace std;

void theLastAstronauts(int n, int k) 
{
    int astronauts[1000];
    for (int i = 0; i < n; i++) 
    {
        astronauts[i] = i + 1;
    }

    int currentCount = n;
    int index = 0;
    
    cout << "Urutan Eliminasi Astronauts: " << endl;
    while (currentCount > 1)
    {
        index = (index + k - 1) % currentCount;
        int eliminated = astronauts[index];
        cout << eliminated << " ";

        for (int i = index; i < currentCount -1; i++) 
        {
            astronauts[i] = astronauts[i + 1];
        }
        currentCount--;

        if (eliminated % 2 == 0)
        {
            k += 2;
        } else {
            k -= 1;
        }

        if (k < 2) {
            k = 2;
        }
    }
    cout << "\nAstronaut terakhir: " << astronauts[0] << endl;
}

int main()
{
    int n = 0, k = 0;
    cout << "Masukkan jumlah astronaut (n): ";
    cin >> n;
    cout << "Masukkan langkah eliminasi (k): ";
    cin >> k;
        if (n > 1000) 
        {
            cout << "Maksimal astronaut adalah 1000!" << endl;
            return 1;
        }
    theLastAstronauts(n, k);
    return 0;
}
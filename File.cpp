#pragma warning(disable : 4996)
#include<iostream>
#include<cstring>
#include<Windows.h>

using namespace std;

string cmmd, pat, t2, t1, dx, nam;
int n, nn;
struct jpeee {
    string nam1, nam2, ta1, ta2;
}jpe[1000];

void cmdread() {
    //cout<<"\nPress the path of this .exe file:\n";
    //cin>>pat;
    freopen("File1.dat", "a", stdout);
    cout << system("dir");
    fclose(stdout);
}
void read() {
    cout << "\nPress the number of your files:\n";
    cin >> n;
    nn = n * 4;
    freopen("File1.dat", "r", stdin);
    for (int i = 1; i <= nn; i++) {
        cin >> t1 >> t1 >> dx >> nam;
        if (nam[nam.length() - 1] >= 'a' && nam[nam.length() - 1] <= 'z') {
            freopen("File2.dat", "a", stdout);
            cout << nam << " \n";
            fclose(stdout);
        }
        else if (nam[nam.length() - 1] >= '0' && nam[nam.length() - 1] <= '9') {
            freopen("File3.dat", "a", stdout);
            cout << nam << " \n";
            fclose(stdout);
        }
    }
    freopen("File2.dat", "r", stdin);
    for (int i = 1; i <= n; i++) {
        cin >> jpe[i].nam1 >> jpe[i].nam2;
    }
    fclose(stdin);
    freopen("File3.dat", "r", stdin);
    for (int i = 1; i <= n; i++) {
        cin >> jpe[i].ta1;
    }
    for (int i = 1; i <= n; i++) {
        cin >> jpe[i].ta2;
    }
    fclose(stdin);
}
void solve() {
    for (int i = 1; i <= n; i++) {
        cmmd = "del " + jpe[i].ta1;
        system(cmmd.c_str());
        cmmd = "del " + jpe[i].ta2;
        system(cmmd.c_str());
        cmmd = "rename " + jpe[i].nam1 + " " + jpe[i].ta1;
        system(cmmd.c_str());
        cmmd = "rename " + jpe[i].nam2 + " " + jpe[i].ta2;
        system(cmmd.c_str());
    }
}
int main() {
    //cmdread();
    read();
    solve();
    cout << "Done!";
    return 0;
}
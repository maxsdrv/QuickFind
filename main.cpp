#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

vector<int> DataFile(vector<int> &connect){
    int line;
   ifstream in("D:\\ms.sidorov.project\\AlgorithmsRobertSadgewick\\Pairs");
   if (in.is_open()){
       while (in >> line){
           connect.push_back(line);
       }
   }
   else {
       cout << "Error open file" << endl;
   }
   in.close();

   cout << "End of program" << endl;

   return connect;
}

void Find(){
    static const int N = 10000;
    const int size = 24;
    int p, q, id[N];
    vector<int> connect;
    DataFile(connect);
    for (const int& i : connect){
        cout << i << " " << endl;
    }
    int connect_point[size] = {3, 4, 4, 9, 8, 0, 2, 3, 5, 6, 2, 9, 5, 9,
                               7, 3, 4, 8, 5, 6, 0, 2, 6, 1};
    for (int i = 0; i < N; i++){
        id[i] = i;
    }

    for (int i = 0; i < size; ++i) {
        p = connect_point[i];
        q = connect_point[i + 1];
            int t = id[p];
            if (t == id[q]) {
                continue;
            }
            for (int i = 0; i < N; ++i) {
                if (id[i] == t) {
                    id[i] = id[q];
                }
            }
            cout << " " << p << " " << q << " connect established" << endl;
        }
}

int main() {

    Find();

    return 0;
}










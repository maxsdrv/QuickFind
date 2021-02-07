#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

vector<int> DataFile(vector<int> &some_vector){
    int line;
   ifstream in("Pairs");
   if (in.is_open()){
       while (in >> line){
           some_vector.push_back(line);
       }
   }
   else {
       cout << "Error open file" << endl;
   }
   in.close();

   cout << "End of program" << endl;

   return some_vector;
}

void Find(){
    static const int N = 10000;
    int p, q;
    vector<int> some_vector;
    vector<int> connect_point;
    DataFile(some_vector);
    for (int i = 0; i < N; ++i){
        connect_point.push_back(i);
    }

    for (int i = 0; i < some_vector.size(); ++i) {
        p = some_vector[i];
        q = some_vector[i + 1];
            int t = connect_point.at(p);
            if (t == connect_point.at(q)){
                continue;
            }
            for (int i = 0; i < N; ++i) {
                if (connect_point.at(i) == t) {
                    connect_point.at(i) = connect_point.at(q);
                }
            }
            cout << " " << p << " " << q << " connect established" << endl;
        }
}

int main() {

    Find();

    return 0;
}










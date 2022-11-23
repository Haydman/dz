#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    pair<string, int> oser1 = { "Gasha", 7400};
    pair<string, int> oser2 = { "talala", 12400};
    pair<string, int> oser3 = { "mrekk", 2400};
    pair<string, int> oser4 = { "eralk727", 5400};
    pair<string, int> oser5 = { "oob", 2300};

    vector<pair<string, int>> owc2022 = {oser1, oser2, oser3, oser4, oser5};
    vector<int> _tmp;
    for (size_t i = 0; i < owc2022.size(); i++)
    {
        _tmp.push_back(owc2022[i].second);
    }
    sort(_tmp.begin(), _tmp.end());

    for (size_t i = 0; i < owc2022.size(); i++)
    {
        owc2022[i].second = _tmp[i];
    }
    reverse(owc2022.begin(), owc2022.end());

    for (size_t i = 0; i < owc2022.size(); i++)
    {
        cout << owc2022[i].first << ' ' << owc2022[i].second << ' ' << endl;
    }
    


}
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

vector<string> split(string const &str, char sep){
    vector<string> splitString;
    stringstream ss (str);
    string temp;

    while(getline(ss,temp,sep)){
        splitString.push_back(temp);
    }
    return splitString;
};

int main()
{
    int ans=0;
    char sep;
    string b;
    vector<string> zlist;

    getline(cin, b);

    zlist = split(b,'0');
    
    int prevSize = 0;
    for (auto &a:zlist){
        if (prevSize + a.length()>ans)
            ans = prevSize + a.length();
        prevSize = a.length();
    }
    cout << ans+1 << endl;


}
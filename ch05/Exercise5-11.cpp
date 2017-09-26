#include <iostream>
#include <algorithm>
#include <set>
#include <list>
#include <string>
#include<iterator>
using namespace std;
int main()
{

    typedef std::set<string> WordSet;
    typedef WordSet::iterator WordIter;
    WordSet words;
    typedef std::list<string> Index;
    Index Index_input;
    for(string new_word; cin >> new_word, new_word != "Quit";)
    {
          const pair<WordIter, bool> &trace = words.insert(new_word); 
        if(trace.second)
        {
            Index_input.push_back(*trace.first);
        }
            
    }
    copy(Index_input.begin(), Index_input.end(), ostream_iterator<string>(cout, "\n"));
    return 0;
}
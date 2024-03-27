
#include<bits/stdc++.h>
using namespace std;
class Trie {
public:
    int trie[300005][50];
    int id = 1;
    int endmark[300005];
    int pre[300005];
    Trie() {
        memset(trie,0,sizeof(trie));
        memset(endmark,0,sizeof(endmark));
        memset(pre,0,sizeof(pre));
    }

    void insert(string word) {
        int row = 1;
        for(int i = 0; i < word.size(); i++)
        {
            int ch = word[i] - 'a';
            if(trie[row][ch] == 0)
            {
                trie[row][ch] = ++id;
            }
            row = trie[row][ch];
            pre[row]++;
        }
        endmark[row] = 1;

    }
     bool search(string word)
     {
         int row=1;
         for(int i=0;i<word.size();i++)
         {
             bool check= false;
             if(word[i]=='.')
             {
                 for(int j=0;j<=49;j++)
                 {
                     if(trie[row][j]!=0)
                     {
                         check=true;
                         row=trie[row][j];
                         break;
                     }
                 }
                 if(!check)
                 {
                     return false;
                 }
             }
             else
             {
                 int ch=word[i]-'a';
                 if(trie[row][ch]==0) return false;
                 row= trie[row][ch];
             }
         }


        return (endmark[row] == 1);
    }

    bool startsWith(string prefix) {
        int row = 1;
        for(int i = 0; i < prefix.size();i++)
        {
            int ch = prefix[i] - 'a';
            if(trie[row][ch] == 0) return false;
            row = trie[row][ch];

        }
        return (pre[row] >= 1);
    }
};

class wordDictionary{
public:
    Trie* obj = new Trie();
    wordDictionary()
    {
        cout<<"Object created"<<endl;
    }
    void addword(string word)
    {
        obj->insert(word);
        cout <<"Word added"<<endl;
    }
    bool search(string word)
    {
        if(obj->search(word))
        {
            cout <<"Word Found"<<endl;
            return true;
        }
        else
        {
            cout<<"Word not found"<<endl;
            return false;
        }
    }
};

int main(){

wordDictionary word;
word.addword("bad");
word.addword("dad");
word.addword("mad");
word.search("pad");
word.search("bad");
word.search(".ad");
word.search("b..");
word.search("c..");

    return 0;

}

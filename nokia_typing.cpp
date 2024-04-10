#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class sol{
    public:
    vector<char> convert(vector<int> a){
        vector<char> ans;
        unordered_map<int,char> map;
        map[2]='a'-1;
        map[3]='d'-1;
        map[4]='g'-1;
        map[5]='j'-1;
        map[6]='m'-1;
        map[7]='p'-1;
        map[8]='t'-1;
        map[9]='w'-1;
        int count=0;
        int copy_j;
        for(auto i=a.begin();i!=a.end();i++){
            for(auto j=i;*j!=0;*j/=10){
                count++;
                copy_j=*j;
            }
            ans.push_back(map[copy_j]+count);
            count=0;
            
        }
        return ans;
    }
};
int main(){
    sol s;
    vector<int> a{7,777,666,8,8,666,999};//prottoy
    vector<char> ans(s.convert(a));
    for(auto i=ans.begin();i!=ans.end();i++){
        cout << *i;
    }
    cout << endl;
}
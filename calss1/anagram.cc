#include"twj.h"

bool anagram(std::string s, std::string t){
    if(s.empty()||t.empty()){
        return false;
    }

    if(s.size()!=t.size()){
        return false;
    }
    std::sort(s.begin(),s.end());
    std::sort(t.begin(),t.end());

    if(s==t){
        return true;
    }else{
        return false;
    }
    
}
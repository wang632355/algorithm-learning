#include<unordered_map>
#include<iostream>
//判断两个字符串中 字符个数出现是都相等
bool IsPermutation(std::string stringA,std::string stringB){
    if(stringA.length()!=stringB.length()){
        return false;
    }
    std::unordered_map<char,int>hash_map_A;
    std::unordered_map<char,int>hash_map_B;

    for(int i=0;i<stringA.length();i++){
        hash_map_A[stringA[i]]++;
        hash_map_B[stringB[i]]++;
    }

    if(hash_map_A.size()!=hash_map_B.size()){
        return false;
    }

    std::unordered_map<char,int>::iterator it;
    for(it=hash_map_A.begin();it!=hash_map_A.end();it++){
        if(it->second != hash_map_B[it->first]){
            return false;
        }
    }

    return true;
}
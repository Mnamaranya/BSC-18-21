#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int vowelsCount(string str);
int wordsCount(string str);


string reverseWords(string str);
string reverseRecursion(string str);


string capitalizeSecond(string str);

int wordsCount2(string str);
int main(){

    //open text file
    fstream myFile("text.txt");
    
    
    string fileData;

    if (myFile.is_open()){
        getline(myFile, fileData);
        cout<<"og message: "<< fileData<<endl;
        cout<<"Number of vowels: "<<vowelsCount(fileData)<<endl;
        cout<<"Number of words: "<<wordsCount(fileData)<<endl;
        cout<<"reverse words: "<<reverseWords(fileData)<<endl;
        cout<<"Capitalize second: "<<capitalizeSecond(fileData)<<endl;
    }

    
    return 0;
}

int vowelsCount(string str){
    int counter = 0;

    for(int i = 0; i < str.length();i++){
        switch(toupper(str[i])){
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                counter++;
                break;
            default:
                break;
        }
    }

    return counter;
}


int wordsCount(string str){
    int counter = 0;

    bool flag = false;

    for(int i = 0; i < str.length();i++){
        if(!(str[i] == ' ') && flag == false){
            flag = true;
            counter++;
        }

        if(str[i] == ' '){
            flag = false;
        }
    }

    return counter;
}

string reverseRecursion(string str){
    if (str == ""){
        return "";
    }else{
        return reverseRecursion(str.substr(1)) + str[0];
    }
}

string reverseWords(string str){
    string output = "";
    int i = 0;
    while(i < str.length()){
        output = output + str[str.length() - 1 - i];
        i++;
    }
    return output + "\0";
}




string capitalizeSecond(string str){
    string result = "";

    bool flag = true;
    bool flag_two = false;


    for(int i = 0; i < str.length();i++){


        if(str[i] != ' ' && flag){
            flag = false;
            result += str[i];
            flag_two = true;
            continue;
        }

        if(flag_two && str[i] != ' '){
            result += toupper(str[i]);
            flag_two = false;
            continue;
        }

        if(str[i] == ' '){
            flag = true;
        }
   
        result += str[i];    
    }

    return result;
}

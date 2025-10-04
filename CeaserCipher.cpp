#include<iostream>
#include<string>
using namespace std;

int main(){
    string text;
    int shift;
    int choice;

    cout<<"Enter a message: ";
    getline(cin,text);

    cout<<"Enter shift value : ";
    cin>>shift;
    cout<<"Choose option : "<<endl<<"1. Encrypt "<<" 2. Decrypt"<<endl;
    cin>>choice;

    string result = "";

    if(choice == 1){ // Encryption
        for(int i = 0;i < text.length();i++){
            char c = text[i];
            if(isalpha(c)){
                char base =isupper(c) ? 'A' : 'a';
                c = (c - base + shift) % 26 + base;
            }
            result += c;
        }
        cout<<"Encrypted text: "<<result<<endl;
    }
    else if (choice == 2){ // Decryption
        for(int i = 0;i < text.length();i++){
            char c = text[i];
            if(isalpha(c)){
                char base = isupper(c) ? 'A' : 'a';
                c = (c - base - shift + 26) % 26 + base;
            }
            result += c;
        }
        cout<<"Decrypted text: "<<result<<endl;

    }
    else{
        cout<<"Invalid choice! "<<endl;
    }
    return 0;

}
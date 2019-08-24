#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
string encryptionMessage(string Msg)
{
    string CTxt = "";
    int a = 3;
    int b = 6;
    for (int i = 0; i < Msg.length(); i++)
        {
            CTxt = CTxt + (char) ((((a * Msg[i]) + b) % 26) + 65);
        }
    return CTxt;
}

string decryptionMessage(string CTxt)
{
    string Msg = "";
    int a = 3;
    int b = 6;
    int a_inv = 0;
    int flag = 0;
    for (int i = 0; i < 26; i++)
        {
            flag = (a * i) % 26;
            if (flag == 1)
                {
                    a_inv = i;
                }
        }
    for (int i = 0; i < CTxt.length(); i++)
        {
            Msg = Msg + (char) (((a_inv * ((CTxt[i] - b)) % 26)) + 65);
        }
    return Msg;
}
int main(int argc, char **argv)
{
    cout << "Enter the message: ";
    string message;
    cin >> message;
    cout << "Message is :" << message;
    cout << "\nEncrypted Message is : " << encryptionMessage(message);
    cout << "\nDecrypted Message is: " << decryptionMessage(
             encryptionMessage(message));
}

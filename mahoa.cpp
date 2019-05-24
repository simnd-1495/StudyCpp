#include <iostream>
#include <cstring>
#include <vector>
#include <cmath>
using namespace std;
vector <int> Plaintext;
vector <int> Ciphertext;
vector <int> Key;
vector <int> number_CiP;
vector <int> number_Pla;
string s, key;
int tmp[8];

void reset ()
{
    for(int i = 0; i < 8; i++)
    {
        tmp[i] = 0;
    }
}

void DecimalToBinary(char a)
{
    int b = (int)a;
    for(int i = 0; i < 8; i++)
    {   
        tmp[i]= b%2;
        b = b/2;
    }
}

void BinaryToDecimal (vector <int> A, vector <int> &B)
{
    for(int i = 0; i < A.size()/8 ; i++)
    {
        B.push_back(0);
        for(int j = 8*i ; j < 8*(i+1); j++)
        {
            if (A[j] != 0) {
                B[i] += (A[j] * (pow(2, 7-(j%8))));
            }
        }
    }
}

void push( vector <int> &A)
{
    for(int i = 7; i >= 0; i--)
    {
        A.push_back(tmp[i]);
    }
    
}

void output(vector <int> A)
{
    for(int i = 0; i < A.size(); i++)
    {
        cout << A[i] << " ";
    }
    
}

void mahoa()
{
    for(int i = 0; i < Plaintext.size(); i++)
    {
        if ( Plaintext[i] == Key [i % Key.size()] )
        {
            Ciphertext.push_back(0);
        }
        else
        {
            Ciphertext.push_back(1);
        }
    }
}

void giaima()
{

    for(int i = 0; i < Ciphertext.size(); i++)
    {
        if ( Ciphertext[i] == Key [i % Key.size()] )
        {
            Plaintext[i] = 0;
        }
        else
        {
            Plaintext[i] = 1;
        }
    }
}

int main()
{
    cout << "Nhap Plaintext: " << endl;
    getline (cin, s);
    cout << "Nhap key: " << endl;
    getline (cin, key);
    for(int i = 0; i < s.length(); i ++)
    {   
        reset();
        DecimalToBinary(s[i]);
        push(Plaintext);
    }
    for(int i = 0; i < key.length(); i ++)
    {   
        reset();
        DecimalToBinary(key[i]);
        push(Key);
    }
    mahoa();
    BinaryToDecimal(Ciphertext, number_CiP);
    cout <<  "chuoi sau ma hoa: ";
    for(int i = 0; i < number_CiP.size(); i ++)
    {
        cout<< (char)number_CiP[i] << " " ;
    }
    cout << endl << "chuoi sau giai ma: ";
    giaima();
    BinaryToDecimal(Plaintext, number_Pla);
    for(int i = 0; i < number_Pla.size(); i ++)
    {
        cout<< (char) number_Pla[i] ;
    }
    cout<< endl;
    return 0;
}
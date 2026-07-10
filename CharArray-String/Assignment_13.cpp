#include <iostream>
#include <string>
using namespace std;

int countLowerCaseVowels(string str){
    int count = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            count ++;
        }
    }
    return count;
}

bool stringSwap(string str1, string str2){
    if (str1 == str2)
    {
        cout << "No need to swap characters as the strings are already same." << endl;
        return false;
    }else if (str1.length() != str2.length())
    {
        cout << "Length of both strings are not the same";
        return false;
    }
    
    for (int i = 0; i < str1.length(); i++)
    {
        for (int j = i+1; j < str1.length(); j++)
        {
            swap(str1[i],str1[j]);
            if (str1 == str2)
            {
                return true;
            }
            swap(str1[i],str1[j]); // Swap back to original positions
        }
    }
    return false;
}

//Solution is incorrect and need to be solved using stack
// bool validParentheses(string str){
//     int count1 = 0, count2 = 0, count3 = 0;
//     for (int i = 0; i < str.length(); i++)
//     {
//         if (str[i] == '(')
//         {
//             count1++;
//         }else if (str[i] == '{')
//         {
//             count2++;
//         }else if (str[i] == '[')
//         {
//             count3++;
//         }else if (str[i] == ')')
//         {
//             count1--;
//             if (count1 < 0)
//             {
//                 return false;
//             }
//         }else if (str[i] == '}')
//         {
//             count2--;
//             if (count2 < 0)
//             {
//                 return false;
//             }
//         }else if (str[i] == ']')
//         {
//             count3--;
//             if (count3 < 0)
//             {
//                 return false;
//             }
//         }
//     }
//     return true;
// }

int main(){
    string str;

    cout << "Enter a word:";
    getline(cin, str);

    cout << "No of Times a vowel occurred in your enter string is : " << countLowerCaseVowels(str) << endl;

    string str1, str2;
    cout << "Enter 1st string: ";
    getline(cin, str1);
    cout << "Enter 2nd string: ";
    getline(cin, str2);

    cout << stringSwap(str1, str2) << endl;
    
    // string str;
    // cout << "Enter a string containing only (), {} and [] : " ;
    // getline(cin, str);
    // cout << validParentheses(str) << endl;
    return 0;
}
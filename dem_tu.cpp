// // #include<bits/stdc++.h>
// // #include<string>
// // using namespace std;
// // int main(){
// //     int test;
// //     cin >> test;
// //     cin.ignore();
// //     while(test--){
// //         string s;
// //         getline(cin, s);
// //         int dem=1;
// //         for(int i=0; i<s.length()-1; i++){
// //             if(s[i] != ' ' && s[i+1] == ' ' && s[s.length()-1] != ' '){
// //                 dem++;
// //             }
// //         }
// //         cout << dem << endl;
// //     }
// // }

// #include <bits/stdc++.h>
// #include <string>
// using namespace std;
// int main()
// {
//     int test;
//     cin >> test;
//     cin.ignore();
//     while (test--)
//     {
//         string s;
//         getline(cin, s);
//         int d=0, l = s.length()-1;
//         while(s[d] == ' '){
//             d++;
//         }
//         while(s[l] == ' '){
//             l--;
//         }
//         int dem = 0;
//         for (int i = 0; i < s.length(); i++)
//         {
//             if (s[i] != ' ' && (s[i + 1] == ' ' || s[i + 1] == '\0'))
//             {
//                 dem++;
//             }
//         }
//         cout << dem << endl;
//     }
// }
#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    scanf("%d\n",&t);
    while (t--)
    {
        string s,token;
        getline(cin,s);
        stringstream s1(s);
        int dem =0;
        while (s1 >> token)
        {
            dem++;
        }
        cout << dem << endl;
    }
    
}

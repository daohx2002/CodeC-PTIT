#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    char s1[1000];
    char s2[1000];
    cin.getline(s1, 1000);
    cin.getline(s2, 1000);
    char *p;
    p = strtok(s1, " ");
    while(p != NULL){
        if(strcmp(p, s2) != 0){
            cout << p << " ";
        }
        p = strtok(NULL, " ");
    }
}
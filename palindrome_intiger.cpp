#include <bits/stdc++.h>
using namespace std;

int main(){
    int number;
    cin >> number;
    int counter=0;
    int i = 1;
    while(number/i>0){
        counter++;
        i = i * 10;
    }
    i=i/10;

    bool palindrome=true;
    int counter2=1;
    stack<int> check;
    if(number<0){
        palindrome=false;
    }
    else{
        for(int j=i;j>=1;j=j/10){
            if(counter2<=counter/2){
                check.push(number/j);
            }
            else{
                if(counter%2==0){
                    if(number/j==check.top()){
                        check.pop();
                    }
                    else{
                        palindrome=false;
                        break;
                    }
                }
                else{
                    counter++;
                }
            }
            number = number - number /j *j;
            counter2++;
        }
        
    }

    if(palindrome){
        cout<<"It is a palindrome\n";
    }
    else{
        cout<<"It is not a palindrome\n";
    }
    return 0;
}
//
//  main.cpp
//  string:finding the length
//
//  Created by Nisha Ramprasath on 3/11/23.
//

#include <iostream>
#include <string>

using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    string str="welcome";
    int count=0;
    
    for(int i=0;str[i]!='\0';i++){
        count++;
    }
    cout<<"length is  "<<count<<endl;
    return 0;
}
